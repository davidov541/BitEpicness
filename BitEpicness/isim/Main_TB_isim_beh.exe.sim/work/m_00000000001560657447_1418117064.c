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
static const char *ng0 = "D:/Code/Verilog/BitEpicness/Debouncer.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {5000U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};



static void Cont_15_0(char *t0)
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

LAB0:    t1 = (t0 + 2076U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1368);
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

LAB7:    t22 = (t0 + 2924);
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
    t35 = (t0 + 2848);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_16_1(char *t0)
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

LAB0:    t1 = (t0 + 2220U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1368);
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

LAB7:    t22 = (t0 + 2960);
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
    t35 = (t0 + 2856);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_17_2(char *t0)
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

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1552);
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

LAB7:    t22 = (t0 + 2996);
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
    t35 = (t0 + 2864);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_19_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t18[8];
    char t23[8];
    char t24[8];
    char t45[8];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2872);
    *((int *)t2) = 1;
    t3 = (t0 + 2536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);
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

LAB6:    xsi_set_current_line(26, ng0);

LAB9:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
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

LAB15:    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t14) > 0)
        goto LAB20;

LAB21:    memcpy(t13, t23, 8);

LAB22:    t46 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t46, t13, 0, 0, 26, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(21, ng0);

LAB8:    xsi_set_current_line(22, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    goto LAB7;

LAB10:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = ((char*)((ng3)));
    memcpy(t18, t11, 8);
    goto LAB15;

LAB16:    t12 = (t0 + 1140U);
    t25 = *((char **)t12);
    memset(t24, 0, 8);
    t12 = (t25 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t12) != 0)
        goto LAB25;

LAB26:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB27;

LAB28:    t37 = *((unsigned int *)t24);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t32) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t24) > 0)
        goto LAB33;

LAB34:    memcpy(t23, t45, 8);

LAB35:    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t13, 32, t18, 32, t23, 32);
    goto LAB22;

LAB20:    memcpy(t13, t18, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t24) = 1;
    goto LAB26;

LAB25:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB26;

LAB27:    t36 = ((char*)((ng2)));
    goto LAB28;

LAB29:    t41 = (t0 + 1552);
    t42 = (t41 + 36U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng4)));
    memset(t45, 0, 8);
    xsi_vlog_unsigned_minus(t45, 32, t43, 26, t44, 32);
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t23, 32, t36, 32, t45, 32);
    goto LAB35;

LAB33:    memcpy(t23, t36, 8);
    goto LAB35;

}

static void Always_31_4(char *t0)
{
    char t9[8];
    char t10[8];
    char t30[8];
    char t43[8];
    char t44[8];
    char t45[8];
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
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2880);
    *((int *)t2) = 1;
    t3 = (t0 + 2680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1368);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);
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

LAB27:    t29 = (t0 + 1460);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 2);
    goto LAB14;

LAB8:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 864U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
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

LAB43:    memcpy(t9, t43, 8);

LAB44:    t78 = (t0 + 1460);
    xsi_vlogvar_assign_value(t78, t9, 0, 0, 2);
    goto LAB14;

LAB10:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 864U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t3) != 0)
        goto LAB64;

LAB65:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB66;

LAB67:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t7) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t10) > 0)
        goto LAB72;

LAB73:    memcpy(t9, t12, 8);

LAB74:    t18 = (t0 + 1460);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 2);
    goto LAB14;

LAB15:    *((unsigned int *)t10) = 1;
    goto LAB18;

LAB17:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB19:    t23 = ((char*)((ng5)));
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

LAB36:    t23 = ((char*)((ng2)));
    goto LAB37;

LAB38:    t28 = (t0 + 1140U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng5)));
    memset(t45, 0, 8);
    t46 = (t29 + 4);
    t47 = (t28 + 4);
    t48 = *((unsigned int *)t29);
    t49 = *((unsigned int *)t28);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB48;

LAB45:    if (t57 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t45) = 1;

LAB48:    memset(t44, 0, 8);
    t61 = (t45 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t45);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t61) != 0)
        goto LAB51;

LAB52:    t68 = (t44 + 4);
    t69 = *((unsigned int *)t44);
    t70 = *((unsigned int *)t68);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB53;

LAB54:    t73 = *((unsigned int *)t44);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (t74 || t75);
    if (t76 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t68) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t44) > 0)
        goto LAB59;

LAB60:    memcpy(t43, t77, 8);

LAB61:    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t9, 2, t23, 2, t43, 2);
    goto LAB44;

LAB42:    memcpy(t9, t23, 8);
    goto LAB44;

LAB47:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t44) = 1;
    goto LAB52;

LAB51:    t67 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB52;

LAB53:    t72 = ((char*)((ng1)));
    goto LAB54;

LAB55:    t77 = ((char*)((ng5)));
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t43, 2, t72, 2, t77, 2);
    goto LAB61;

LAB59:    memcpy(t43, t72, 8);
    goto LAB61;

LAB62:    *((unsigned int *)t10) = 1;
    goto LAB65;

LAB64:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB65;

LAB66:    t11 = ((char*)((ng1)));
    goto LAB67;

LAB68:    t12 = ((char*)((ng2)));
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t9, 2, t11, 2, t12, 2);
    goto LAB74;

LAB72:    memcpy(t9, t11, 8);
    goto LAB74;

}


extern void work_m_00000000001560657447_1418117064_init()
{
	static char *pe[] = {(void *)Cont_15_0,(void *)Cont_16_1,(void *)Cont_17_2,(void *)Always_19_3,(void *)Always_31_4};
	xsi_register_didat("work_m_00000000001560657447_1418117064", "isim/Main_TB_isim_beh.exe.sim/work/m_00000000001560657447_1418117064.didat");
	xsi_register_executes(pe);
}
