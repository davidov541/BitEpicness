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
static const char *ng0 = "D:/Code/Verilog/BitEpicness/Keyboard.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 4294967295U};
static unsigned int ng3[] = {7U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {18U, 0U};
static unsigned int ng9[] = {89U, 0U};
static unsigned int ng10[] = {240U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {224U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {6U, 0U};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
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
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1116U);
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

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 4248);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t3, 8);
    xsi_driver_vfirst_trans(t24, 0, 31);
    t29 = (t0 + 4164);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1852U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng1)));
    xsi_vlogtype_concat(t16, 32, 32, 2U, t17, 24, t18, 8);
    goto LAB9;

LAB10:    t23 = ((char*)((ng2)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t23, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_29_1(char *t0)
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
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2356);
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

LAB7:    t22 = (t0 + 2724);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng1)));
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
    t45 = (t43 & t44);
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
LAB14:    t74 = (t0 + 4284);
    t75 = (t74 + 32U);
    t76 = *((char **)t75);
    t77 = (t76 + 40U);
    t78 = *((char **)t77);
    memset(t78, 0, 8);
    t79 = 1U;
    t80 = t79;
    t81 = (t42 + 4);
    t82 = *((unsigned int *)t42);
    t79 = (t79 & t82);
    t83 = *((unsigned int *)t81);
    t80 = (t80 & t83);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 | t79);
    t86 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t86 | t80);
    xsi_driver_vfirst_trans(t74, 0, 0);
    t87 = (t0 + 4172);
    *((int *)t87) = 1;

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
    t58 = *((unsigned int *)t6);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t26);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB14;

}

static void Always_38_2(char *t0)
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

LAB0:    t1 = (t0 + 3536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4180);
    *((int *)t2) = 1;
    t3 = (t0 + 3564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 932U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2172);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 424);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t5);
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

LAB26:    t45 = (t0 + 2172);
    xsi_vlogvar_wait_assign_value(t45, t13, 0, 0, 5, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2172);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 424);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t5);
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

LAB43:    t63 = (t0 + 2264);
    xsi_vlogvar_wait_assign_value(t63, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2356);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
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
        goto LAB53;

LAB50:    if (t20 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t13) = 1;

LAB53:    t24 = (t0 + 2724);
    xsi_vlogvar_wait_assign_value(t24, t13, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(40, ng0);

LAB8:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2172);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2724);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
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

LAB18:    t35 = ((char*)((ng1)));
    goto LAB19;

LAB20:    t40 = (t0 + 2172);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng4)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t42, 5, t43, 32);
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

LAB35:    t35 = (t0 + 2264);
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

LAB37:    t60 = (t0 + 2264);
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

LAB52:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB53;

}

static void Always_52_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t40[8];
    char t41[8];
    char t46[8];
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
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
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
    unsigned int t60;
    char *t61;
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
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4188);
    *((int *)t2) = 1;
    t3 = (t0 + 3708);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 932U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(60, ng0);

LAB9:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2448);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2356);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2356);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
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

LAB25:    memcpy(t13, t40, 8);

LAB26:    t81 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t81, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2356);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
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
        goto LAB47;

LAB44:    if (t20 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t15) = 1;

LAB47:    memset(t14, 0, 8);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t24) != 0)
        goto LAB50;

LAB51:    t31 = (t14 + 4);
    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB52;

LAB53:    t36 = *((unsigned int *)t14);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t31) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t14) > 0)
        goto LAB58;

LAB59:    memcpy(t13, t44, 8);

LAB60:    t45 = (t0 + 2540);
    xsi_vlogvar_wait_assign_value(t45, t13, 0, 0, 8, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(54, ng0);

LAB8:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2356);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2540);
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

LAB18:    t35 = ((char*)((ng6)));
    goto LAB19;

LAB20:    t42 = (t0 + 2356);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng7)));
    memset(t46, 0, 8);
    t47 = (t44 + 4);
    t48 = (t45 + 4);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB30;

LAB27:    if (t58 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t46) = 1;

LAB30:    memset(t41, 0, 8);
    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t62) != 0)
        goto LAB33;

LAB34:    t69 = (t41 + 4);
    t70 = *((unsigned int *)t41);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB35;

