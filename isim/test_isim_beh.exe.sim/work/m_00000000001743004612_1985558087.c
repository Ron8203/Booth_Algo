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
static const char *ng0 = "";
static const char *ng1 = " %b %b %b";
static const char *ng2 = "C:/Users/rohan/Desktop/Work/Verilog/Booth_Algo/test.v";
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {15, 0};
static int ng6[] = {10, 0};

void Monitor_59_4(char *);
void Monitor_59_4(char *);


static void Monitor_59_4_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 8140);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 8156);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 40U);
    t9 = *((char **)t8);
    t8 = (t0 + 1048U);
    t10 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 3, ng1, 4, t0, (char)118, t6, 16, (char)118, t9, 16, (char)118, t10, 1);

LAB1:    return;
}

static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng2);

LAB4:    xsi_set_current_line(43, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng2);
    t2 = (t0 + 4736);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(44, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(45, ng2);
    t2 = (t0 + 4736);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(45, ng2);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_49_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng2);
    t2 = (t0 + 4984);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng2);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4008);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_51_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng2);

LAB4:    xsi_set_current_line(53, ng2);
    t2 = (t0 + 5232);
    xsi_process_wait(t2, 12000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(53, ng2);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(54, ng2);
    t2 = (t0 + 5232);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(54, ng2);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB1;

}

static void Initial_57_3(char *t0)
{

LAB0:    xsi_set_current_line(58, ng2);

LAB2:    xsi_set_current_line(59, ng2);
    Monitor_59_4(t0);

LAB1:    return;
}

void Monitor_59_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5728);
    t2 = (t0 + 6240);
    xsi_vlogfile_monitor((void *)Monitor_59_4_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001743004612_1985558087_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_49_1,(void *)Initial_51_2,(void *)Initial_57_3,(void *)Monitor_59_4};
	xsi_register_didat("work_m_00000000001743004612_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000001743004612_1985558087.didat");
	xsi_register_executes(pe);
}
