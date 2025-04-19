`default_nettype none
module servant_spi_slave_if
  #(parameter ADDRESS_WIDTH = 18)
   (//spi interface
    input wire spi_sck,
    input wire spi_cs,
    input wire spi_mosi,
    output  wire spi_miso, 
    //ram interface
    output wire [17:0] sAddress ,
    output wire sCSn,
    output wire sOEn,
    output wire sWRn,
    output wire sDqDir,
    output wire [7:0] sDqOut,
    input wire [7:0] sDqIn);
    
    reg [7:0] rINBUF;
    reg [7:0] rOUTBUF;
    assign spi_miso = rOUTBUF[7];
 

    reg [5:0] rCnt;
    reg  rCntOV;
    wire sCnt8;
    assign sCnt8 = (~|(rCnt[2:0])) & ((|rCnt[5:3]) | rCntOV); // COMMENT: High at rCnt%8=0 and rCnt!=0
    //assign sCnt8 = (~|(rCnt[2:0])) & ((|rCnt[5:3]) );
 
 
    reg [7:0] rCmd;
    reg [7:0] rState;
    reg [ADDRESS_WIDTH-1:0] rAddress;
    reg rReadFlag1, rReadFlag2; 
    assign sAddress = rReadFlag1 ? {rAddress[ADDRESS_WIDTH-1:8], rINBUF} : rAddress;
      
    wire sRamOE;
    assign sRamOE = sCnt8 & (rReadFlag1 | rReadFlag2);
    
    reg rWriteFlag1;
    wire sRamWR; 
    assign sRamWR = sCnt8 & spi_sck & rWriteFlag1;
     
  
    //reg [7:0] rRamWrBuf; 
    //assign sDqOut = sRamWR?rINBUF:8'h00;
    assign sDqOut =  rINBUF;
    
    reg rCmdGotFlag;
 
       
    assign sCSn = sOEn & sWRn;
    assign sOEn = ~sRamOE;
    assign sWRn = ~sRamWR;
    assign sDqDir = sRamWR;

    always@(posedge spi_sck , posedge spi_cs )begin
        if(spi_cs)begin
            rINBUF <= 'b0;
            rCnt <= 'b0; 
        end
        else
        begin 
            rINBUF <= {rINBUF[6:0], spi_mosi}; 
            rCnt <= rCnt + 1'b1;   
        end
    end
    

     
    always@( negedge spi_sck , posedge spi_cs ) begin
 
        if(spi_cs)begin
            rWriteFlag1 <= 'b0;
            rReadFlag1 <= 'b0;
            rReadFlag2 <= 'b0; 
            rAddress <= 'b0;
            rCmdGotFlag <= 0; 
            rCmd  <= 0; 
			rCntOV <= 1'b0;
        end
        else
        if(sCnt8)begin
            if(!rCmdGotFlag)begin
                rCmdGotFlag <= 1'b1;
				rCntOV <= 1'b1;
                rCmd <= rINBUF; 
                if(rINBUF == 8'h05) rOUTBUF <= rState; 
                if(rINBUF == 8'h04) rState[1] <= 1'b0; 
                if(rINBUF == 8'h06) rState[1] <= 1'b1; 
                if(rINBUF == 8'h9f) rOUTBUF <= 8'h04;     // CHECK: Changed to Manufacture ID of FRAM (Fujitsu)
            end
            else begin  
                case(rCmd[3:0])
                4'h1:begin
                    if( rCnt[5:3] == 3'b010 ) rState[7:2] <= rINBUF[7:2]; // CHECK: Changed to avoid writing to write protected bits
                    end
                4'h2:begin
                    if( rWriteFlag1 == 'b0 )begin
                        case( rCnt[5:3])      
                        3'b010: begin    // CHECK: Needed to use 18-bit addresses
                            rAddress[ADDRESS_WIDTH-1:16] <= rINBUF[1:0];   
                        end
                        3'b011: begin 
                            rAddress[ADDRESS_WIDTH-1:8] <= {rAddress[ADDRESS_WIDTH-1:16], rINBUF};   
                        end
                        3'b100: begin
                            rAddress[ADDRESS_WIDTH-1:0] <= {rAddress[ADDRESS_WIDTH-1:8], rINBUF};  
                            rWriteFlag1 <= 1'b1;
                        end 
                        default: begin
                        end
                        endcase  
                    end
                    else begin
                        //rRamWrBuf <= rINBUF;
                        rAddress <= rAddress + 1'b1; 
                    end
                        
                    end
                4'h3:begin
                    if( rReadFlag2 == 'b0 )begin
                        case( rCnt[5:3])     
                        3'b010: begin   // CHECK: Needed to use 18-bit addresses
									rAddress[ADDRESS_WIDTH-1:16] <= rINBUF[1:0];
									end 
                        3'b011: begin 
									rAddress[ADDRESS_WIDTH-1:8] <= {rAddress[ADDRESS_WIDTH-1:16], rINBUF}; 
									rOUTBUF <= 8'h00;    // QUESTION: Is this needed?
									rReadFlag1 <= 'b1; 
									end
                        3'b100: begin
									rAddress[ADDRESS_WIDTH-1:0] <= {rAddress[ADDRESS_WIDTH-1:8], rINBUF} + 1'b1;  // COMMENT: Since this negedge the address is already reed
									rOUTBUF <= sDqIn;
									rReadFlag2 <= 'b1;  
									rReadFlag1<= 'b0; 
                        end  
                        default: begin
                        end
                        endcase  
                    end 
                    else begin
                        rOUTBUF <= sDqIn;
                        rAddress <= rAddress + 1'b1; 
                    end
                    end
                4'h4:begin
                         
                    end
                4'h5:begin
						rOUTBUF <= rState;  
                    end
                4'h6:begin
                     
                    end
                4'hf:begin
                        case( rCnt[5:3])   
                        3'b010: begin // CHECK: Changed to Continuation code of FRAM
                            rOUTBUF <= 8'h7F;
                        end
                        3'b011: begin // CHECK: Changed to Product ID (1st Byte) of FRAM
                            rOUTBUF <= 8'h48;
                        end  
                        3'b100: begin // CHECK: Changed to Product ID (2nd Byte) of FRAM
                            rOUTBUF <= 8'h03;
                        end  
                        default: begin
                        end
                        endcase  
                    end
                 default:begin
                     
                    end 
                endcase 
            end 
        end
        else begin
            rOUTBUF <= {rOUTBUF[6:0],1'b0}; 
        end 
    end

endmodule