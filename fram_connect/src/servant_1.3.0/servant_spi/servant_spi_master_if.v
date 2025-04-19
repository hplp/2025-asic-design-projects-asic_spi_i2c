`default_nettype none
module servant_spi_master_if
  #(parameter ADDRESS_WIDTH = 24,
    parameter CLOCK_DIVIDER = 2)
   (// Wishbone Slave Interface
    input wire                                     clock,
    input wire                                     reset,
    input wire [31:0]                              wr_data,
    input wire [ADDRESS_WIDTH-1:2]                 address,
    input wire [3:0]                               wb_sel,
    input wire                                     wb_we,
    input wire                                     wb_cyc,
    output wire [31:0]                             rd_data,
    output reg                                     wb_ack,

    // SPI Master Interface
    input  wire                                    spi_miso,
    output wire                                    spi_sck,
    output reg                                 	   spi_ss,
    output wire                                    spi_mosi);

// State encoding
localparam  IDLE = 4'b000;
localparam  TRANSMIT_COMMAND = 4'b001;
localparam  TRANSMIT_ADDRESS1 = 4'b010;
localparam  TRANSMIT_ADDRESS2 = 4'b011;
localparam  TRANSMIT_ADDRESS3 = 4'b100;
localparam  TRANSMIT_DATA = 4'b101;
localparam  READ_DATA = 4'b110;
localparam  FINISH = 4'b111;
localparam  TEMP_STATE = 4'b1000;  // TODO: temp, need removal

// Command encoding
localparam CMD_READ_DATA = 8'h3;
localparam CMD_WRITE_DATA = 8'h2;
localparam CMD_READ_STATUS = 8'h5;
localparam CMD_WRITE_ENABLE = 8'h6;

reg												int_ack; // TODO: combine int_ack and wb_ack after removing TEMP_STATE
reg 											configed = 1'b0;  // TODO: temp, need removal
reg                                             serial_clk;
reg												serial_clk_delay;
reg         [15:0]                              clk_cnt;
reg         [2:0]                               bit_cnt;

reg         [3:0]                               state; // TODO: need to change back to [2:0] after removing temp
reg         [1:0]                               cmd_reg;
reg         [ADDRESS_WIDTH-1:0]                 address_reg;
reg         [31:0]                              wr_data_reg;
reg         [31:0]                              rd_data_reg;
reg         [1:0]                               byte_offset;
reg         [1:0]                               last_byte;
reg         [7:0]                               spi_out_reg;
reg         [7:0]                               spi_in_reg;

wire       serial_clk_posedge;
wire       serial_clk_negedge;
wire [1:0] sel_dec_start;
wire [1:0] sel_dec_last;

assign spi_sck = serial_clk;
assign spi_mosi = spi_out_reg[7];
assign rd_data = rd_data_reg;
assign serial_clk_posedge = serial_clk & ~serial_clk_delay; // TODO: Check and remove if not needed
assign serial_clk_negedge = ~serial_clk & serial_clk_delay;
//assign rd_data = {rd_data_reg[3], rd_data_reg[2], rd_data_reg[1], rd_data_reg[0]}; //TODO: Check and remove this
assign sel_dec_start = wb_sel[0] ? 2'd0 : wb_sel[1] ? 2'd1 : wb_sel[2] ? 2'd2 : wb_sel[3] ? 2'd3 : 2'd0;
assign sel_dec_last  = wb_sel[3] ? 2'd0 : wb_sel[2] ? 2'd3 : wb_sel[1] ? 2'd2 : wb_sel[0] ? 2'd1 : 2'd1;

// Clock divider to generate serial clock
always @(posedge clock or posedge reset) begin
	if (reset) begin
		serial_clk <= 1'b1;
	end else if (!spi_ss) begin
		if ((state == TRANSMIT_DATA || state == READ_DATA) && byte_offset == last_byte && clk_cnt == 0 && bit_cnt == 0) begin // TODO: Try to improve this
			serial_clk <= 1'b1;
		end else if (clk_cnt % (CLOCK_DIVIDER/2) == 0) begin
			serial_clk <= ~serial_clk;
		end else begin
			serial_clk <= serial_clk;
		end
	end else if (wb_cyc && !int_ack) begin
		serial_clk <= 1'b0;
   	end else begin
		serial_clk <= 1'b1;
	end
end

always @(negedge clock or posedge reset) begin
	if (reset) begin
		serial_clk_delay <= 1'b1;
   	end else begin
		serial_clk_delay <= serial_clk;
	end
end

always @(posedge clock or posedge reset) begin
   if (reset) begin
		clk_cnt <= 16'h0;
   end else if ((!spi_ss || wb_cyc) && !int_ack && (clk_cnt != CLOCK_DIVIDER - 1)) begin
		clk_cnt <= clk_cnt + 16'h1;
	end else begin
      clk_cnt <= 16'h0;
   end
end

always @(posedge clock or posedge reset) begin
   if (reset) begin
		bit_cnt <= 3'h0;
   end else if ((spi_ss && !wb_cyc) || int_ack) begin
		bit_cnt <= 3'h0;
   end else if (clk_cnt == 16'h0 && (!spi_ss || wb_cyc)) begin
		bit_cnt <= bit_cnt + 3'h1;
   end else begin
      bit_cnt <= bit_cnt;
   end
end

always @(posedge clock or posedge reset) begin
    if (reset) begin
		state <= IDLE;
	end else if (clk_cnt == 16'h0 && bit_cnt == 3'h0) begin
		case (state)
			IDLE: begin
				if (wb_cyc) begin
					state <= TRANSMIT_COMMAND;
				end
				else begin
					state <= IDLE;
				end
			end
			TRANSMIT_COMMAND: begin
				if(cmd_reg[1]) begin
					if(cmd_reg[0]) begin
						if(configed) state <= FINISH;
						else state <= TEMP_STATE;
					end
					else state <= READ_DATA;
				end
				else begin
					state <= TRANSMIT_ADDRESS1;
				end
			end
			TRANSMIT_ADDRESS1: begin
				state <= TRANSMIT_ADDRESS2;
			end
			TRANSMIT_ADDRESS2: begin
				state <= TRANSMIT_ADDRESS3;
			end
			TRANSMIT_ADDRESS3: begin
				if(cmd_reg[0]) begin
					state <= TRANSMIT_DATA;
				end
				else begin
					state <= READ_DATA;
				end
			end
			TRANSMIT_DATA: begin
				if (byte_offset == last_byte) begin
					state <= FINISH;
				end
				else begin
					state <= TRANSMIT_DATA;
				end
			end
			READ_DATA: begin
			  if (byte_offset == last_byte) begin
					state <= FINISH;
			  end
			  else begin
					state <= READ_DATA;
			  end
			end
			FINISH: begin
				state <= IDLE;
			end
			TEMP_STATE: begin
				state <= IDLE;
			end
			default: begin
				state <= IDLE;
			end
		endcase
	end else begin
		if (state == FINISH || state == TEMP_STATE) begin  //TODO: Try to improve
			state <= IDLE;
		end else begin
			state <= state;
		end
	end
end

always @(negedge clock) begin
	if (serial_clk_negedge) begin
		if (bit_cnt == 1) begin
			case (state)
				TRANSMIT_COMMAND: begin
				if (wb_we) begin
						if (wb_sel == 4'h0 || configed == 1'b0) spi_out_reg <= CMD_WRITE_ENABLE;
						else spi_out_reg <= CMD_WRITE_DATA;
				end
				else begin
						if (wb_sel == 4'h0) spi_out_reg <= CMD_READ_STATUS;
						else spi_out_reg <= CMD_READ_DATA;
				end
				end
				TRANSMIT_ADDRESS1:
				begin
					spi_out_reg <= address_reg[ADDRESS_WIDTH-1:16];
				end
				TRANSMIT_ADDRESS2:
				begin
					spi_out_reg <= address_reg[15:8];
				end
				TRANSMIT_ADDRESS3:
				begin
					spi_out_reg <= address_reg[7:0];
				end
				TRANSMIT_DATA: begin
					spi_out_reg <= wr_data_reg[byte_offset*8+:8];
				end
				default: begin
				end
			endcase
		end else begin
			spi_out_reg <= spi_out_reg << 1;
		end
	end else begin
		spi_out_reg <= spi_out_reg;
	end
end


always @(posedge serial_clk) begin
	if (bit_cnt == 3'h0) begin
		case (state)
			TRANSMIT_COMMAND: begin
				byte_offset <= address_reg[1:0];
			end
			TRANSMIT_DATA: begin
				byte_offset <= byte_offset + 2'h1;
			end
			READ_DATA: begin
				byte_offset <= byte_offset + 2'h1;
			end
			default: begin
			end
		endcase
	end
end


always @(posedge serial_clk) begin
	if (state == READ_DATA) begin
		spi_in_reg <= {spi_in_reg[6:0], spi_miso};
		if (bit_cnt == 3'h0) begin
			rd_data_reg[byte_offset*8+:8] <= {spi_in_reg[6:0], spi_miso};
		end
	end
end

always @(posedge clock or posedge reset) begin
    if (reset) begin
        configed <= 1'b0;
    end else if (state == TEMP_STATE || (state == FINISH && cmd_reg == 2'b11)) begin
        configed <= 1'b1;
    end else begin
        configed <= configed;
    end
end


always @(state) begin
	case (state)
		IDLE:
		begin
        	spi_ss = 1'b1;
        	wb_ack = 1'b0;
			int_ack = 1'b0;
		end
		TRANSMIT_COMMAND:
		begin
        	spi_ss = 1'b0;
        	wb_ack = 1'b0;
			int_ack = 1'b0;
		  	wr_data_reg = wr_data;
//        wr_data_reg[3] = wr_data[31:24];  //TODO: Check and remove this
//        wr_data_reg[2] = wr_data[23:16];
//        wr_data_reg[1] = wr_data[15:8];
//        wr_data_reg[0] = wr_data[7:0];
        	address_reg    = {address, sel_dec_start};
			last_byte = sel_dec_last;
			if (wb_we) begin
				cmd_reg[0] = 1'b1;
			end
			else begin
				cmd_reg[0] = 1'b0;
			end
			if (wb_sel == 4'h0 | (~configed & wb_we)) begin
				cmd_reg[1] = 1'b1;
			end
			else begin
				cmd_reg[1] = 1'b0;
			end
		end
		FINISH:
		begin
        	spi_ss = 1'b1;
        	wb_ack = 1'b1;
			int_ack = 1'b1;
		end
		TEMP_STATE:
		begin
        	spi_ss = 1'b1;
			int_ack = 1'b1;
		end
		default:
		begin
		end
	endcase
end

endmodule