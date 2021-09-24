`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:20:17 08/21/2021 
// Design Name: 
// Module Name:    counter 
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
module counter(dout,dec,ld,clk);
  input dec,ld,clk;
  output reg [4:0] dout;
  
  always @(posedge clk)
   begin
	if(dec) dout<=dout-1;
	else if (ld) dout<= 5'b10000;
	end


endmodule
