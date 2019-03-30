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
static const char *ng0 = "D:/Code/Verilog/BitEpicness/SDCard.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {0U, 4294967295U};
static unsigned int ng5[] = {255U, 0U};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {25U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {7U, 0U};



static void Cont_39_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 864U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 30);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 30);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 7324);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1);
    t25 = (t0 + 7152);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 864U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 1073741823U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 1073741823U);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t13, 2, t4, 30);
    t14 = (t0 + 7360);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31);
    t19 = (t0 + 7160);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Cont_41_2(char *t0)
{
    char t5[8];
    char t21[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 4940U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2244U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t5);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t5 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB8;

LAB9:
LAB10:    t53 = (t0 + 7396);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    memset(t57, 0, 8);
    t58 = 1U;
    t59 = t58;
    t60 = (t21 + 4);
    t61 = *((unsigned int *)t21);
    t58 = (t58 & t61);
    t62 = *((unsigned int *)t60);
    t59 = (t59 & t62);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 | t58);
    t65 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t65 | t59);
    xsi_driver_vfirst_trans(t53, 0, 0);
    t66 = (t0 + 7168);
    *((int *)t66) = 1;

LAB1:    return;
LAB6:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t5 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t5);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB10;

}

static void Cont_42_3(char *t0)
{
    char t5[8];
    char t21[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 5084U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2244U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t5);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t5 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB8;

LAB9:
LAB10:    t53 = (t0 + 7432);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    memset(t57, 0, 8);
    t58 = 1U;
    t59 = t58;
    t60 = (t21 + 4);
    t61 = *((unsigned int *)t21);
    t58 = (t58 & t61);
    t62 = *((unsigned int *)t60);
    t59 = (t59 & t62);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 | t58);
    t65 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t65 | t59);
    xsi_driver_vfirst_trans(t53, 0, 0);
    t66 = (t0 + 7176);
    *((int *)t66) = 1;

LAB1:    return;
LAB6:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t5 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t5);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB10;

}

static void Cont_43_4(char *t0)
{
    char t5[8];
    char t21[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 5228U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2244U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t5);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t5 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB8;

LAB9:
LAB10:    t53 = (t0 + 7468);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    memset(t57, 0, 8);
    t58 = 1U;
    t59 = t58;
    t60 = (t21 + 4);
    t61 = *((unsigned int *)t21);
    t58 = (t58 & t61);
    t62 = *((unsigned int *)t60);
    t59 = (t59 & t62);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 | t58);
    t65 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t65 | t59);
    xsi_driver_vfirst_trans(t53, 0, 0);
    t66 = (t0 + 7184);
    *((int *)t66) = 1;

LAB1:    return;
LAB6:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t5 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t5);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB10;

}

static void Cont_44_5(char *t0)
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

LAB0:    t1 = (t0 + 5372U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3760);
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
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 7504);
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
    t35 = (t0 + 7192);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_46_6(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5516U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4128);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 32, t7, 8);
    t9 = (t0 + 7540);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31);
    t14 = (t0 + 7200);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Cont_47_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
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
    char *t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 5660U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 956U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t42 = (t0 + 7576);
    t43 = (t42 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    memcpy(t46, t3, 8);
    xsi_driver_vfirst_trans(t42, 0, 31);
    t47 = (t0 + 7208);
    *((int *)t47) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 2520U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t18) == 0)
        goto LAB17;

LAB19:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB20:    t26 = (t17 + 4);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    *((unsigned int *)t17) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB22;

LAB21:    t34 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = ((char*)((ng1)));
    xsi_vlogtype_concat(t16, 32, 32, 2U, t36, 31, t17, 1);
    goto LAB9;

LAB10:    t41 = ((char*)((ng4)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t41, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB22:    t30 = *((unsigned int *)t17);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t17) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB21;

}

static void Cont_48_8(char *t0)
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

LAB0:    t1 = (t0 + 5804U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4128);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
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

LAB7:    t22 = (t0 + 7612);
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
    t35 = (t0 + 7216);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_59_9(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t44[8];
    char t64[8];
    char t65[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    unsigned int t46;
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
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 5948U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 7224);
    *((int *)t2) = 1;
    t3 = (t0 + 5976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);
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

LAB6:    xsi_set_current_line(69, ng0);

LAB9:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3392);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t15) = 1;

LAB13:    memset(t14, 0, 8);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t24) != 0)
        goto LAB16;

LAB17:    t31 = (t14 + 4);
    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB18;

LAB19:    t36 = *((unsigned int *)t14);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t31) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) > 0)
        goto LAB24;

LAB25:    memcpy(t13, t44, 8);

