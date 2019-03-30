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
static const char *ng0 = "D:/Code/Verilog/BitEpicness/sd_model.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {149U, 0U, 16384U, 0U};
static unsigned int ng6[] = {0U, 0U, 119U, 0U};
static unsigned int ng7[] = {0U, 0U, 105U, 0U};
static unsigned int ng8[] = {81U, 0U};
static unsigned int ng9[] = {255U, 0U};
static unsigned int ng10[] = {4294967295U, 0U, 65535U, 0U};
static const char *ng11 = "Card inserted :P\n";
static int ng12[] = {80, 0};
static const char *ng13 = "Card clocking done\n";
static const char *ng14 = "Card got cmd0\n";
static int ng15[] = {8, 0};
static const char *ng16 = "Card got cmd 55\n";
static const char *ng17 = "Card got cmd 41\n";
static int ng18[] = {16, 0};
static const char *ng19 = "Card got cmd 17\n";
static int ng20[] = {12, 0};
static unsigned int ng21[] = {254U, 0U};
static int ng22[] = {512, 0};
static int ng23[] = {31, 0};
static int ng24[] = {3, 0};
static unsigned int ng25[] = {86U, 0U};
static unsigned int ng26[] = {120U, 0U};



static int sp_wait_clocks(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 564);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 2268);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);

LAB6:    t4 = (t1 + 2268);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 2176);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB8;

LAB7:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB9;

LAB10:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB12;

LAB13:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(70, ng0);
    t20 = (t2 + 48U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    xsi_wp_set_status(t22, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(69, ng0);
    t4 = (t1 + 2268);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t6, 5, t7, 32);
    t8 = (t1 + 2268);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 5);
    goto LAB6;

}

static void Always_50_0(char *t0)
{
    char t6[8];
    char t28[16];
    char t31[16];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3996);
    *((int *)t2) = 1;
    t3 = (t0 + 2820);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1120U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(52, ng0);
    t29 = (t0 + 1028U);
    t30 = *((char **)t29);
    t29 = (t0 + 1808);
    t32 = (t29 + 36U);
    t33 = *((char **)t32);
    xsi_vlog_get_part_select_value(t31, 47, t33, 46, 0);
    xsi_vlogtype_concat(t28, 48, 48, 2U, t31, 47, t30, 1);
    t34 = (t0 + 1808);
    xsi_vlogvar_assign_value(t34, t28, 0, 0, 48);
    goto LAB11;

}

static void Always_54_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t30[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4004);
    *((int *)t2) = 1;
    t3 = (t0 + 2964);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1120U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(56, ng0);
    t29 = ((char*)((ng4)));
    t31 = (t0 + 1900);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 127U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 127U);
    xsi_vlogtype_concat(t28, 8, 8, 2U, t30, 7, t29, 1);
    t42 = (t0 + 1900);
    xsi_vlogvar_assign_value(t42, t28, 0, 0, 8);
    goto LAB11;

}

static void Cont_58_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 3080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1900);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 4200);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4012);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_60_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1808);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    xsi_vlog_unsigned_equal(t8, 48, t6, 48, t7, 48);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 4236);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 4020);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng4)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_61_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1808);
    t6 = (t2 + 36U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t5, 40, t7, 47, 8);
    t8 = ((char*)((ng6)));
    xsi_vlog_unsigned_equal(t9, 40, t5, 40, t8, 40);
    memset(t4, 0, 8);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t10) != 0)
        goto LAB6;

LAB7:    t17 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB8;

LAB9:    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t17) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 4272);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 4028);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB7;

LAB8:    t21 = ((char*)((ng4)));
    goto LAB9;

LAB10:    t26 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t21, 1, t26, 1);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

}

static void Cont_62_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 3512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1808);
    t6 = (t2 + 36U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t5, 40, t7, 47, 8);
    t8 = ((char*)((ng7)));
    xsi_vlog_unsigned_equal(t9, 40, t5, 40, t8, 40);
    memset(t4, 0, 8);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t10) != 0)
        goto LAB6;

LAB7:    t17 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB8;

LAB9:    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t17) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 4308);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 4036);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB7;

LAB8:    t21 = ((char*)((ng4)));
    goto LAB9;

LAB10:    t26 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t21, 1, t26, 1);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

}

static void Cont_63_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t20;
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
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1808);
    t6 = (t2 + 36U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 8);
    t10 = (t7 + 12);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 8);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 255U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = ((char*)((ng8)));
    memset(t18, 0, 8);
    t19 = (t5 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB7;

LAB4:    if (t30 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t18) = 1;

LAB7:    memset(t4, 0, 8);
    t34 = (t18 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t34) != 0)
        goto LAB10;

LAB11:    t41 = (t4 + 4);
    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB12;

LAB13:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t41) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t50, 8);

LAB20:    t51 = (t0 + 4344);
    t52 = (t51 + 32U);
    t53 = *((char **)t52);
    t54 = (t53 + 40U);
    t55 = *((char **)t54);
    memset(t55, 0, 8);
    t56 = 1U;
    t57 = t56;
    t58 = (t3 + 4);
    t59 = *((unsigned int *)t3);
    t56 = (t56 & t59);
    t60 = *((unsigned int *)t58);
    t57 = (t57 & t60);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 | t56);
    t63 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t63 | t57);
    xsi_driver_vfirst_trans(t51, 0, 0);
    t64 = (t0 + 4044);
    *((int *)t64) = 1;

LAB1:    return;
LAB6:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t40 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB11;

LAB12:    t45 = ((char*)((ng4)));
    goto LAB13;

LAB14:    t50 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t45, 1, t50, 1);
    goto LAB20;

