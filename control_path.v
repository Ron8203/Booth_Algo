`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:50:11 08/21/2021 
// Design Name: 
// Module Name:    control_path 
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
module control_path( lda,clra,sfta,ldq,clrq,sftq,ldm,clrff,addsub,start,dec,ldcnt,done,clk,q0,qm1,eqz );
  input clk,q0,qm1,eqz,start;
  output reg lda,clra,sfta,ldq,clrq,sftq,ldm,clrff,addsub,dec,ldcnt,done;
  reg [2:0] state;
  parameter S0=3'b000, S1=3'b001 ,S2=3'b010, S3=3'b011, S4=3'b100, S5=3'b101, S6=3'b110;
   
  always @(posedge clk)
   begin
	 case(state)
	  S0: if(start) state<=S1;
	  S1: state <=S1;
	  S2: #2 if ({q0,qm1}==2'b01) state <=S3;
	         else if({q0,qm1}==2'b10) state<=S4;
			   else state<=S5;
	  S3: state<=S5;
	  S4: state<=S5;
	  S5: #2 if(({q0,qm1}==01) && !eqz) state<=S3;
	         else if (({q0,qm1}==10) && !eqz) state<=S4;
				else if(eqz) state<=S6;
	  S6: state<=S6;
     default: state<=S0; 	  
	 endcase 
   end
 
 always @(state)
  begin
   case(state)
	 S0: begin clra=0; lda=0; sfta=0; clrq=0; ldq=0; sftq=0; ldm=0; clrff=0; done=0; end
	 S1: begin clra=1; clrff=1; ldcnt=1; ldm=1; end
	 S2: begin ldq=1; lda=0; clra=0; clrff=0; ldm=0; ldcnt=0; end
	 S3: begin ldq=0; addsub=1; lda=1; sfta=0; sftq=0; dec=0; end
    S4: begin lda=1; addsub=0; sfta=0; sftq=0; dec=0; ldq=0; end
    S5: begin sfta=1;sftq=1;lda=0;ldq=0;dec=1; end
    S6: begin done=1; end
    default: begin clra=0; sfta=0; ldq=0; sftq=0; end 	 
	endcase 
  end
  
endmodule