LAB36:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t69) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t41) > 0)
        goto LAB41;

LAB42:    memcpy(t40, t80, 8);

LAB43:    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t13, 1, t35, 1, t40, 1);
    goto LAB26;

LAB24:    memcpy(t13, t35, 8);
    goto LAB26;

LAB29:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t41) = 1;
    goto LAB34;

LAB33:    t68 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB34;

LAB35:    t73 = ((char*)((ng1)));
    goto LAB36;

LAB37:    t78 = (t0 + 2632);
    t79 = (t78 + 36U);
    t80 = *((char **)t79);
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t40, 1, t73, 1, t80, 1);
    goto LAB43;

LAB41:    memcpy(t40, t73, 8);
    goto LAB43;

LAB46:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t14) = 1;
    goto LAB51;

LAB50:    t30 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB51;

LAB52:    t35 = (t0 + 1576U);
    t42 = *((char **)t35);
    goto LAB53;

LAB54:    t35 = (t0 + 2540);
    t43 = (t35 + 36U);
    t44 = *((char **)t43);
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t13, 8, t42, 8, t44, 8);
    goto LAB60;

LAB58:    memcpy(t13, t42, 8);
    goto LAB60;

}

static void Always_66_4(char *t0)
{
    char t9[8];
    char t10[8];
    char t30[8];
    char t31[8];
    char t44[8];
    char t87[8];
    char t88[8];
    char t91[8];
    char t123[8];
    char t124[8];
    char t127[8];
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
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t125;
    char *t126;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4196);
    *((int *)t2) = 1;
    t3 = (t0 + 3852);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 2356);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);
    t11 = (t0 + 1668U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t11) != 0)
        goto LAB27;

LAB28:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB29;

LAB30:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t19) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t10) > 0)
        goto LAB35;

LAB36:    memcpy(t9, t28, 8);

LAB37:    t29 = (t0 + 2448);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 3);
    goto LAB24;

LAB8:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1576U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
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
        goto LAB41;

LAB38:    if (t25 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t30) = 1;

LAB41:    t12 = (t0 + 1576U);
    t18 = *((char **)t12);
    t12 = ((char*)((ng9)));
    memset(t31, 0, 8);
    t19 = (t18 + 4);
    t23 = (t12 + 4);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t12);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t23);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t19);
    t40 = *((unsigned int *)t23);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB45;

LAB42:    if (t41 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t31) = 1;

LAB45:    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t31);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t29 = (t30 + 4);
    t48 = (t31 + 4);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t29);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB46;

LAB47:
LAB48:    memset(t10, 0, 8);
    t71 = (t44 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t44);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t71) != 0)
        goto LAB51;

LAB52:    t78 = (t10 + 4);
    t79 = *((unsigned int *)t10);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB53;

LAB54:    t83 = *((unsigned int *)t10);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t78) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t10) > 0)
        goto LAB59;

LAB60:    memcpy(t9, t87, 8);

LAB61:    t160 = (t0 + 2448);
    xsi_vlogvar_assign_value(t160, t9, 0, 0, 3);
    goto LAB24;

LAB10:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB12:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1668U);
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
        goto LAB99;

LAB96:    if (t25 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t30) = 1;

LAB99:    memset(t10, 0, 8);
    t12 = (t30 + 4);
    t32 = *((unsigned int *)t12);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t12) != 0)
        goto LAB102;

LAB103:    t19 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t19);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB104;

LAB105:    t40 = *((unsigned int *)t10);
    t41 = (~(t40));
    t42 = *((unsigned int *)t19);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t19) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t10) > 0)
        goto LAB110;

LAB111:    memcpy(t9, t31, 8);

LAB112:    t89 = (t0 + 2448);
    xsi_vlogvar_assign_value(t89, t9, 0, 0, 3);
    goto LAB24;

LAB14:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1668U);
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
        goto LAB133;

LAB130:    if (t25 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t30) = 1;

LAB133:    memset(t10, 0, 8);
    t12 = (t30 + 4);
    t32 = *((unsigned int *)t12);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t12) != 0)
        goto LAB136;

LAB137:    t19 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t19);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB138;

