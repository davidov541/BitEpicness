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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002033100377_2117930141_init();
    work_m_00000000002684540210_2094486511_init();
    work_m_00000000002976840183_3658737265_init();
    work_m_00000000000351176521_1854862904_init();
    work_m_00000000002472291214_4248196582_init();
    work_m_00000000000166839725_3795059687_init();
    xilinxcorelib_ver_m_00000000001184809869_3022711642_init();
    xilinxcorelib_ver_m_00000000001036818086_2257111219_init();
    xilinxcorelib_ver_m_00000000000414557669_0393745990_init();
    xilinxcorelib_ver_m_00000000002516893505_3931083640_init();
    work_m_00000000001664380267_2384447481_init();
    work_m_00000000000006243218_1716686652_init();
    work_m_00000000001376785595_0636391394_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000001376785595_0636391394");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}