LAB26:    t45 = (t0 + 3392);
    xsi_vlogvar_wait_assign_value(t45, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3392);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB30;

LAB27:    if (t20 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t15) = 1;

LAB30:    memset(t14, 0, 8);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t24) != 0)
        goto LAB33;

LAB34:    t31 = (t14 + 4);
    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB35;

LAB36:    t56 = *((unsigned int *)t14);
    t57 = (~(t56));
    t58 = *((unsigned int *)t31);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t31) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t14) > 0)
        goto LAB41;

LAB42:    memcpy(t13, t62, 8);

LAB43:    t63 = (t0 + 3484);
    xsi_vlogvar_wait_assign_value(t63, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t2) != 0)
        goto LAB52;

LAB53:    t5 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB54;

LAB55:    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t32 = (t28 || t29);
    if (t32 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t5) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t14) > 0)
        goto LAB60;

LAB61:    memcpy(t13, t35, 8);

LAB62:    t40 = (t0 + 3576);
    xsi_vlogvar_wait_assign_value(t40, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2060U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t2) != 0)
        goto LAB65;

LAB66:    t5 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB67;

LAB68:    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t5) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t14) > 0)
        goto LAB73;

LAB74:    memcpy(t13, t24, 8);

LAB75:    t30 = (t0 + 3668);
    xsi_vlogvar_wait_assign_value(t30, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t2) != 0)
        goto LAB78;

LAB79:    t5 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB80;

LAB81:    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t5) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t14) > 0)
        goto LAB86;

LAB87:    memcpy(t13, t15, 8);

LAB88:    t63 = (t0 + 3760);
    xsi_vlogvar_wait_assign_value(t63, t13, 0, 0, 5, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(61, ng0);

LAB8:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3392);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3484);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3668);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB7;

LAB12:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB16:    t30 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:    t35 = ((char*)((ng7)));
    goto LAB19;

LAB20:    t40 = (t0 + 3392);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng8)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t42, 8, t43, 32);
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t13, 32, t35, 32, t44, 32);
    goto LAB26;

LAB24:    memcpy(t13, t35, 8);
    goto LAB26;

LAB29:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t14) = 1;
    goto LAB34;

LAB33:    t30 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB34;

LAB35:    t35 = (t0 + 3484);
    t40 = (t35 + 36U);
    t41 = *((char **)t40);
    memset(t44, 0, 8);
    t42 = (t41 + 4);
    t36 = *((unsigned int *)t42);
    t37 = (~(t36));
    t38 = *((unsigned int *)t41);
    t39 = (t38 & t37);
    t46 = (t39 & 1U);
    if (t46 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t42) == 0)
        goto LAB44;

LAB46:    t43 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t43) = 1;

LAB47:    t45 = (t44 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    *((unsigned int *)t44) = t49;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t47) != 0)
        goto LAB49;

LAB48:    t54 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t54 & 1U);
    t55 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t55 & 1U);
    goto LAB36;

LAB37:    t60 = (t0 + 3484);
    t61 = (t60 + 36U);
    t62 = *((char **)t61);
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t13, 1, t44, 1, t62, 1);
    goto LAB43;

LAB41:    memcpy(t13, t44, 8);
    goto LAB43;

LAB44:    *((unsigned int *)t44) = 1;
    goto LAB47;

LAB49:    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t47);
    *((unsigned int *)t44) = (t50 | t51);
    t52 = *((unsigned int *)t45);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t45) = (t52 | t53);
    goto LAB48;

LAB50:    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB52:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB54:    t11 = ((char*)((ng1)));
    t12 = (t0 + 2336U);
    t23 = *((char **)t12);
    memset(t44, 0, 8);
    t12 = (t44 + 4);
    t24 = (t23 + 4);
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 0);
    *((unsigned int *)t44) = t20;
    t21 = *((unsigned int *)t24);
    t22 = (t21 >> 0);
    *((unsigned int *)t12) = t22;
    t25 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t25 & 8388607U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 8388607U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t44, 23, t11, 9);
    goto LAB55;

LAB56:    t30 = (t0 + 3576);
    t31 = (t30 + 36U);
    t35 = *((char **)t31);
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t13, 32, t15, 32, t35, 32);
    goto LAB62;

LAB60:    memcpy(t13, t15, 8);
    goto LAB62;

LAB63:    *((unsigned int *)t14) = 1;
    goto LAB66;

LAB65:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB66;

LAB67:    t11 = (t0 + 2336U);
    t12 = *((char **)t11);
    goto LAB68;

LAB69:    t11 = (t0 + 3668);
    t23 = (t11 + 36U);
    t24 = *((char **)t23);
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t13, 32, t12, 32, t24, 32);
    goto LAB75;

