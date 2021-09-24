`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:04:34 08/21/2021
// Design Name:   control_path
// Module Name:   C:/Users/rohan/Desktop/Work/Verilog/Booth_Algo/test.v
// Project Name:  Booth_Algo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control_path
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg start;
	reg [15:0] data_in;
	reg clk;
	//reg [15:0] A,M;
   	

	// Outputs
	wire done;
	
	// Instantiate the Unit Under Test (UUT)
	data_path DP (data_in,clk,lda,clra,sfta,ldq,sftq,clrq,clrff,ldm,addsub,dec,ldcnt,qm1,eqz);
   control_path CP (lda,clra,sfta,ldq,clrq,sftq,ldm,clrff,addsub,start,dec,ldcnt,done,clk,q0,qm1,eqz);
	 
	 initial 
	  begin
      clk = 1'b0;
      #3 start = 1'b1;
		#1000 $finish;
      		
	  end 
	  
	  always #5 clk= ~clk;
	  
	  initial
      begin
		 #12 data_in = 15;
		 #10 data_in = 10; 
      end 		
		
     initial
	   begin
		$monitor($time, " %d %d %d" ,DP.Z, DP.Q ,done);
		end
		
endmodule

