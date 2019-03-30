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
static const char *ng0 = "D:/Code/Verilog/BitEpicness/Touchscreen.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 4294967295U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {0U, 1U};
static int ng9[] = {1, 0};



static void Cont_40_0(char *t0)
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 3916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
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

LAB9:    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t29, 8);

LAB16:    t30 = (t0 + 5820);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    memcpy(t34, t3, 8);
    xsi_driver_vfirst_trans(t30, 0, 31);
    t35 = (t0 + 5696);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 3300);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 3208);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng1)));
    xsi_vlogtype_concat(t16, 32, 32, 4U, t24, 4, t23, 12, t20, 4, t19, 12);
    goto LAB9;

LAB10:    t29 = ((char*)((ng2)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t29, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_41_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5856);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_43_2(char *t0)
{
    char t6[8];
    char t26[8];
    char t42[8];
    char t74[8];
    char t90[8];
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
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;

LAB0:    t1 = (t0 + 4204U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3024);
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

LAB7:    t22 = (t0 + 3024);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng3)));
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
LAB14:    t70 = (t0 + 3024);
    t71 = (t70 + 36U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    t76 = (t73 + 4);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t73);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB18;

LAB15:    if (t86 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t74) = 1;

LAB18:    t91 = *((unsigned int *)t42);
    t92 = *((unsigned int *)t74);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = (t42 + 4);
    t95 = (t74 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB19;

LAB20:
LAB21:    t118 = (t0 + 5892);
    t119 = (t118 + 32U);
    t120 = *((char **)t119);
    t121 = (t120 + 40U);
    t122 = *((char **)t121);
    memset(t122, 0, 8);
    t123 = 1U;
    t124 = t123;
    t125 = (t90 + 4);
    t126 = *((unsigned int *)t90);
    t123 = (t123 & t126);
    t127 = *((unsigned int *)t125);
    t124 = (t124 & t127);
    t128 = (t122 + 4);
    t129 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t129 | t123);
    t130 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t130 | t124);
    xsi_driver_vfirst_trans(t118, 0, 0);
    t131 = (t0 + 5704);
    *((int *)t131) = 1;

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

LAB17:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB18;

LAB19:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t42 + 4);
    t105 = (t74 + 4);
    t106 = *((unsigned int *)t104);
    t107 = (~(t106));
    t108 = *((unsigned int *)t42);
    t109 = (t108 & t107);
    t110 = *((unsigned int *)t105);
    t111 = (~(t110));
    t112 = *((unsigned int *)t74);
    t113 = (t112 & t111);
    t114 = (~(t109));
    t115 = (~(t113));
    t116 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t116 & t114);
    t117 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t117 & t115);
    goto LAB21;

}

static void Cont_44_3(char *t0)
{
    char t6[8];
    char t26[8];
    char t42[8];
    char t74[8];
    char t90[8];
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
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;

LAB0:    t1 = (t0 + 4348U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3024);
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

LAB7:    t22 = (t0 + 3024);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng6)));
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
LAB14:    t70 = (t0 + 3024);
    t71 = (t70 + 36U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng7)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    t76 = (t73 + 4);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t73);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB18;

LAB15:    if (t86 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t74) = 1;

LAB18:    t91 = *((unsigned int *)t42);
    t92 = *((unsigned int *)t74);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = (t42 + 4);
    t95 = (t74 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB19;

LAB20:
LAB21:    t118 = (t0 + 5928);
    t119 = (t118 + 32U);
    t120 = *((char **)t119);
    t121 = (t120 + 40U);
    t122 = *((char **)t121);
    memset(t122, 0, 8);
    t123 = 1U;
    t124 = t123;
    t125 = (t90 + 4);
    t126 = *((unsigned int *)t90);
    t123 = (t123 & t126);
    t127 = *((unsigned int *)t125);
    t124 = (t124 & t127);
    t128 = (t122 + 4);
    t129 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t129 | t123);
    t130 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t130 | t124);
    xsi_driver_vfirst_trans(t118, 0, 0);
    t131 = (t0 + 5712);
    *((int *)t131) = 1;

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

LAB17:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB18;

LAB19:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t42 + 4);
    t105 = (t74 + 4);
    t106 = *((unsigned int *)t104);
    t107 = (~(t106));
    t108 = *((unsigned int *)t42);
    t109 = (t108 & t107);
    t110 = *((unsigned int *)t105);
    t111 = (~(t110));
    t112 = *((unsigned int *)t74);
    t113 = (t112 & t111);
    t114 = (~(t109));
    t115 = (~(t113));
    t116 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t116 & t114);
    t117 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t117 & t115);
    goto LAB21;

}

static void Cont_45_4(char *t0)
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

LAB0:    t1 = (t0 + 4492U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
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

LAB7:    t22 = (t0 + 3024);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng4)));
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
LAB14:    t70 = (t0 + 5964);
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
    t83 = (t0 + 5720);
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

static void Cont_46_5(char *t0)
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

