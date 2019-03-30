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
    work_m_00000000002468065559_0302390894_init();
    xilinxcorelib_ver_m_00000000001184809869_0282048858_init();
    xilinxcorelib_ver_m_00000000001036818086_4176205067_init();
    xilinxcorelib_ver_m_00000000000414557669_1322732005_init();
    xilinxcorelib_ver_m_00000000002516893505_3481890197_init();
    work_m_00000000001664380267_1127667650_init();
    work_m_00000000000623706410_3566486687_init();
    work_m_00000000001727680263_3826279063_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000001727680263_3826279063");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}