LAB139:    t40 = *((unsigned int *)t10);
    t41 = (~(t40));
    t42 = *((unsigned int *)t19);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t19) > 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t10) > 0)
        goto LAB144;

LAB145:    memcpy(t9, t31, 8);

LAB146:    t126 = (t0 + 2448);
    xsi_vlogvar_assign_value(t126, t9, 0, 0, 3);
    goto LAB24;

LAB16:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB18:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1668U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t3) != 0)
        goto LAB173;

LAB174:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB175;

LAB176:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB177;

LAB178:    if (*((unsigned int *)t7) > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t10) > 0)
        goto LAB181;

LAB182:    memcpy(t9, t12, 8);

LAB183:    t18 = (t0 + 2448);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 3);
    goto LAB24;

LAB20:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB25:    *((unsigned int *)t10) = 1;
    goto LAB28;

LAB27:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB28;

LAB29:    t23 = ((char*)((ng6)));
    goto LAB30;

LAB31:    t28 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t9, 3, t23, 3, t28, 3);
    goto LAB37;

LAB35:    memcpy(t9, t23, 8);
    goto LAB37;

LAB40:    t11 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB44:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB45;

LAB46:    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t44) = (t55 | t56);
    t57 = (t30 + 4);
    t58 = (t31 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (~(t59));
    t61 = *((unsigned int *)t30);
    t62 = (t61 & t60);
    t63 = *((unsigned int *)t58);
    t64 = (~(t63));
    t65 = *((unsigned int *)t31);
    t66 = (t65 & t64);
    t67 = (~(t62));
    t68 = (~(t66));
    t69 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t69 & t67);
    t70 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t70 & t68);
    goto LAB48;

LAB49:    *((unsigned int *)t10) = 1;
    goto LAB52;

LAB51:    t77 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB52;

LAB53:    t82 = ((char*)((ng5)));
    goto LAB54;

LAB55:    t89 = (t0 + 1576U);
    t90 = *((char **)t89);
    t89 = ((char*)((ng10)));
    memset(t91, 0, 8);
    t92 = (t90 + 4);
    t93 = (t89 + 4);
    t94 = *((unsigned int *)t90);
    t95 = *((unsigned int *)t89);
    t96 = (t94 ^ t95);
    t97 = *((unsigned int *)t92);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = (t96 | t99);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t93);
    t103 = (t101 | t102);
    t104 = (~(t103));
    t105 = (t100 & t104);
    if (t105 != 0)
        goto LAB65;

LAB62:    if (t103 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t91) = 1;

LAB65:    memset(t88, 0, 8);
    t107 = (t91 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t91);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t107) != 0)
        goto LAB68;

LAB69:    t114 = (t88 + 4);
    t115 = *((unsigned int *)t88);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB70;

LAB71:    t119 = *((unsigned int *)t88);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t114) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t88) > 0)
        goto LAB76;

LAB77:    memcpy(t87, t123, 8);

LAB78:    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t9, 3, t82, 3, t87, 3);
    goto LAB61;

LAB59:    memcpy(t9, t82, 8);
    goto LAB61;

LAB64:    t106 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t88) = 1;
    goto LAB69;

LAB68:    t113 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB69;

LAB70:    t118 = ((char*)((ng11)));
    goto LAB71;

LAB72:    t125 = (t0 + 1576U);
    t126 = *((char **)t125);
    t125 = ((char*)((ng12)));
    memset(t127, 0, 8);
    t128 = (t126 + 4);
    t129 = (t125 + 4);
    t130 = *((unsigned int *)t126);
    t131 = *((unsigned int *)t125);
    t132 = (t130 ^ t131);
    t133 = *((unsigned int *)t128);
    t134 = *((unsigned int *)t129);
    t135 = (t133 ^ t134);
    t136 = (t132 | t135);
    t137 = *((unsigned int *)t128);
    t138 = *((unsigned int *)t129);
    t139 = (t137 | t138);
    t140 = (~(t139));
    t141 = (t136 & t140);
    if (t141 != 0)
        goto LAB82;

LAB79:    if (t139 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t127) = 1;

LAB82:    memset(t124, 0, 8);
    t143 = (t127 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t127);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t143) != 0)
        goto LAB85;