LAB0:    t1 = (t0 + 4636U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3024);
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

LAB7:    t22 = (t0 + 3024);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng6)));
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
LAB14:    t70 = (t0 + 6000);
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
    t83 = (t0 + 5728);
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

static void Cont_48_6(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
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

LAB0:    t1 = (t0 + 4780U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2428U);
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

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t22 = (t0 + 6036);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 5736);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t21 = ((char*)((ng8)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t21, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_49_7(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
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

LAB0:    t1 = (t0 + 4924U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2428U);
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

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t22 = (t0 + 6072);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 5744);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t21 = ((char*)((ng8)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t21, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_51_8(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
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

LAB0:    t1 = (t0 + 5068U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2520U);
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

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t22 = (t0 + 6108);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 5752);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t21 = ((char*)((ng8)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t21, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_52_9(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
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

LAB0:    t1 = (t0 + 5212U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2520U);
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

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t22 = (t0 + 6144);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 5760);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t21 = ((char*)((ng8)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t21, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Always_55_10(char *t0)
{
    char t13[8];
    char t14[8];
    char t25[8];
    char t27[8];
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;

LAB0:    t1 = (t0 + 5356U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5768);
    *((int *)t2) = 1;
    t3 = (t0 + 5384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
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

LAB6:    xsi_set_current_line(64, ng0);

LAB9:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3116);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2796U);
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

LAB22:    t26 = (t0 + 3392);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2336U);
    t3 = *((char **)t2);
    t2 = (t0 + 3024);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t12 = (t5 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t22);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB26;

LAB23:    if (t19 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t25) = 1;

LAB26:    t28 = *((unsigned int *)t3);
    t29 = *((unsigned int *)t25);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t24 = (t3 + 4);
    t26 = (t25 + 4);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t24);
    t33 = *((unsigned int *)t26);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB27;

LAB28:
LAB29:    memset(t14, 0, 8);
    t57 = (t27 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t27);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t57) != 0)
        goto LAB32;

LAB33:    t64 = (t14 + 4);
    t65 = *((unsigned int *)t14);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB34;

LAB35:    t70 = *((unsigned int *)t14);
    t71 = (~(t70));
    t72 = *((unsigned int *)t64);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t64) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t14) > 0)
        goto LAB40;

LAB41:    memcpy(t13, t75, 8);

LAB42:    t76 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t76, t13, 0, 0, 12, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2336U);
    t3 = *((char **)t2);
    t2 = (t0 + 3024);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng7)));
    memset(t25, 0, 8);
    t12 = (t5 + 4);
    t22 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t22);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB46;

LAB43:    if (t19 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t25) = 1;

LAB46:    t28 = *((unsigned int *)t3);
    t29 = *((unsigned int *)t25);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t24 = (t3 + 4);
    t26 = (t25 + 4);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t24);
    t33 = *((unsigned int *)t26);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB47;

LAB48:
LAB49:    memset(t14, 0, 8);
    t57 = (t27 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t27);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t57) != 0)
        goto LAB52;

LAB53:    t64 = (t14 + 4);
    t65 = *((unsigned int *)t14);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB54;

LAB55:    t70 = *((unsigned int *)t14);
    t71 = (~(t70));
    t72 = *((unsigned int *)t64);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t64) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t14) > 0)
        goto LAB60;

LAB61:    memcpy(t13, t75, 8);

LAB62:    t76 = (t0 + 3300);
    xsi_vlogvar_wait_assign_value(t76, t13, 0, 0, 12, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(57, ng0);

LAB8:    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 264);
    t3 = *((char **)t2);
    t2 = (t0 + 3392);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    goto LAB7;

LAB10:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = (t0 + 264);
    t12 = *((char **)t11);
    goto LAB15;

LAB16:    t11 = (t0 + 3392);
    t22 = (t11 + 36U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng9)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t23, 32, t24, 32);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t13, 32, t12, 32, t25, 32);
    goto LAB22;

LAB20:    memcpy(t13, t12, 8);
    goto LAB22;

LAB25:    t23 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB26;

LAB27:    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t27) = (t37 | t38);
    t39 = (t3 + 4);
    t40 = (t25 + 4);
    t41 = *((unsigned int *)t3);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t25);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t55 & t51);
    t56 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t56 & t52);
    goto LAB29;

LAB30:    *((unsigned int *)t14) = 1;
    goto LAB33;

LAB32:    t63 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB33;

LAB34:    t68 = (t0 + 2060U);
    t69 = *((char **)t68);
    goto LAB35;

LAB36:    t68 = (t0 + 3208);
    t74 = (t68 + 36U);
    t75 = *((char **)t74);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t13, 12, t69, 12, t75, 12);
    goto LAB42;

LAB40:    memcpy(t13, t69, 8);
    goto LAB42;

LAB45:    t23 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB46;

LAB47:    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t27) = (t37 | t38);
    t39 = (t3 + 4);
    t40 = (t25 + 4);
    t41 = *((unsigned int *)t3);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t25);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t55 & t51);
    t56 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t56 & t52);
    goto LAB49;

