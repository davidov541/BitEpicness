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
static const char *ng0 = "D:/Code/Verilog/BitEpicness/ReadPS2.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {10U, 0U};
static int ng4[] = {1, 0};



static void Cont_16_0(char *t0)
{
    char t4[8];
    char t24[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
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
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 1840);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t22 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB11;

LAB8:    if (t36 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t24) = 1;

LAB11:    t41 = *((unsigned int *)t4);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t4 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB12;

LAB13:
LAB14:    t72 = (t0 + 3060);
    t73 = (t72 + 32U);
    t74 = *((char **)t73);
    t75 = (t74 + 40U);
    t76 = *((char **)t75);
    memset(t76, 0, 8);
    t77 = 1U;
    t78 = t77;
    t79 = (t40 + 4);
    t80 = *((unsigned int *)t40);
    t77 = (t77 & t80);
    t81 = *((unsigned int *)t79);
    t78 = (t78 & t81);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t83 | t77);
    t84 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t84 | t78);
    xsi_driver_vfirst_trans(t72, 0, 0);
    t85 = (t0 + 2992);
    *((int *)t85) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB10:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t4 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t4);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB14;

}

static void Cont_17_1(char *t0)
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

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1748);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 3096);
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
    t27 = (t0 + 3000);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_18_2(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 3132);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 3008);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_21_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t36[8];
    char t41[8];
    char t42[8];
    char t47[8];
    char t83[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
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
    unsigned int t61;
    char *t62;
    char *t63;
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
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
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
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;

LAB0:    t1 = (t0 + 2796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3016);
    *((int *)t2) = 1;
    t3 = (t0 + 2824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t15) = 1;

LAB13:    memset(t14, 0, 8);
    t12 = (t15 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB17:    t29 = (t14 + 4);
    t30 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB18;

LAB19:    t37 = *((unsigned int *)t14);
    t38 = (~(t37));
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t29) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) > 0)
        goto LAB24;

LAB25:    memcpy(t13, t41, 8);

LAB26:    t84 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t84, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t2) != 0)
        goto LAB46;

LAB47:    t5 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB48;

LAB49:    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t30 = (t26 || t27);
    if (t30 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t5) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t14) > 0)
        goto LAB54;

LAB55:    memcpy(t13, t44, 8);

LAB56:    t45 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t45, t13, 0, 0, 11, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t28 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t28);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t28);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB60;

LAB57:    if (t20 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t13) = 1;

LAB60:    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t13);
    t25 = (t23 & t24);
    *((unsigned int *)t14) = t25;
    t33 = (t3 + 4);
    t34 = (t13 + 4);
    t35 = (t14 + 4);
    t26 = *((unsigned int *)t33);
    t27 = *((unsigned int *)t34);
    t30 = (t26 | t27);
    *((unsigned int *)t35) = t30;
    t31 = *((unsigned int *)t35);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB61;

LAB62:
LAB63:    t45 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t45, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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
        goto LAB67;

LAB64:    if (t20 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t15) = 1;

LAB67:    memset(t14, 0, 8);
    t29 = (t15 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t29) != 0)
        goto LAB70;

LAB71:    t34 = (t14 + 4);
    t30 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t34);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB72;

LAB73:    t37 = *((unsigned int *)t14);
    t38 = (~(t37));
    t39 = *((unsigned int *)t34);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t34) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t14) > 0)
        goto LAB78;

LAB79:    memcpy(t13, t36, 8);

LAB80:    t123 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t123, t13, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(23, ng0);

LAB8:    xsi_set_current_line(24, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB7;

LAB12:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB16:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    t33 = (t0 + 1656);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memcpy(t36, t35, 8);
    goto LAB19;

LAB20:    t43 = (t0 + 1656);
    t44 = (t43 + 36U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng3)));
    memset(t47, 0, 8);
    t48 = (t45 + 4);
    t49 = (t46 + 4);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = (t52 | t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 | t58);
    t60 = (~(t59));
    t61 = (t56 & t60);
    if (t61 != 0)
        goto LAB30;

LAB27:    if (t59 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t47) = 1;

LAB30:    memset(t42, 0, 8);
    t63 = (t47 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t47);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t63) != 0)
        goto LAB33;

LAB34:    t70 = (t42 + 4);
    t71 = *((unsigned int *)t42);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB35;

LAB36:    t75 = *((unsigned int *)t42);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t70) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t42) > 0)
        goto LAB41;

LAB42:    memcpy(t41, t83, 8);

LAB43:    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t13, 32, t36, 32, t41, 32);
    goto LAB26;

LAB24:    memcpy(t13, t36, 8);
    goto LAB26;

LAB29:    t62 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t42) = 1;
    goto LAB34;

LAB33:    t69 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB34;

LAB35:    t74 = ((char*)((ng1)));
    goto LAB36;

LAB37:    t79 = (t0 + 1656);
    t80 = (t79 + 36U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng4)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t81, 4, t82, 32);
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t41, 32, t74, 32, t83, 32);
    goto LAB43;

LAB41:    memcpy(t41, t74, 8);
    goto LAB43;

LAB44:    *((unsigned int *)t14) = 1;
    goto LAB47;

LAB46:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB47;