LAB86:    t150 = (t124 + 4);
    t151 = *((unsigned int *)t124);
    t152 = *((unsigned int *)t150);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB87;

LAB88:    t155 = *((unsigned int *)t124);
    t156 = (~(t155));
    t157 = *((unsigned int *)t150);
    t158 = (t156 || t157);
    if (t158 > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t150) > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t124) > 0)
        goto LAB93;

LAB94:    memcpy(t123, t159, 8);

LAB95:    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t87, 3, t118, 3, t123, 3);
    goto LAB78;

LAB76:    memcpy(t87, t118, 8);
    goto LAB78;

LAB81:    t142 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t124) = 1;
    goto LAB86;

LAB85:    t149 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB86;

LAB87:    t154 = ((char*)((ng13)));
    goto LAB88;

LAB89:    t159 = ((char*)((ng3)));
    goto LAB90;

LAB91:    xsi_vlog_unsigned_bit_combine(t123, 3, t154, 3, t159, 3);
    goto LAB95;

LAB93:    memcpy(t123, t154, 8);
    goto LAB95;

LAB98:    t11 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t10) = 1;
    goto LAB103;

LAB102:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB103;

LAB104:    t23 = ((char*)((ng13)));
    goto LAB105;

LAB106:    t28 = (t0 + 1576U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng10)));
    memset(t87, 0, 8);
    t48 = (t29 + 4);
    t49 = (t28 + 4);
    t45 = *((unsigned int *)t29);
    t46 = *((unsigned int *)t28);
    t47 = (t45 ^ t46);
    t50 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t50 ^ t51);
    t53 = (t47 | t52);
    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t49);
    t56 = (t54 | t55);
    t59 = (~(t56));
    t60 = (t53 & t59);
    if (t60 != 0)
        goto LAB116;

LAB113:    if (t56 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t87) = 1;

LAB116:    memset(t44, 0, 8);
    t58 = (t87 + 4);
    t61 = *((unsigned int *)t58);
    t63 = (~(t61));
    t64 = *((unsigned int *)t87);
    t65 = (t64 & t63);
    t67 = (t65 & 1U);
    if (t67 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t58) != 0)
        goto LAB119;

LAB120:    t77 = (t44 + 4);
    t68 = *((unsigned int *)t44);
    t69 = *((unsigned int *)t77);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB121;

LAB122:    t72 = *((unsigned int *)t44);
    t73 = (~(t72));
    t74 = *((unsigned int *)t77);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t77) > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t44) > 0)
        goto LAB127;

LAB128:    memcpy(t31, t82, 8);

LAB129:    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t9, 3, t23, 3, t31, 3);
    goto LAB112;

LAB110:    memcpy(t9, t23, 8);
    goto LAB112;

LAB115:    t57 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB116;

LAB117:    *((unsigned int *)t44) = 1;
    goto LAB120;

LAB119:    t71 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB120;

LAB121:    t78 = ((char*)((ng14)));
    goto LAB122;

LAB123:    t82 = ((char*)((ng1)));
    goto LAB124;

LAB125:    xsi_vlog_unsigned_bit_combine(t31, 3, t78, 3, t82, 3);
    goto LAB129;

LAB127:    memcpy(t31, t78, 8);
    goto LAB129;

LAB132:    t11 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB133;

LAB134:    *((unsigned int *)t10) = 1;
    goto LAB137;

LAB136:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB137;

LAB138:    t23 = ((char*)((ng11)));
    goto LAB139;

LAB140:    t28 = (t0 + 1576U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng9)));
    memset(t87, 0, 8);
    t48 = (t29 + 4);
    t49 = (t28 + 4);
    t45 = *((unsigned int *)t29);
    t46 = *((unsigned int *)t28);
    t47 = (t45 ^ t46);
    t50 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t50 ^ t51);
    t53 = (t47 | t52);
    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t49);
    t56 = (t54 | t55);
    t59 = (~(t56));
    t60 = (t53 & t59);
    if (t60 != 0)
        goto LAB150;

LAB147:    if (t56 != 0)
        goto LAB149;

LAB148:    *((unsigned int *)t87) = 1;

