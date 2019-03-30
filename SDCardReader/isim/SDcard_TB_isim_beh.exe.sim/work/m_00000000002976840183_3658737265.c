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
static const char *ng0 = "G:/SDCardReader/blockReceiveSD.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {4095U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};



static void Cont_31_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 2444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1644);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 3596);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t36 = (t0 + 3504);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

}

static void Cont_32_1(char *t0)
{
    char t3[8];
    char t15[8];
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
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 2588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1828);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 3632);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 3512);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void Cont_33_2(char *t0)
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
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1828);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 4);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 3668);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 3520);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_34_3(char *t0)
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

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3704);
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
    t18 = (t0 + 3528);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_35_4(char *t0)
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

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB7:    t22 = (t0 + 3740);
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
    t35 = (t0 + 3536);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_37_5(char *t0)
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

LAB0:    t1 = (t0 + 3164U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3544);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
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

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1736);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1416U);
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
    xsi_set_current_line(48, ng0);
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
    t22 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t22, t13, 0, 0, 16, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(39, ng0);

LAB8:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB7;

LAB10:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = ((char*)((ng3)));
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

}

static void Always_51_6(char *t0)
{
    char t9[8];
    char t10[8];
    char t14[8];
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
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 3308U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3552);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1644);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 1, t7, 1);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 1);
    if (t8 == 1)
        goto LAB8;

LAB9:
LAB11:
LAB10:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 864U);
    t12 = *((char **)t11);
    t11 = (t0 + 956U);
    t13 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t13 + 4);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB16;

LAB13:    if (t26 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t14) = 1;

LAB16:    t31 = *((unsigned int *)t12);
    t32 = *((unsigned int *)t14);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t12 + 4);
    t35 = (t14 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB17;

LAB18:
LAB19:    memset(t10, 0, 8);
    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t62) != 0)
        goto LAB22;

LAB23:    t69 = (t10 + 4);
    t70 = *((unsigned int *)t10);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB24;

LAB25:    t74 = *((unsigned int *)t10);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t69) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t10) > 0)
        goto LAB30;

LAB31:    memcpy(t9, t78, 8);

LAB32:    t79 = (t0 + 1736);
    xsi_vlogvar_assign_value(t79, t9, 0, 0, 1);
    goto LAB12;

LAB8:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1828);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t7 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB36;

LAB33:    if (t26 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t14) = 1;

LAB36:    memset(t10, 0, 8);
    t15 = (t14 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t37 = (t33 & t32);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t15) != 0)
        goto LAB39;

LAB40:    t29 = (t10 + 4);
    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t29);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB41;

LAB42:    t42 = *((unsigned int *)t10);
    t43 = (~(t42));
    t46 = *((unsigned int *)t29);
    t47 = (t43 || t46);
    if (t47 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t29) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t10) > 0)
        goto LAB47;

LAB48:    memcpy(t9, t35, 8);

LAB49:    t36 = (t0 + 1736);
    xsi_vlogvar_assign_value(t36, t9, 0, 0, 1);
    goto LAB12;

LAB15:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB16;

LAB17:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t12 + 4);
    t45 = (t14 + 4);
    t46 = *((unsigned int *)t12);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t14);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB19;

LAB20:    *((unsigned int *)t10) = 1;
    goto LAB23;

LAB22:    t68 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB23;

LAB24:    t73 = ((char*)((ng5)));
    goto LAB25;

LAB26:    t78 = ((char*)((ng3)));
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t9, 1, t73, 1, t78, 1);
    goto LAB32;

LAB30:    memcpy(t9, t73, 8);
    goto LAB32;

LAB35:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB39:    t16 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB40;

LAB41:    t34 = ((char*)((ng3)));
    goto LAB42;

LAB43:    t35 = ((char*)((ng5)));
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t9, 1, t34, 1, t35, 1);
    goto LAB49;

LAB47:    memcpy(t9, t34, 8);
    goto LAB49;

}


extern void work_m_00000000002976840183_3658737265_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_32_1,(void *)Cont_33_2,(void *)Cont_34_3,(void *)Cont_35_4,(void *)Always_37_5,(void *)Always_51_6};
	xsi_register_didat("work_m_00000000002976840183_3658737265", "isim/SDcard_TB_isim_beh.exe.sim/work/m_00000000002976840183_3658737265.didat");
	xsi_register_executes(pe);
}
