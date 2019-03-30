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
static const char *ng0 = "G:/SDCardReader/SDCard.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {50000000U, 0U};



static void Always_54_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t44[8];
    char t64[8];
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

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3324);
    *((int *)t2) = 1;
    t3 = (t0 + 3012);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 852U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(63, ng0);

LAB9:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2184);
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

LAB26:    t45 = (t0 + 2184);
    xsi_vlogvar_wait_assign_value(t45, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2184);
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

LAB43:    t63 = (t0 + 2276);
    xsi_vlogvar_wait_assign_value(t63, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2368);
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
        goto LAB53;

LAB50:    if (t20 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t15) = 1;

LAB53:    memset(t14, 0, 8);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t24) != 0)
        goto LAB56;

LAB57:    t31 = (t14 + 4);
    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB58;

LAB59:    t36 = *((unsigned int *)t14);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t31) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t14) > 0)
        goto LAB64;

LAB65:    memcpy(t13, t44, 8);

LAB66:    t45 = (t0 + 2368);
    xsi_vlogvar_wait_assign_value(t45, t13, 0, 0, 27, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2368);
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
        goto LAB70;

LAB67:    if (t20 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t15) = 1;

LAB70:    memset(t14, 0, 8);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t24) != 0)
        goto LAB73;

LAB74:    t31 = (t14 + 4);
    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB75;

LAB76:    t36 = *((unsigned int *)t14);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t31) > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t14) > 0)
        goto LAB81;

LAB82:    memcpy(t13, t64, 8);

LAB83:    t60 = (t0 + 2460);
    xsi_vlogvar_wait_assign_value(t60, t13, 0, 0, 8, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(56, ng0);

LAB8:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2184);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2276);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 27, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2460);
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

LAB18:    t35 = ((char*)((ng1)));
    goto LAB19;

LAB20:    t40 = (t0 + 2184);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng4)));
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

LAB35:    t35 = (t0 + 2276);
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

LAB37:    t60 = (t0 + 2276);
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

LAB52:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t14) = 1;
    goto LAB57;

LAB56:    t30 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB57;

LAB58:    t35 = ((char*)((ng2)));
    goto LAB59;

LAB60:    t40 = (t0 + 2368);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng4)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t42, 27, t43, 32);
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t13, 32, t35, 32, t44, 32);
    goto LAB66;

LAB64:    memcpy(t13, t35, 8);
    goto LAB66;

LAB69:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t14) = 1;
    goto LAB74;

LAB73:    t30 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB74;

LAB75:    t35 = (t0 + 2460);
    t40 = (t35 + 36U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng4)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t41, 8, t42, 32);
    goto LAB76;

LAB77:    t43 = (t0 + 2460);
    t45 = (t43 + 36U);
    t47 = *((char **)t45);
    memcpy(t64, t47, 8);
    goto LAB78;

LAB79:    xsi_vlog_unsigned_bit_combine(t13, 32, t44, 32, t64, 32);
    goto LAB83;

LAB81:    memcpy(t13, t44, 8);
    goto LAB83;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 3128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1864U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 16, 16, 2U, t2, 11, t4, 5);
    t5 = (t0 + 3376);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 3332);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000006243218_1716686652_init()
{
	static char *pe[] = {(void *)Always_54_0,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000006243218_1716686652", "isim/SDcard_TB_isim_beh.exe.sim/work/m_00000000000006243218_1716686652.didat");
	xsi_register_executes(pe);
}