LAB150:    t58 = (t0 + 1576U);
    t71 = *((char **)t58);
    t58 = ((char*)((ng8)));
    memset(t88, 0, 8);
    t77 = (t71 + 4);
    t78 = (t58 + 4);
    t61 = *((unsigned int *)t71);
    t63 = *((unsigned int *)t58);
    t64 = (t61 ^ t63);
    t65 = *((unsigned int *)t77);
    t67 = *((unsigned int *)t78);
    t68 = (t65 ^ t67);
    t69 = (t64 | t68);
    t70 = *((unsigned int *)t77);
    t72 = *((unsigned int *)t78);
    t73 = (t70 | t72);
    t74 = (~(t73));
    t75 = (t69 & t74);
    if (t75 != 0)
        goto LAB154;

LAB151:    if (t73 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t88) = 1;

LAB154:    t76 = *((unsigned int *)t87);
    t79 = *((unsigned int *)t88);
    t80 = (t76 | t79);
    *((unsigned int *)t91) = t80;
    t89 = (t87 + 4);
    t90 = (t88 + 4);
    t92 = (t91 + 4);
    t81 = *((unsigned int *)t89);
    t83 = *((unsigned int *)t90);
    t84 = (t81 | t83);
    *((unsigned int *)t92) = t84;
    t85 = *((unsigned int *)t92);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB155;

LAB156:
LAB157:    memset(t44, 0, 8);
    t107 = (t91 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t91);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t107) != 0)
        goto LAB160;

LAB161:    t114 = (t44 + 4);
    t115 = *((unsigned int *)t44);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB162;

LAB163:    t119 = *((unsigned int *)t44);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t114) > 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t44) > 0)
        goto LAB168;

LAB169:    memcpy(t31, t125, 8);

LAB170:    goto LAB141;

LAB142:    xsi_vlog_unsigned_bit_combine(t9, 3, t23, 3, t31, 3);
    goto LAB146;

LAB144:    memcpy(t9, t23, 8);
    goto LAB146;

LAB149:    t57 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB150;

LAB153:    t82 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB154;

LAB155:    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    *((unsigned int *)t91) = (t94 | t95);
    t93 = (t87 + 4);
    t106 = (t88 + 4);
    t96 = *((unsigned int *)t93);
    t97 = (~(t96));
    t98 = *((unsigned int *)t87);
    t62 = (t98 & t97);
    t99 = *((unsigned int *)t106);
    t100 = (~(t99));
    t101 = *((unsigned int *)t88);
    t66 = (t101 & t100);
    t102 = (~(t62));
    t103 = (~(t66));
    t104 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t104 & t102);
    t105 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t105 & t103);
    goto LAB157;

LAB158:    *((unsigned int *)t44) = 1;
    goto LAB161;

LAB160:    t113 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB161;

LAB162:    t118 = ((char*)((ng7)));
    goto LAB163;

LAB164:    t125 = ((char*)((ng1)));
    goto LAB165;

LAB166:    xsi_vlog_unsigned_bit_combine(t31, 3, t118, 3, t125, 3);
    goto LAB170;

LAB168:    memcpy(t31, t118, 8);
    goto LAB170;

LAB171:    *((unsigned int *)t10) = 1;
    goto LAB174;

LAB173:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB174;

LAB175:    t11 = ((char*)((ng1)));
    goto LAB176;

LAB177:    t12 = ((char*)((ng14)));
    goto LAB178;

LAB179:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB183;

LAB181:    memcpy(t9, t11, 8);
    goto LAB183;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2540);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 127U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 127U);
    t15 = (t0 + 2632);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t3, 8, 8, 2U, t17, 1, t4, 7);
    t18 = (t0 + 4320);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 255U;
    t24 = t23;
    t25 = (t3 + 4);
    t26 = *((unsigned int *)t3);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 7);
    t31 = (t0 + 4204);
    *((int *)t31) = 1;

LAB1:    return;
}


extern void work_m_00000000002633923284_3435472415_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_29_1,(void *)Always_38_2,(void *)Always_52_3,(void *)Always_66_4,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000002633923284_3435472415", "isim/Main_TB_isim_beh.exe.sim/work/m_00000000002633923284_3435472415.didat");
	xsi_register_executes(pe);
}
