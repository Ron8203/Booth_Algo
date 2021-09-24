`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:27:48 08/21/2021 
// Design Name: 
// Module Name:    data_path 
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
module data_path(data_in,clk,lda,clra,sfta,ldq,sftq,clrq,clrff,ldm,addsub,dec,ldcnt,qm1,eqz);
  input lda,ldq,ldm,clra,dec,ldcnt,clrq,clrff,sfta,sftq,addsub,clk;
  input [15:0] data_in;
  output qm1,eqz;
  wire [15:0] A,M,Q,Z;
  wire [4:0]count;
  
  assign eqz = ~|count;//(to check if count == 00000)
  
  shiftreg AR (A, Z, A[15], clk, lda, clra, sfta);
  shiftreg QR (Q,data_in ,A[0],clk,ldq,clrq,sftq);
  dff      QM (Q[0],qm1,clk,clrff);
  pipo     MR (M,data_in,clk,ldm);
  ALU      AS (Z,A,M,addsub);
  counter  CN (count,dec,ldcnt,clk);
  


endmodule
