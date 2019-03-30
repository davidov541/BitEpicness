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
static const char *ng0 = "D:/Code/Verilog/Touchscreen/AD1RefComp.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_2592010699(char *, unsigned char );
char *ieee_p_3620187407_sub_674691591_3620187407(char *, char *, char *, char *, unsigned char );


static void work_a_3467627707_0454865367_p_0(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 7176);
    t6 = (t0 + 4060);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(122, ng0);
    t5 = (t0 + 1972U);
    t6 = *((char **)t5);
    t5 = (t0 + 7088U);
    t7 = ieee_p_3620187407_sub_674691591_3620187407(IEEE_P_3620187407, t13, t6, t5, (unsigned char)3);
    t8 = (t0 + 4060);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB7:    t1 = (t0 + 568U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

}

static void work_a_3467627707_0454865367_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(126, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4096);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 3976);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3467627707_0454865367_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(127, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t7);
    t9 = (t0 + 4132);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 3984);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3467627707_0454865367_p_3(char *t0)
{
    char t18[16];
    char t20[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1880U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3992);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(148, ng0);
    t7 = (t0 + 2156U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 1856U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(149, ng0);
    t7 = (t0 + 1696U);
    t11 = *((char **)t7);
    t12 = (15 - 14);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t7 = (t11 + t14);
    t15 = (t0 + 776U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t19 = ((IEEE_P_2592010699) + 2332);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 14;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 14);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t15 = xsi_base_array_concat(t15, t18, t19, (char)97, t7, t20, (char)99, t17, (char)101);
    t22 = (t0 + 4168);
    t25 = (t22 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t15, 16U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1788U);
    t3 = *((char **)t2);
    t12 = (15 - 14);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t7 = (t0 + 868U);
    t8 = *((char **)t7);
    t1 = *((unsigned char *)t8);
    t11 = ((IEEE_P_2592010699) + 2332);
    t15 = (t20 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 14;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t23 = (0 - 14);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t24;
    t7 = xsi_base_array_concat(t7, t18, t11, (char)97, t2, t20, (char)99, t1, (char)101);
    t16 = (t0 + 4204);
    t19 = (t16 + 32U);
    t21 = *((char **)t19);
    t22 = (t21 + 40U);
    t25 = *((char **)t22);
    memcpy(t25, t7, 16U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t2 = (t0 + 7104U);
    t7 = ieee_p_3620187407_sub_674691591_3620187407(IEEE_P_3620187407, t18, t3, t2, (unsigned char)3);
    t8 = (t0 + 4240);
    t11 = (t8 + 32U);
    t15 = *((char **)t11);
    t16 = (t15 + 40U);
    t19 = *((char **)t16);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

LAB11:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 7178);
    t8 = (t0 + 4240);
    t11 = (t8 + 32U);
    t15 = *((char **)t11);
    t16 = (t15 + 40U);
    t19 = *((char **)t16);
    memcpy(t19, t2, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 1696U);
    t3 = *((char **)t2);
    t12 = (15 - 11);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t7 = (t0 + 4276);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t15 = (t11 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 12U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1788U);
    t3 = *((char **)t2);
    t12 = (15 - 11);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t7 = (t0 + 4312);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t15 = (t11 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 12U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB9;

}

static void work_a_3467627707_0454865367_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 1856U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(190, ng0);
    t4 = (t0 + 684U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 1604U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4348);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1880U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(191, ng0);
    t4 = (t0 + 4348);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void work_a_3467627707_0454865367_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 4384);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(220, ng0);
    t1 = (t0 + 4420);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 4456);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(222, ng0);
    t1 = (t0 + 4492);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 4008);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 4384);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 4420);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 4456);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(212, ng0);
    t1 = (t0 + 4492);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(214, ng0);
    t1 = (t0 + 4384);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(215, ng0);
    t1 = (t0 + 4420);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(216, ng0);
    t1 = (t0 + 4456);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 4492);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_3467627707_0454865367_p_6(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(237, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4528);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(239, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4016);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(241, ng0);
    t4 = (t0 + 1328U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(245, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 7104U);
    t4 = (t0 + 7182);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t12);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB2;

LAB5:    xsi_set_current_line(249, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)2);
    if (t8 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(253, ng0);
    t1 = (t0 + 4528);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(242, ng0);
    t4 = (t0 + 4528);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t10 = (t7 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB10:    xsi_set_current_line(246, ng0);
    t7 = (t0 + 4528);
    t10 = (t7 + 32U);
    t11 = *((char **)t10);
    t15 = (t11 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB11;

LAB13:    xsi_set_current_line(250, ng0);
    t1 = (t0 + 4528);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

}


extern void work_a_3467627707_0454865367_init()
{
	static char *pe[] = {(void *)work_a_3467627707_0454865367_p_0,(void *)work_a_3467627707_0454865367_p_1,(void *)work_a_3467627707_0454865367_p_2,(void *)work_a_3467627707_0454865367_p_3,(void *)work_a_3467627707_0454865367_p_4,(void *)work_a_3467627707_0454865367_p_5,(void *)work_a_3467627707_0454865367_p_6};
	xsi_register_didat("work_a_3467627707_0454865367", "isim/Touch_TB_isim_beh.exe.sim/work/a_3467627707_0454865367.didat");
	xsi_register_executes(pe);
}