LAB50:    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB52:    t63 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB53;

LAB54:    t68 = (t0 + 2152U);
    t69 = *((char **)t68);
    goto LAB55;

LAB56:    t68 = (t0 + 3300);
    t74 = (t68 + 36U);
    t75 = *((char **)t74);
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t13, 12, t69, 12, t75, 12);
    goto LAB62;

LAB60:    memcpy(t13, t69, 8);
    goto LAB62;

}

static void Always_71_11(char *t0)
{
    char t9[8];
    char t10[8];
    char t15[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 5500U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5776);
    *((int *)t2) = 1;
    t3 = (t0 + 5528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 3024);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB20:    goto LAB2;

LAB6:    xsi_set_current_line(73, ng0);
    t11 = (t0 + 3392);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t13);
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
        goto LAB24;

LAB21:    if (t27 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t15) = 1;

LAB24:    memset(t10, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t31) != 0)
        goto LAB27;

LAB28:    t38 = (t10 + 4);
    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB29;

LAB30:    t43 = *((unsigned int *)t10);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t38) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t10) > 0)
        goto LAB35;

LAB36:    memcpy(t9, t47, 8);

LAB37:    t48 = (t0 + 3116);
    xsi_vlogvar_assign_value(t48, t9, 0, 0, 3);
    goto LAB20;

LAB8:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3116);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB20;

LAB10:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2336U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (~(t18));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t3) != 0)
        goto LAB40;

LAB41:    t7 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t7);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB42;

LAB43:    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t7) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t10) > 0)
        goto LAB48;

LAB49:    memcpy(t9, t12, 8);

LAB50:    t13 = (t0 + 3116);
    xsi_vlogvar_assign_value(t13, t9, 0, 0, 3);
    goto LAB20;

LAB12:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 3392);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t11 = (t5 + 4);
    t12 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB54;

LAB51:    if (t27 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t15) = 1;

LAB54:    memset(t10, 0, 8);
    t14 = (t15 + 4);
    t32 = *((unsigned int *)t14);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t14) != 0)
        goto LAB57;

LAB58:    t17 = (t10 + 4);
    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t17);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB59;

LAB60:    t43 = *((unsigned int *)t10);
    t44 = (~(t43));
    t45 = *((unsigned int *)t17);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t17) > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t10) > 0)
        goto LAB65;

LAB66:    memcpy(t9, t31, 8);

LAB67:    t37 = (t0 + 3116);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 3);
    goto LAB20;

LAB14:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3116);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB20;

LAB16:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2336U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (~(t18));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t3) != 0)
        goto LAB70;

LAB71:    t7 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t7);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB72;

LAB73:    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t7) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t10) > 0)
        goto LAB78;

LAB79:    memcpy(t9, t12, 8);

LAB80:    t13 = (t0 + 3116);
    xsi_vlogvar_assign_value(t13, t9, 0, 0, 3);
    goto LAB20;

LAB23:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t10) = 1;
    goto LAB28;

LAB27:    t37 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB28;

LAB29:    t42 = ((char*)((ng3)));
    goto LAB30;

LAB31:    t47 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t9, 3, t42, 3, t47, 3);
    goto LAB37;

LAB35:    memcpy(t9, t42, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t10) = 1;
    goto LAB41;

LAB40:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB41;

LAB42:    t11 = ((char*)((ng5)));
    goto LAB43;

LAB44:    t12 = ((char*)((ng4)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB50;

LAB48:    memcpy(t9, t11, 8);
    goto LAB50;

LAB53:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t10) = 1;
    goto LAB58;

LAB57:    t16 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB58;

LAB59:    t30 = ((char*)((ng6)));
    goto LAB60;

LAB61:    t31 = ((char*)((ng5)));
    goto LAB62;

LAB63:    xsi_vlog_unsigned_bit_combine(t9, 3, t30, 3, t31, 3);
    goto LAB67;

LAB65:    memcpy(t9, t30, 8);
    goto LAB67;

LAB68:    *((unsigned int *)t10) = 1;
    goto LAB71;

LAB70:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB71;

LAB72:    t11 = ((char*)((ng1)));
    goto LAB73;

LAB74:    t12 = ((char*)((ng7)));
    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB80;

LAB78:    memcpy(t9, t11, 8);
    goto LAB80;

}


extern void work_m_00000000001500955484_4180514252_init()
{
	static char *pe[] = {(void *)Cont_40_0,(void *)Cont_41_1,(void *)Cont_43_2,(void *)Cont_44_3,(void *)Cont_45_4,(void *)Cont_46_5,(void *)Cont_48_6,(void *)Cont_49_7,(void *)Cont_51_8,(void *)Cont_52_9,(void *)Always_55_10,(void *)Always_71_11};
	xsi_register_didat("work_m_00000000001500955484_4180514252", "isim/Main_TB_isim_beh.exe.sim/work/m_00000000001500955484_4180514252.didat");
	xsi_register_executes(pe);
}
