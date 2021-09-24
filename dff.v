`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:00:19 08/21/2021 
// Design Name: 
// Module Name:    dff 
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
module dff(d,q,clk,clr);

 input d,clk,clr;
 output reg q;
  
 always @(posedge clk)
  begin
  if(clr) q<=0;
  else q<=d;
  end

endmodule
