`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:11:22 08/21/2021 
// Design Name: 
// Module Name:    ALU 
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
module ALU(out,in0,in1,sel);
 input [15:0]in0,in1;
 input sel;
 output reg [15:0]out;
 
 always @(*)
  begin
   if(sel) out<=in0+in1;
   else if(!sel) out<=in0-in1;
  end	
 


endmodule