LAB73:    memcpy(t13, t12, 8);
    goto LAB75;

LAB76:    *((unsigned int *)t14) = 1;
    goto LAB79;

LAB78:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB79;

LAB80:    t11 = ((char*)((ng9)));
    goto LAB81;

LAB82:    t12 = (t0 + 3760);
    t23 = (t12 + 36U);
    t24 = *((char **)t23);
    t30 = ((char*)((ng1)));
    memset(t64, 0, 8);
    t31 = (t24 + 4);
    t35 = (t30 + 4);
    t25 = *((unsigned int *)t24);
    t26 = *((unsigned int *)t30);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t31);
    t29 = *((unsigned int *)t35);
    t32 = (t28 ^ t29);
    t33 = (t27 | t32);
    t34 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t35);
    t37 = (t34 | t36);
    t38 = (~(t37));
    t39 = (t33 & t38);
    if (t39 != 0)
        goto LAB92;

LAB89:    if (t37 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t64) = 1;

LAB92:    memset(t44, 0, 8);
    t41 = (t64 + 4);
    t46 = *((unsigned int *)t41);
    t48 = (~(t46));
    t49 = *((unsigned int *)t64);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t41) != 0)
        goto LAB95;

LAB96:    t43 = (t44 + 4);
    t52 = *((unsigned int *)t44);
    t53 = *((unsigned int *)t43);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB97;

LAB98:    t55 = *((unsigned int *)t44);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t43) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t44) > 0)
        goto LAB103;

LAB104:    memcpy(t15, t65, 8);

LAB105:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t13, 32, t11, 32, t15, 32);
    goto LAB88;

LAB86:    memcpy(t13, t11, 8);
    goto LAB88;

LAB91:    t40 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t44) = 1;
    goto LAB96;

LAB95:    t42 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB96;

LAB97:    t45 = ((char*)((ng1)));
    goto LAB98;

LAB99:    t47 = (t0 + 3760);
    t60 = (t47 + 36U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng8)));
    memset(t65, 0, 8);
    xsi_vlog_unsigned_minus(t65, 32, t61, 5, t62, 32);
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t15, 32, t45, 32, t65, 32);
    goto LAB105;

LAB103:    memcpy(t15, t45, 8);
    goto LAB105;

}

static void Cont_79_10(char *t0)
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

LAB0:    t1 = (t0 + 6092U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4036);
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

LAB7:    t22 = (t0 + 7648);
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
    t35 = (t0 + 7232);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_80_11(char *t0)
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

LAB0:    t1 = (t0 + 6236U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3852);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
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

LAB7:    t22 = (t0 + 7684);
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
    t35 = (t0 + 7240);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_81_12(char *t0)
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

LAB0:    t1 = (t0 + 6380U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3852);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
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

LAB7:    t22 = (t0 + 7720);
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
    t35 = (t0 + 7248);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_82_13(char *t0)
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

LAB0:    t1 = (t0 + 6524U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3852);
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

LAB7:    t22 = (t0 + 3852);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng10)));
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
LAB14:    t70 = (t0 + 7756);
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
    t83 = (t0 + 7256);
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

static void Always_84_14(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t44[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;

LAB0:    t1 = (t0 + 6668U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 7264);
    *((int *)t2) = 1;
    t3 = (t0 + 6696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
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

LAB6:    xsi_set_current_line(92, ng0);

LAB9:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3944);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3852);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3852);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t15) = 1;

LAB13:    memset(t14, 0, 8);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t24) != 0)
        goto LAB16;

LAB17:    t31 = (t14 + 4);
    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB18;

LAB19:    t36 = *((unsigned int *)t14);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t31) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) > 0)
        goto LAB24;

LAB25:    memcpy(t13, t44, 8);

LAB26:    t45 = (t0 + 4036);
    xsi_vlogvar_wait_assign_value(t45, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3072U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t2) != 0)
        goto LAB29;

LAB30:    t5 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB31;

LAB32:    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t5) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t14) > 0)
        goto LAB37;

LAB38:    memcpy(t13, t30, 8);

LAB39:    t31 = (t0 + 4128);
    xsi_vlogvar_wait_assign_value(t31, t13, 0, 0, 8, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(86, ng0);

LAB8:    xsi_set_current_line(87, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3852);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4036);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB7;

LAB12:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB16:    t30 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:    t35 = ((char*)((ng11)));
    goto LAB19;

LAB20:    t40 = (t0 + 4036);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng8)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_minus(t44, 32, t42, 3, t43, 32);
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t13, 32, t35, 32, t44, 32);
    goto LAB26;

