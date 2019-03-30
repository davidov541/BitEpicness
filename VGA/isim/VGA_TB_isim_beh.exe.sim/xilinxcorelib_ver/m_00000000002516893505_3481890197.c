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



static void Always_2272_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8236U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8432);
    *((int *)t2) = 1;
    t3 = (t0 + 8264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6472U);
    t5 = *((char **)t4);
    t4 = (t0 + 7068);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    t2 = (t0 + 6564U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    t2 = (t0 + 5092U);
    t3 = *((char **)t2);
    t2 = (t0 + 7252);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    t2 = (t0 + 5184U);
    t3 = *((char **)t2);
    t2 = (t0 + 7344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    t2 = (t0 + 5276U);
    t3 = *((char **)t2);
    t2 = (t0 + 7436);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7528);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    t2 = (t0 + 5460U);
    t3 = *((char **)t2);
    t2 = (t0 + 7620);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 17);
    t2 = (t0 + 5552U);
    t3 = *((char **)t2);
    t2 = (t0 + 7712);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB2;

}


extern void xilinxcorelib_ver_m_00000000002516893505_3481890197_init()
{
	static char *pe[] = {(void *)Always_2272_0};
	xsi_register_didat("xilinxcorelib_ver_m_00000000002516893505_3481890197", "isim/VGA_TB_isim_beh.exe.sim/xilinxcorelib_ver/m_00000000002516893505_3481890197.didat");
	xsi_register_executes(pe);
}
