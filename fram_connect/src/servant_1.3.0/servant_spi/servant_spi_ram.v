`default_nettype none
module servant_spi_ram
  #(//Memory parameters
    parameter depth = 65536,
    parameter aw    = $clog2(depth),
    parameter RESET_STRATEGY = "",
    parameter memfile = "")
   (input wire 		i_clk,
    input wire [aw-1:0] i_addr,
    input wire [7:0] 	i_wdata,
    input wire 		i_we,
    input wire 		i_re,
    output wire [7:0] 	o_rdata);

   reg [31:0] 		mem [0:depth/4-1] /* verilator public */;

	 wire [aw-3:0] addr_hi;
   wire [1:0] addr_lo;
	
	 reg [31:0]   data_int_1, data_int_2;
	 reg [aw-3:0] addr_int;
	 reg          we_int;
	
	 assign addr_hi = i_addr[aw-1:2];
   assign addr_lo = i_addr[1:0];
	
	 assign o_rdata = data_int_1[(addr_lo * 8) +: 8];

   always @(negedge i_clk) begin
		 data_int_1 <= mem[addr_hi];
		 addr_int   <= addr_hi;
		 we_int <= i_we;
   end
	
	 always @(posedge i_clk) begin
     if (!we_int) begin
			 mem[addr_int] <= data_int_2;
		 end
   end
	
	 always @(negedge we_int) begin
		 data_int_2 = data_int_1;
		 if(!i_we) begin
       data_int_2[(addr_lo * 8) +: 8] = i_wdata;
		 end
   end

   initial
     if(|memfile) begin
`ifndef ISE
`ifndef CCGM
	$display("Preloading %m from %s", memfile);
`endif
`endif
	$readmemh(memfile, mem);
     end

endmodule
