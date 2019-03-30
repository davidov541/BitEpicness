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
static const char *ng0 = "D:/Code/Verilog/BitEpicness/sendSD.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static unsigned int ng4[] = {149U, 0U};
static int ng5[] = {47, 0};
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};



static void Cont_10_0(char *t0)
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

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 1472);
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

LAB7:    t22 = (t0 + 2540);
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
    t35 = (t0 + 2480);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_12_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t24[8];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
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

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1060U);
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

LAB15:    memcpy(t3, t24, 8);

LAB16:    t31 = (t0 + 2576);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 2488);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t21 = (t0 + 1380);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    t25 = (t0 + 1380);
    t26 = (t25 + 44U);
    t27 = *((char **)t26);
    t28 = (t0 + 1472);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_index_select_value(t24, 1, t23, t27, 2, t30, 6, 2);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Always_15_2(char *t0)
{
    char t13[16];
    char t14[8];
    char t18[16];
    char t29[8];
    char t30[8];
    char t31[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
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
    char *t44;
    char *t45;
    char *t47;

LAB0:    t1 = (t0 + 2284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2496);
    *((int *)t2) = 1;
    t3 = (t0 + 2312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);
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

LAB6:    xsi_set_current_line(22, ng0);

LAB9:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 968U);
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

LAB15:    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t14) > 0)
        goto LAB20;

LAB21:    memcpy(t13, t27, 16);

LAB22:    t28 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t28, t13, 0, 0, 48, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t2) != 0)
        goto LAB25;

LAB26:    t5 = (t29 + 4);
    t15 = *((unsigned int *)t29);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB27;

LAB28:    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t5) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t29) > 0)
        goto LAB33;

LAB34:    memcpy(t14, t30, 8);

LAB35:    t47 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t47, t14, 0, 0, 6, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(17, ng0);

LAB8:    xsi_set_current_line(18, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 48, 0LL);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB7;

LAB10:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = ((char*)((ng4)));
    t12 = (t0 + 784U);
    t19 = *((char **)t12);
    t12 = (t0 + 876U);
    t20 = *((char **)t12);
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t18, 48, 48, 4U, t12, 2, t20, 6, t19, 32, t11, 8);
    goto LAB15;

LAB16:    t25 = (t0 + 1380);
    t26 = (t25 + 36U);
    t27 = *((char **)t26);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t13, 48, t18, 48, t27, 48);
    goto LAB22;

LAB20:    memcpy(t13, t18, 16);
    goto LAB22;

LAB23:    *((unsigned int *)t29) = 1;
    goto LAB26;

LAB25:    t4 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB27:    t11 = ((char*)((ng5)));
    goto LAB28;

LAB29:    t12 = (t0 + 1060U);
    t19 = *((char **)t12);
    memset(t31, 0, 8);
    t12 = (t19 + 4);
    t32 = *((unsigned int *)t12);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t12) != 0)
        goto LAB38;

LAB39:    t25 = (t31 + 4);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t25);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB40;

LAB41:    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    t42 = *((unsigned int *)t25);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t25) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t31) > 0)
        goto LAB46;

LAB47:    memcpy(t30, t46, 8);

LAB48:    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t14, 32, t11, 32, t30, 32);
    goto LAB35;

LAB33:    memcpy(t14, t11, 8);
    goto LAB35;

LAB36:    *((unsigned int *)t31) = 1;
    goto LAB39;

LAB38:    t20 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB40:    t26 = ((char*)((ng6)));
    goto LAB41;

LAB42:    t27 = (t0 + 1472);
    t28 = (t27 + 36U);
    t44 = *((char **)t28);
    t45 = ((char*)((ng7)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t44, 6, t45, 32);
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t30, 32, t26, 32, t46, 32);
    goto LAB48;

LAB46:    memcpy(t30, t26, 8);
    goto LAB48;

}


extern void work_m_00000000002033100377_2117930141_init()
{
	static char *pe[] = {(void *)Cont_10_0,(void *)Cont_12_1,(void *)Always_15_2};
	xsi_register_didat("work_m_00000000002033100377_2117930141", "isim/Main_TB_isim_beh.exe.sim/work/m_00000000002033100377_2117930141.didat");
	xsi_register_executes(pe);
}