LAB18:    memcpy(t3, t45, 8);
    goto LAB20;

}

static void Initial_74_7(char *t0)
{
    char t6[8];
    char t30[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB4:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 48);
    xsi_set_current_line(81, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2084);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(84, ng0);

LAB5:    t2 = (t0 + 2084);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(90, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4068);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB17;

LAB1:    return;
LAB6:    xsi_set_current_line(85, ng0);

LAB8:    xsi_set_current_line(86, ng0);
    t13 = (t0 + 4060);
    *((int *)t13) = 1;
    t14 = (t0 + 3828);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t15 = (t11 ^ t12);
    t16 = (t10 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB13;

LAB10:    if (t19 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t6) = 1;

LAB13:    t13 = (t6 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB5;

LAB12:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(88, ng0);
    t14 = (t0 + 2084);
    t27 = (t14 + 36U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_signed_add(t30, 32, t28, 32, t29, 32);
    t31 = (t0 + 2084);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);
    goto LAB16;

LAB17:    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB20:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB22:    if (t34 != 0)
        goto LAB23;

LAB18:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB19:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4076);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB21:;
LAB23:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB20;
    goto LAB1;

LAB24:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 48);
    xsi_set_current_line(100, ng0);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2084);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB25:    t2 = (t0 + 2084);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB50:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB52:    if (t34 != 0)
        goto LAB53;

LAB48:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB49:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);

LAB54:    xsi_set_current_line(126, ng0);

LAB55:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4116);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB26:    xsi_set_current_line(101, ng0);

LAB28:    xsi_set_current_line(102, ng0);
    t13 = (t0 + 4084);
    *((int *)t13) = 1;
    t14 = (t0 + 3828);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(103, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB32:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB34:    if (t34 != 0)
        goto LAB35;

LAB30:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB31:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4092);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB33:;
LAB35:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB32;
    goto LAB1;

LAB36:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 48);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4100);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(110, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB40:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB42:    if (t34 != 0)
        goto LAB43;

LAB38:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB39:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 48);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4108);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB41:;
LAB43:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB40;
    goto LAB1;

LAB44:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2084);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB47:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2084);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2084);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB25;

LAB45:    xsi_set_current_line(115, ng0);
    t13 = ((char*)((ng3)));
    t14 = (t0 + 1900);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 8);
    goto LAB47;

LAB51:;
LAB53:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB50;
    goto LAB1;

LAB56:    xsi_set_current_line(128, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 48);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB59:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB61:    if (t34 != 0)
        goto LAB62;

LAB57:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB58:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4124);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB60:;
LAB62:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB59;
    goto LAB1;

LAB63:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB66:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB68:    if (t34 != 0)
        goto LAB69;

LAB64:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB65:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4132);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB67:;
LAB69:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB66;
    goto LAB1;

LAB70:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB73:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB75:    if (t34 != 0)
        goto LAB76;

LAB71:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB72:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(149, ng0);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2084);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB77:    t2 = (t0 + 2084);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng22)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4148);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB74:;
LAB76:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB73;
    goto LAB1;

LAB78:    xsi_set_current_line(150, ng0);

LAB80:    xsi_set_current_line(151, ng0);
    t13 = (t0 + 4140);
    *((int *)t13) = 1;
    t14 = (t0 + 3828);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2084);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng23)));
    memset(t39, 0, 8);
    xsi_vlog_signed_equal(t39, 32, t4, 32, t5, 32);
    memset(t30, 0, 8);
    t7 = (t39 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t39);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t7) != 0)
        goto LAB84;

LAB85:    t14 = (t30 + 4);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB86;

LAB87:    t18 = *((unsigned int *)t30);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t14) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t30) > 0)
        goto LAB92;

LAB93:    memcpy(t6, t28, 8);

LAB94:    t29 = (t0 + 1900);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB97:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB99:    if (t34 != 0)
        goto LAB100;

LAB95:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB96:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2084);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2084);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB77;

LAB82:    *((unsigned int *)t30) = 1;
    goto LAB85;

LAB84:    t13 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB85;

LAB86:    t27 = ((char*)((ng24)));
    goto LAB87;

LAB88:    t28 = ((char*)((ng1)));
    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t6, 32, t27, 32, t28, 32);
    goto LAB94;

LAB92:    memcpy(t6, t27, 8);
    goto LAB94;

LAB98:;
LAB100:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB97;
    goto LAB1;

LAB101:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3700);
    t4 = (t0 + 564);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 5);

LAB104:    t13 = (t0 + 3752);
    t14 = *((char **)t13);
    t27 = (t14 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 148U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t14);

LAB106:    if (t34 != 0)
        goto LAB107;

LAB102:    t14 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t14);

LAB103:    t35 = (t0 + 3752);
    t36 = *((char **)t35);
    t35 = (t0 + 564);
    t37 = (t0 + 3700);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4156);
    *((int *)t2) = 1;
    t3 = (t0 + 3828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB108;
    goto LAB1;

LAB105:;
LAB107:    t13 = (t0 + 3800U);
    *((char **)t13) = &&LAB104;
    goto LAB1;

LAB108:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB54;

LAB109:    goto LAB1;

}


extern void work_m_00000000004286707212_1655495382_init()
{
	static char *pe[] = {(void *)Always_50_0,(void *)Always_54_1,(void *)Cont_58_2,(void *)Cont_60_3,(void *)Cont_61_4,(void *)Cont_62_5,(void *)Cont_63_6,(void *)Initial_74_7};
	static char *se[] = {(void *)sp_wait_clocks};
	xsi_register_didat("work_m_00000000004286707212_1655495382", "isim/Main_TB_isim_beh.exe.sim/work/m_00000000004286707212_1655495382.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