LAB24:    memcpy(t13, t35, 8);
    goto LAB26;

LAB27:    *((unsigned int *)t14) = 1;
    goto LAB30;

LAB29:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB31:    t11 = (t0 + 4128);
    t12 = (t11 + 36U);
    t23 = *((char **)t12);
    t24 = ((char*)((ng8)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t23, 8, t24, 32);
    goto LAB32;

LAB33:    t30 = ((char*)((ng1)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t13, 32, t15, 32, t30, 32);
    goto LAB39;

LAB37:    memcpy(t13, t15, 8);
    goto LAB39;

}

static void Always_98_15(char *t0)
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
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 6812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 7272);
    *((int *)t2) = 1;
    t3 = (t0 + 6840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 3852);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(100, ng0);
    t11 = (t0 + 2152U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t11) != 0)
        goto LAB19;

LAB20:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB21;

LAB22:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t19) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t10) > 0)
        goto LAB27;

LAB28:    memcpy(t9, t28, 8);

LAB29:    t29 = (t0 + 3944);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 2);
    goto LAB16;

LAB8:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 2428U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t3) != 0)
        goto LAB32;

LAB33:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB34;

LAB35:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t7) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t10) > 0)
        goto LAB40;

LAB41:    memcpy(t9, t12, 8);

LAB42:    t18 = (t0 + 3944);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 2);
    goto LAB16;

LAB10:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 2980U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t3) != 0)
        goto LAB45;

LAB46:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB47;

LAB48:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t7) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t10) > 0)
        goto LAB53;

LAB54:    memcpy(t9, t12, 8);

LAB55:    t18 = (t0 + 3944);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 2);
    goto LAB16;

LAB12:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 4128);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t11 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB59;

LAB56:    if (t25 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t30) = 1;

LAB59:    memset(t10, 0, 8);
    t19 = (t30 + 4);
    t31 = *((unsigned int *)t19);
    t32 = (~(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t19) != 0)
        goto LAB62;

LAB63:    t28 = (t10 + 4);
    t36 = *((unsigned int *)t10);
    t37 = *((unsigned int *)t28);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB64;

LAB65:    t39 = *((unsigned int *)t10);
    t40 = (~(t39));
    t41 = *((unsigned int *)t28);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t28) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t10) > 0)
        goto LAB70;

LAB71:    memcpy(t9, t43, 8);

LAB72:    t44 = (t0 + 3944);
    xsi_vlogvar_assign_value(t44, t9, 0, 0, 2);
    goto LAB16;

LAB17:    *((unsigned int *)t10) = 1;
    goto LAB20;

LAB19:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB20;

LAB21:    t23 = ((char*)((ng2)));
    goto LAB22;

LAB23:    t28 = ((char*)((ng1)));
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t9, 2, t23, 2, t28, 2);
    goto LAB29;

LAB27:    memcpy(t9, t23, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t10) = 1;
    goto LAB33;

LAB32:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB33;

LAB34:    t11 = ((char*)((ng3)));
    goto LAB35;

LAB36:    t12 = ((char*)((ng2)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t9, 2, t11, 2, t12, 2);
    goto LAB42;

LAB40:    memcpy(t9, t11, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t10) = 1;
    goto LAB46;

LAB45:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB46;

LAB47:    t11 = ((char*)((ng10)));
    goto LAB48;

LAB49:    t12 = ((char*)((ng3)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t9, 2, t11, 2, t12, 2);
    goto LAB55;

LAB53:    memcpy(t9, t11, 8);
    goto LAB55;

LAB58:    t18 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t10) = 1;
    goto LAB63;

LAB62:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB63;

LAB64:    t29 = ((char*)((ng1)));
    goto LAB65;

LAB66:    t43 = ((char*)((ng10)));
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t9, 2, t29, 2, t43, 2);
    goto LAB72;

LAB70:    memcpy(t9, t29, 8);
    goto LAB72;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
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
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 6956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 680U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 7792);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 7280);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}


extern void work_m_00000000003780332659_1716686652_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_40_1,(void *)Cont_41_2,(void *)Cont_42_3,(void *)Cont_43_4,(void *)Cont_44_5,(void *)Cont_46_6,(void *)Cont_47_7,(void *)Cont_48_8,(void *)Always_59_9,(void *)Cont_79_10,(void *)Cont_80_11,(void *)Cont_81_12,(void *)Cont_82_13,(void *)Always_84_14,(void *)Always_98_15,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003780332659_1716686652", "isim/Main_TB_isim_beh.exe.sim/work/m_00000000003780332659_1716686652.didat");
	xsi_register_executes(pe);
}
