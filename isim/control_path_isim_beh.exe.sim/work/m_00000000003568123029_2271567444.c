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
static const char *ng0 = "C:/Users/rohan/Desktop/Work/Verilog/Booth_Algo/control_path.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {1, 0};
static int ng8[] = {10, 0};
static unsigned int ng9[] = {6U, 0U};
static int ng10[] = {0, 0};



static void Always_27_0(char *t0)
{
    char t18[8];
    char t19[8];
    char t34[8];
    char t38[8];
    char t47[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 6448);
    *((int *)t2) = 1;
    t3 = (t0 + 5912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 4960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t9 = (t0 + 2640U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB23;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 5688);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 5688);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB19:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB24:    xsi_set_current_line(30, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 3, 0LL);
    goto LAB26;

LAB27:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    t4 = (t0 + 2160U);
    t7 = *((char **)t4);
    xsi_vlogtype_concat(t18, 2, 2, 2U, t7, 1, t5, 1);
    t4 = ((char*)((ng2)));
    memset(t19, 0, 8);
    t9 = (t18 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t4);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t20 = (t14 ^ t15);
    t21 = (t13 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB31;

LAB28:    if (t24 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t19) = 1;

LAB31:    t17 = (t19 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t18, 2, 2, 2U, t4, 1, t3, 1);
    t2 = ((char*)((ng3)));
    memset(t19, 0, 8);
    t5 = (t18 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t20 = (t14 ^ t15);
    t21 = (t13 | t20);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB38;

LAB35:    if (t24 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t19) = 1;

LAB38:    t10 = (t19 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB41:
LAB34:    goto LAB23;

LAB30:    t16 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(32, ng0);
    t32 = ((char*)((ng4)));
    t33 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 3, 0LL);
    goto LAB34;

LAB37:    t9 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(33, ng0);
    t16 = ((char*)((ng5)));
    t17 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 3, 0LL);
    goto LAB41;

LAB42:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    t4 = (t0 + 2160U);
    t7 = *((char **)t4);
    xsi_vlogtype_concat(t18, 32, 2, 2U, t7, 1, t5, 1);
    t4 = ((char*)((ng7)));
    memset(t19, 0, 8);
    t9 = (t18 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t4);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t20 = (t14 ^ t15);
    t21 = (t13 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB46;

LAB43:    if (t24 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t19) = 1;

LAB46:    memset(t34, 0, 8);
    t17 = (t19 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t17) != 0)
        goto LAB49;

LAB50:    t33 = (t34 + 4);
    t35 = *((unsigned int *)t34);
    t36 = *((unsigned int *)t33);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB51;

LAB52:    memcpy(t55, t34, 8);

LAB53:    t87 = (t55 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t18, 32, 2, 2U, t4, 1, t3, 1);
    t2 = ((char*)((ng8)));
    memset(t19, 0, 8);
    t5 = (t18 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t20 = (t14 ^ t15);
    t21 = (t13 | t20);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB71;

LAB68:    if (t24 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t19) = 1;

LAB71:    memset(t34, 0, 8);
    t10 = (t19 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t10) != 0)
        goto LAB74;

LAB75:    t17 = (t34 + 4);
    t35 = *((unsigned int *)t34);
    t36 = *((unsigned int *)t17);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB76;

LAB77:    memcpy(t55, t34, 8);

LAB78:    t69 = (t55 + 4);
    t88 = *((unsigned int *)t69);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB92:
LAB67:    goto LAB23;

LAB45:    t16 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t34) = 1;
    goto LAB50;

LAB49:    t32 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB50;

LAB51:    t39 = (t0 + 2480U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t40 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t40);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t39) == 0)
        goto LAB54;

LAB56:    t46 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t46) = 1;

LAB57:    memset(t47, 0, 8);
    t48 = (t38 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t38);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t48) != 0)
        goto LAB60;

LAB61:    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t34 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB53;

LAB54:    *((unsigned int *)t38) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t47) = 1;
    goto LAB61;

LAB60:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB61;

LAB62:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t34 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t34);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB64;

LAB65:    xsi_set_current_line(37, ng0);
    t93 = ((char*)((ng4)));
    t94 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 3, 0LL);
    goto LAB67;

LAB70:    t9 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t34) = 1;
    goto LAB75;

LAB74:    t16 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB75;

LAB76:    t32 = (t0 + 2480U);
    t33 = *((char **)t32);
    memset(t38, 0, 8);
    t32 = (t33 + 4);
    t41 = *((unsigned int *)t32);
    t42 = (~(t41));
    t43 = *((unsigned int *)t33);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB82;

LAB80:    if (*((unsigned int *)t32) == 0)
        goto LAB79;

LAB81:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;

LAB82:    memset(t47, 0, 8);
    t40 = (t38 + 4);
    t49 = *((unsigned int *)t40);
    t50 = (~(t49));
    t51 = *((unsigned int *)t38);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t40) != 0)
        goto LAB85;

LAB86:    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t48 = (t34 + 4);
    t54 = (t47 + 4);
    t59 = (t55 + 4);
    t62 = *((unsigned int *)t48);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t59);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB78;

LAB79:    *((unsigned int *)t38) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t47) = 1;
    goto LAB86;

LAB85:    t46 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB86;

LAB87:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t59);
    *((unsigned int *)t55) = (t67 | t68);
    t60 = (t34 + 4);
    t61 = (t47 + 4);
    t71 = *((unsigned int *)t34);
    t72 = (~(t71));
    t73 = *((unsigned int *)t60);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t61);
    t78 = (~(t77));
    t8 = (t72 & t74);
    t79 = (t76 & t78);
    t81 = (~(t8));
    t82 = (~(t79));
    t83 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t83 & t81);
    t84 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB89;

LAB90:    xsi_set_current_line(38, ng0);
    t70 = ((char*)((ng5)));
    t87 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t87, t70, 0, 0, 3, 0LL);
    goto LAB92;

LAB93:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    goto LAB95;

}

static void Always_45_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6464);
    *((int *)t2) = 1;
    t3 = (t0 + 6160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 4960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(55, ng0);

LAB31:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);

LAB24:    xsi_set_current_line(48, ng0);
    t9 = ((char*)((ng10)));
    t10 = (t0 + 3200);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(49, ng0);

LAB25:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(50, ng0);

LAB26:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(51, ng0);

LAB27:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB15:    xsi_set_current_line(52, ng0);

LAB28:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(53, ng0);

LAB29:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(54, ng0);

LAB30:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4800);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

}


extern void work_m_00000000003568123029_2271567444_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Always_45_1};
	xsi_register_didat("work_m_00000000003568123029_2271567444", "isim/control_path_isim_beh.exe.sim/work/m_00000000003568123029_2271567444.didat");
	xsi_register_executes(pe);
}
