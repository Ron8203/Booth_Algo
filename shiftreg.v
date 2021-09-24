`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:48:31 08/21/2021 
// Design Name: 
// Module Name:    shiftreg 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module shiftreg(dout,din,s_in,clk,ld,clr,sft );
  input s_in,clk,ld,clr,sft;
  input [15:0] din;
  output reg [15:0] dout;

  always@(posedge clk)
   begin
	 if(clr) dout<=0;
	 else if(ld) dout<=din;
	 else if(sft) dout<={s_in,dout[15:1]};
	 end
	 
    


endmodule
