/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/rohan/Desktop/Work/Verilog/Booth_Algo/ALU.v";



static void Always_26_0(char *t0)
{
    char t14[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t2) == 0)
        goto LAB9;

LAB11:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;

LAB12:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t12, 16, t13, 16);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 16, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(29, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 16, t12, 16, t13, 16);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t20, 0, 0, 16, 0LL);
    goto LAB15;

}


extern void work_m_00000000001758691647_0886308060_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000001758691647_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000001758691647_0886308060.didat");
	xsi_register_executes(pe);
}
