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

/* This file is designed for use with ISim build 0xb869381d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Code/Verilog/BitEpicness/blockReceiveSD.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {4095U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {2U, 0U};



static void Cont_16_0(char *t0)
{
    char t6[8];
    char t26[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 2444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 1644);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng2)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB11;

LAB8:    if (t38 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t26) = 1;

LAB11:    t43 = *((unsigned int *)t6);
    t44 = *((unsigned int *)t26);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = (t6 + 4);
    t47 = (t26 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB12;

LAB13:
LAB14:    t70 = (t0 + 3444);
    t71 = (t70 + 32U);
    t72 = *((char **)t71);
    t73 = (t72 + 40U);
    t74 = *((char **)t73);
    memset(t74, 0, 8);
    t75 = 1U;
    t76 = t75;
    t77 = (t42 + 4);
    t78 = *((unsigned int *)t42);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 | t75);
    t82 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t82 | t76);
    xsi_driver_vfirst_trans(t70, 0, 0);
    t83 = (t0 + 3360);
    *((int *)t83) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB12:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t6 + 4);
    t57 = (t26 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t6);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t26);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    goto LAB14;

}

static void Cont_17_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 3368);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_18_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 3516);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 3376);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_20_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t25[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3384);
    *((int *)t2) = 1;
    t3 = (t0 + 2904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 772U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(29, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1736);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB14;

LAB15:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t14) > 0)
        goto LAB20;

LAB21:    memcpy(t13, t25, 8);

LAB22:    t26 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 12, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 15U);
    t12 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t22 = (t13 + 4);
    t23 = (t12 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t22);
    t20 = *((unsigned int *)t23);
    t21 = (t19 ^ t20);
    t27 = (t18 | t21);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB26;

LAB23:    if (t30 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t14) = 1;

LAB26:    t26 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t26, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 4);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 255U);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 8, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(22, ng0);

LAB8:    xsi_set_current_line(23, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB7;

LAB10:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = ((char*)((ng2)));
    goto LAB15;

LAB16:    t12 = (t0 + 1828);
    t22 = (t12 + 36U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng4)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t23, 12, t24, 32);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t13, 32, t11, 32, t25, 32);
    goto LAB22;

LAB20:    memcpy(t13, t11, 8);
    goto LAB22;

LAB25:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB26;

}

static void Always_36_4(char *t0)
{
    char t13[8];
    char t14[8];
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
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3392);
    *((int *)t2) = 1;
    t3 = (t0 + 3048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 772U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = (t0 + 1920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 32767U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 32767U);
    xsi_vlogtype_concat(t13, 16, 16, 2U, t14, 15, t3, 1);
    t16 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 16, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(38, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    goto LAB7;

}

static void Always_42_5(char *t0)
{
    char t9[8];
    char t10[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    t1 = (t0 + 3164U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3400);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1644);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);
    t11 = (t0 + 864U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t11) != 0)
        goto LAB17;

LAB18:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB19;

LAB20:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t19) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t10) > 0)
        goto LAB25;

LAB26:    memcpy(t9, t28, 8);

LAB27:    t29 = (t0 + 1736);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 2);
    goto LAB14;

LAB8:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 956U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t3);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB31;

LAB28:    if (t25 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t30) = 1;

LAB31:    memset(t10, 0, 8);
    t12 = (t30 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (~(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t12) != 0)
        goto LAB34;

LAB35:    t19 = (t10 + 4);
    t36 = *((unsigned int *)t10);
    t37 = *((unsigned int *)t19);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB36;

LAB37:    t39 = *((unsigned int *)t10);
    t40 = (~(t39));
    t41 = *((unsigned int *)t19);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t19) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t10) > 0)
        goto LAB42;

LAB43:    memcpy(t9, t28, 8);

LAB44:    t29 = (t0 + 1736);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 2);
    goto LAB14;

LAB10:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t3) != 0)
        goto LAB47;

LAB48:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB49;

LAB50:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t7) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t10) > 0)
        goto LAB55;

LAB56:    memcpy(t9, t12, 8);

LAB57:    t18 = (t0 + 1736);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 2);
    goto LAB14;

LAB15:    *((unsigned int *)t10) = 1;
    goto LAB18;

LAB17:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB19:    t23 = ((char*)((ng1)));
    goto LAB20;

LAB21:    t28 = ((char*)((ng2)));
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t9, 2, t23, 2, t28, 2);
    goto LAB27;

LAB25:    memcpy(t9, t23, 8);
    goto LAB27;

LAB30:    t11 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t10) = 1;
    goto LAB35;

LAB34:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB35;

LAB36:    t23 = ((char*)((ng1)));
    goto LAB37;

LAB38:    t28 = ((char*)((ng6)));
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t9, 2, t23, 2, t28, 2);
    goto LAB44;

LAB42:    memcpy(t9, t23, 8);
    goto LAB44;

LAB45:    *((unsigned int *)t10) = 1;
    goto LAB48;

LAB47:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB48;

LAB49:    t11 = ((char*)((ng2)));
    goto LAB50;

LAB51:    t12 = ((char*)((ng6)));
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t9, 2, t11, 2, t12, 2);
    goto LAB57;

LAB55:    memcpy(t9, t11, 8);
    goto LAB57;

}


extern void work_m_00000000003400315830_3658737265_init()
{
	static char *pe[] = {(void *)Cont_16_0,(void *)Cont_17_1,(void *)Cont_18_2,(void *)Always_20_3,(void *)Always_36_4,(void *)Always_42_5};
	xsi_register_didat("work_m_00000000003400315830_3658737265", "isim/Main_TB_isim_beh.exe.sim/work/m_00000000003400315830_3658737265.didat");
	xsi_register_executes(pe);
}