LAB48:    t11 = (t0 + 1748);
    t12 = (t11 + 36U);
    t28 = *((char **)t12);
    memset(t36, 0, 8);
    t29 = (t36 + 4);
    t33 = (t28 + 4);
    t19 = *((unsigned int *)t28);
    t20 = (t19 >> 1);
    *((unsigned int *)t36) = t20;
    t21 = *((unsigned int *)t33);
    t22 = (t21 >> 1);
    *((unsigned int *)t29) = t22;
    t23 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t23 & 1023U);
    t24 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t24 & 1023U);
    t34 = (t0 + 784U);
    t35 = *((char **)t34);
    xsi_vlogtype_concat(t15, 11, 11, 2U, t35, 1, t36, 10);
    goto LAB49;

LAB50:    t34 = (t0 + 1748);
    t43 = (t34 + 36U);
    t44 = *((char **)t43);
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t13, 11, t15, 11, t44, 11);
    goto LAB56;

LAB54:    memcpy(t13, t15, 8);
    goto LAB56;

LAB59:    t29 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB60;

LAB61:    t37 = *((unsigned int *)t14);
    t38 = *((unsigned int *)t35);
    *((unsigned int *)t14) = (t37 | t38);
    t43 = (t3 + 4);
    t44 = (t13 + 4);
    t39 = *((unsigned int *)t3);
    t40 = (~(t39));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = *((unsigned int *)t13);
    t53 = (~(t52));
    t54 = *((unsigned int *)t44);
    t55 = (~(t54));
    t85 = (t40 & t51);
    t86 = (t53 & t55);
    t56 = (~(t85));
    t57 = (~(t86));
    t58 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t58 & t56);
    t59 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t59 & t57);
    t60 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t60 & t56);
    t61 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t61 & t57);
    goto LAB63;

LAB66:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t14) = 1;
    goto LAB71;

LAB70:    t33 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB71;

LAB72:    t35 = ((char*)((ng2)));
    goto LAB73;

LAB74:    t43 = (t0 + 1472);
    t44 = (t43 + 36U);
    t45 = *((char **)t44);
    t46 = (t0 + 1244U);
    t48 = *((char **)t46);
    t46 = (t0 + 1748);
    t49 = (t46 + 36U);
    t62 = *((char **)t49);
    memset(t42, 0, 8);
    t63 = (t42 + 4);
    t69 = (t62 + 4);
    t50 = *((unsigned int *)t62);
    t51 = (t50 >> 9);
    t52 = (t51 & 1);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t69);
    t54 = (t53 >> 9);
    t55 = (t54 & 1);
    *((unsigned int *)t63) = t55;
    memset(t47, 0, 8);
    t70 = (t48 + 4);
    t74 = (t42 + 4);
    t56 = *((unsigned int *)t48);
    t57 = *((unsigned int *)t42);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t70);
    t60 = *((unsigned int *)t74);
    t61 = (t59 ^ t60);
    t64 = (t58 | t61);
    t65 = *((unsigned int *)t70);
    t66 = *((unsigned int *)t74);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t71 = (t64 & t68);
    if (t71 != 0)
        goto LAB82;

LAB81:    if (t67 != 0)
        goto LAB83;

LAB84:    t72 = *((unsigned int *)t45);
    t73 = *((unsigned int *)t47);
    t75 = (t72 & t73);
    *((unsigned int *)t83) = t75;
    t80 = (t45 + 4);
    t81 = (t47 + 4);
    t82 = (t83 + 4);
    t76 = *((unsigned int *)t80);
    t77 = *((unsigned int *)t81);
    t78 = (t76 | t77);
    *((unsigned int *)t82) = t78;
    t87 = *((unsigned int *)t82);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB85;

LAB86:
LAB87:    memset(t41, 0, 8);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t83);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t106) != 0)
        goto LAB90;

LAB91:    t113 = (t41 + 4);
    t114 = *((unsigned int *)t41);
    t115 = *((unsigned int *)t113);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB92;

LAB93:    t118 = *((unsigned int *)t41);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t113) > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t41) > 0)
        goto LAB98;

LAB99:    memcpy(t36, t122, 8);

LAB100:    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t13, 1, t35, 1, t36, 1);
    goto LAB80;

LAB78:    memcpy(t13, t35, 8);
    goto LAB80;

LAB82:    *((unsigned int *)t47) = 1;
    goto LAB84;

LAB83:    t79 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB84;

LAB85:    t89 = *((unsigned int *)t83);
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t83) = (t89 | t90);
    t84 = (t45 + 4);
    t91 = (t47 + 4);
    t92 = *((unsigned int *)t45);
    t93 = (~(t92));
    t94 = *((unsigned int *)t84);
    t95 = (~(t94));
    t96 = *((unsigned int *)t47);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t85 = (t93 & t95);
    t86 = (t97 & t99);
    t100 = (~(t85));
    t101 = (~(t86));
    t102 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t102 & t100);
    t103 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t103 & t101);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & t100);
    t105 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t105 & t101);
    goto LAB87;

LAB88:    *((unsigned int *)t41) = 1;
    goto LAB91;

LAB90:    t112 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB91;

LAB92:    t117 = ((char*)((ng2)));
    goto LAB93;

LAB94:    t122 = ((char*)((ng1)));
    goto LAB95;

LAB96:    xsi_vlog_unsigned_bit_combine(t36, 1, t117, 1, t122, 1);
    goto LAB100;

LAB98:    memcpy(t36, t117, 8);
    goto LAB100;

}


extern void work_m_00000000002797502877_0205461495_init()
{
	static char *pe[] = {(void *)Cont_16_0,(void *)Cont_17_1,(void *)Cont_18_2,(void *)Always_21_3};
	xsi_register_didat("work_m_00000000002797502877_0205461495", "isim/Main_TB_isim_beh.exe.sim/work/m_00000000002797502877_0205461495.didat");
	xsi_register_executes(pe);
}
