`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:05:07 08/21/2021 
// Design Name: 
// Module Name:    pipo 
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
module pipo(dout,din,clk,ld);
  input [15:0]din;
  input ld,clk;
  output reg [15:0] dout;
  
   always @(posedge clk)
   if(ld) dout<=din;
	


endmodule
