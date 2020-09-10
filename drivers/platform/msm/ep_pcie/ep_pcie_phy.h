/* Copyright (c) 2015, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __EP_PCIE_PHY_H
#define __EP_PCIE_PHY_H

#define QSERDES_COM_ATB_SEL1                           0x000
#define QSERDES_COM_ATB_SEL2                           0x004
#define QSERDES_COM_FREQ_UPDATE                        0x008
#define QSERDES_COM_BG_TIMER                           0x00C
#define QSERDES_COM_SSC_EN_CENTER                      0x010
#define QSERDES_COM_SSC_ADJ_PER1                       0x014
#define QSERDES_COM_SSC_ADJ_PER2                       0x018
#define QSERDES_COM_SSC_PER1                           0x01C
#define QSERDES_COM_SSC_PER2                           0x020
#define QSERDES_COM_SSC_STEP_SIZE1                     0x024
#define QSERDES_COM_SSC_STEP_SIZE2                     0x028
#define QSERDES_COM_POST_DIV                           0x02C
#define QSERDES_COM_POST_DIV_MUX                       0x030
#define QSERDES_COM_BIAS_EN_CLKBUFLR_EN                0x034
#define QSERDES_COM_CLK_ENABLE1                        0x038
#define QSERDES_COM_SYS_CLK_CTRL                       0x03C
#define QSERDES_COM_SYSCLK_BUF_ENABLE                  0x040
#define QSERDES_COM_PLL_EN                             0x044
#define QSERDES_COM_PLL_IVCO                           0x048
#define QSERDES_COM_LOCK_CMP1_MODE0                    0x04C
#define QSERDES_COM_LOCK_CMP2_MODE0                    0x050
#define QSERDES_COM_LOCK_CMP3_MODE0                    0x054
#define QSERDES_COM_LOCK_CMP1_MODE1                    0x058
#define QSERDES_COM_LOCK_CMP2_MODE1                    0x05C
#define QSERDES_COM_LOCK_CMP3_MODE1                    0x060
#define QSERDES_COM_CMN_RSVD0                          0x064
#define QSERDES_COM_EP_CLOCK_DETECT_CTRL               0x068
#define QSERDES_COM_SYSCLK_DET_COMP_STATUS             0x06C
#define QSERDES_COM_BG_TRIM                            0x070
#define QSERDES_COM_CLK_EP_DIV                         0x074
#define QSERDES_COM_CP_CTRL_MODE0                      0x078
#define QSERDES_COM_CP_CTRL_MODE1                      0x07C
#define QSERDES_COM_CMN_RSVD1                          0x080
#define QSERDES_COM_PLL_RCTRL_MODE0                    0x084
#define QSERDES_COM_PLL_RCTRL_MODE1                    0x088
#define QSERDES_COM_CMN_RSVD2                          0x08C
#define QSERDES_COM_PLL_CCTRL_MODE0                    0x090
#define QSERDES_COM_PLL_CCTRL_MODE1                    0x094
#define QSERDES_COM_CMN_RSVD3                          0x098
#define QSERDES_COM_PLL_CNTRL                          0x09C
#define QSERDES_COM_PHASE_SEL_CTRL                     0x0A0
#define QSERDES_COM_PHASE_SEL_DC                       0x0A4
#define QSERDES_COM_BIAS_EN_CTRL_BY_PSM                0x0A8
#define QSERDES_COM_SYSCLK_EN_SEL                      0x0AC
#define QSERDES_COM_CML_SYSCLK_SEL                     0x0B0
#define QSERDES_COM_RESETSM_CNTRL                      0x0B4
#define QSERDES_COM_RESETSM_CNTRL2                     0x0B8
#define QSERDES_COM_RESTRIM_CTRL                       0x0BC
#define QSERDES_COM_RESTRIM_CTRL2                      0x0C0
#define QSERDES_COM_RESCODE_DIV_NUM                    0x0C4
#define QSERDES_COM_LOCK_CMP_EN                        0x0C8
#define QSERDES_COM_LOCK_CMP_CFG                       0x0CC
#define QSERDES_COM_DEC_START_MODE0                    0x0D0
#define QSERDES_COM_DEC_START_MODE1                    0x0D4
#define QSERDES_COM_VCOCAL_DEADMAN_CTRL                0x0D8
#define QSERDES_COM_DIV_FRAC_START1_MODE0              0x0DC
#define QSERDES_COM_DIV_FRAC_START2_MODE0              0x0E0
#define QSERDES_COM_DIV_FRAC_START3_MODE0              0x0E4
#define QSERDES_COM_DIV_FRAC_START1_MODE1              0x0E8
#define QSERDES_COM_DIV_FRAC_START2_MODE1              0x0EC
#define QSERDES_COM_DIV_FRAC_START3_MODE1              0x0F0
#define QSERDES_COM_VCO_TUNE_MINVAL1                   0x0F4
#define QSERDES_COM_VCO_TUNE_MINVAL2                   0x0F8
#define QSERDES_COM_CMN_RSVD4                          0x0FC
#define QSERDES_COM_INTEGLOOP_INITVAL                  0x100
#define QSERDES_COM_INTEGLOOP_EN                       0x104
#define QSERDES_COM_INTEGLOOP_GAIN0_MODE0              0x108
#define QSERDES_COM_INTEGLOOP_GAIN1_MODE0              0x10C
#define QSERDES_COM_INTEGLOOP_GAIN0_MODE1              0x110
#define QSERDES_COM_INTEGLOOP_GAIN1_MODE1              0x114
#define QSERDES_COM_VCO_TUNE_MAXVAL1                   0x118
#define QSERDES_COM_VCO_TUNE_MAXVAL2                   0x11C
#define QSERDES_COM_RES_TRIM_CONTROL2                  0x120
#define QSERDES_COM_VCO_TUNE_CTRL                      0x124
#define QSERDES_COM_VCO_TUNE_MAP                       0x128
#define QSERDES_COM_VCO_TUNE1_MODE0                    0x12C
#define QSERDES_COM_VCO_TUNE2_MODE0                    0x130
#define QSERDES_COM_VCO_TUNE1_MODE1                    0x134
#define QSERDES_COM_VCO_TUNE2_MODE1                    0x138
#define QSERDES_COM_VCO_TUNE_INITVAL1                  0x13C
#define QSERDES_COM_VCO_TUNE_INITVAL2                  0x140
#define QSERDES_COM_VCO_TUNE_TIMER1                    0x144
#define QSERDES_COM_VCO_TUNE_TIMER2                    0x148
#define QSERDES_COM_SAR                                0x14C
#define QSERDES_COM_SAR_CLK                            0x150
#define QSERDES_COM_SAR_CODE_OUT_STATUS                0x154
#define QSERDES_COM_SAR_CODE_READY_STATUS              0x158
#define QSERDES_COM_CMN_STATUS                         0x15C
#define QSERDES_COM_RESET_SM_STATUS                    0x160
#define QSERDES_COM_RESTRIM_CODE_STATUS                0x164
#define QSERDES_COM_PLLCAL_CODE1_STATUS                0x168
#define QSERDES_COM_PLLCAL_CODE2_STATUS                0x16C
#define QSERDES_COM_BG_CTRL                            0x170
#define QSERDES_COM_CLK_SELECT                         0x174
#define QSERDES_COM_HSCLK_SEL                          0x178
#define QSERDES_COM_PLL_ANALOG                         0x180
#define QSERDES_COM_CORECLK_DIV                        0x184
#define QSERDES_COM_SW_RESET                           0x188
#define QSERDES_COM_CORE_CLK_EN                        0x18C
#define QSERDES_COM_C_READY_STATUS                     0x190
#define QSERDES_COM_CMN_CONFIG                         0x194
#define QSERDES_COM_CMN_RATE_OVERRIDE                  0x198
#define QSERDES_COM_SVS_MODE_CLK_SEL                   0x19C
#define QSERDES_COM_DEBUG_BUS0                         0x1A0
#define QSERDES_COM_DEBUG_BUS1                         0x1A4
#define QSERDES_COM_DEBUG_BUS2                         0x1A8
#define QSERDES_COM_DEBUG_BUS3                         0x1AC
#define QSERDES_COM_DEBUG_BUS_SEL                      0x1B0
#define QSERDES_COM_CMN_MISC1                          0x1B4
#define QSERDES_COM_CMN_MISC2                          0x1B8
#define QSERDES_COM_CORECLK_DIV_MODE1                  0x1BC
#define QSERDES_COM_CMN_RSVD5                          0x1C0
#define QSERDES_TX_BIST_MODE_LANENO                    0x200
#define QSERDES_TX_BIST_INVERT                         0x204
#define QSERDES_TX_CLKBUF_ENABLE                       0x208
#define QSERDES_TX_CMN_CONTROL_ONE                     0x20C
#define QSERDES_TX_CMN_CONTROL_TWO                     0x210
#define QSERDES_TX_CMN_CONTROL_THREE                   0x214
#define QSERDES_TX_TX_EMP_POST1_LVL                    0x218
#define QSERDES_TX_TX_POST2_EMPH                       0x21C
#define QSERDES_TX_TX_BOOST_LVL_UP_DN                  0x220
#define QSERDES_TX_HP_PD_ENABLES                       0x224
#define QSERDES_TX_TX_IDLE_LVL_LARGE_AMP               0x228
#define QSERDES_TX_TX_DRV_LVL                          0x22C
#define QSERDES_TX_TX_DRV_LVL_OFFSET                   0x230
#define QSERDES_TX_RESET_TSYNC_EN                      0x234
#define QSERDES_TX_PRE_STALL_LDO_BOOST_EN              0x238
#define QSERDES_TX_TX_BAND                             0x23C
#define QSERDES_TX_SLEW_CNTL                           0x240
#define QSERDES_TX_INTERFACE_SELECT                    0x244
#define QSERDES_TX_LPB_EN                              0x248
#define QSERDES_TX_RES_CODE_LANE_TX                    0x24C
#define QSERDES_TX_RES_CODE_LANE_RX                    0x250
#define QSERDES_TX_RES_CODE_LANE_OFFSET                0x254
#define QSERDES_TX_PERL_LENGTH1                        0x258
#define QSERDES_TX_PERL_LENGTH2                        0x25C
#define QSERDES_TX_SERDES_BYP_EN_OUT                   0x260
#define QSERDES_TX_DEBUG_BUS_SEL                       0x264
#define QSERDES_TX_HIGHZ_TRANSCEIVEREN_BIAS_DRVR_EN    0x268
#define QSERDES_TX_TX_POL_INV                          0x26C
#define QSERDES_TX_PARRATE_REC_DETECT_IDLE_EN          0x270
#define QSERDES_TX_BIST_PATTERN1                       0x274
#define QSERDES_TX_BIST_PATTERN2                       0x278
#define QSERDES_TX_BIST_PATTERN3                       0x27C
#define QSERDES_TX_BIST_PATTERN4                       0x280
#define QSERDES_TX_BIST_PATTERN5                       0x284
#define QSERDES_TX_BIST_PATTERN6                       0x288
#define QSERDES_TX_BIST_PATTERN7                       0x28C
#define QSERDES_TX_BIST_PATTERN8                       0x290
#define QSERDES_TX_LANE_MODE                           0x294
#define QSERDES_TX_IDAC_CAL_LANE_MODE                  0x298
#define QSERDES_TX_IDAC_CAL_LANE_MODE_CONFIGURATION    0x29C
#define QSERDES_TX_ATB_SEL1                            0x2A0
#define QSERDES_TX_ATB_SEL2                            0x2A4
#define QSERDES_TX_RCV_DETECT_LVL                      0x2A8
#define QSERDES_TX_RCV_DETECT_LVL_2                    0x2AC
#define QSERDES_TX_PRBS_SEED1                          0x2B0
#define QSERDES_TX_PRBS_SEED2                          0x2B4
#define QSERDES_TX_PRBS_SEED3                          0x2B8
#define QSERDES_TX_PRBS_SEED4                          0x2BC
#define QSERDES_TX_RESET_GEN                           0x2C0
#define QSERDES_TX_RESET_GEN_MUXES                     0x2C4
#define QSERDES_TX_TRAN_DRVR_EMP_EN                    0x2C8
#define QSERDES_TX_TX_INTERFACE_MODE                   0x2CC
#define QSERDES_TX_PWM_CTRL                            0x2D0
#define QSERDES_TX_PWM_ENCODED_OR_DATA                 0x2D4
#define QSERDES_TX_PWM_GEAR_1_DIVIDER_BAND2            0x2D8
#define QSERDES_TX_PWM_GEAR_2_DIVIDER_BAND2            0x2DC
#define QSERDES_TX_PWM_GEAR_3_DIVIDER_BAND2            0x2E0
#define QSERDES_TX_PWM_GEAR_4_DIVIDER_BAND2            0x2E4
#define QSERDES_TX_PWM_GEAR_1_DIVIDER_BAND0_1          0x2E8
#define QSERDES_TX_PWM_GEAR_2_DIVIDER_BAND0_1          0x2EC
#define QSERDES_TX_PWM_GEAR_3_DIVIDER_BAND0_1          0x2F0
#define QSERDES_TX_PWM_GEAR_4_DIVIDER_BAND0_1          0x2F4
#define QSERDES_TX_VMODE_CTRL1                         0x2F8
#define QSERDES_TX_VMODE_CTRL2                         0x2FC
#define QSERDES_TX_TX_ALOG_INTF_OBSV_CNTL              0x300
#define QSERDES_TX_BIST_STATUS                         0x304
#define QSERDES_TX_BIST_ERROR_COUNT1                   0x308
#define QSERDES_TX_BIST_ERROR_COUNT2                   0x30C
#define QSERDES_TX_TX_ALOG_INTF_OBSV                   0x310
#define QSERDES_RX_UCDR_FO_GAIN_HALF                   0x400
#define QSERDES_RX_UCDR_FO_GAIN_QUARTER                0x404
#define QSERDES_RX_UCDR_FO_GAIN_EIGHTH                 0x408
#define QSERDES_RX_UCDR_FO_GAIN                        0x40C
#define QSERDES_RX_UCDR_SO_GAIN_HALF                   0x410
#define QSERDES_RX_UCDR_SO_GAIN_QUARTER                0x414
#define QSERDES_RX_UCDR_SO_GAIN_EIGHTH                 0x418
#define QSERDES_RX_UCDR_SO_GAIN                        0x41C
#define QSERDES_RX_UCDR_SVS_FO_GAIN_HALF               0x420
#define QSERDES_RX_UCDR_SVS_FO_GAIN_QUARTER            0x424
#define QSERDES_RX_UCDR_SVS_FO_GAIN_EIGHTH             0x428
#define QSERDES_RX_UCDR_SVS_FO_GAIN                    0x42C
#define QSERDES_RX_UCDR_SVS_SO_GAIN_HALF               0x430
#define QSERDES_RX_UCDR_SVS_SO_GAIN_QUARTER            0x434
#define QSERDES_RX_UCDR_SVS_SO_GAIN_EIGHTH             0x438
#define QSERDES_RX_UCDR_SVS_SO_GAIN                    0x43C
#define QSERDES_RX_UCDR_FASTLOCK_FO_GAIN               0x440
#define QSERDES_RX_UCDR_FD_GAIN                        0x444
#define QSERDES_RX_UCDR_SO_SATURATION_AND_ENABLE       0x448
#define QSERDES_RX_UCDR_FO_TO_SO_DELAY                 0x44C
#define QSERDES_RX_UCDR_FASTLOCK_COUNT_LOW             0x450
#define QSERDES_RX_UCDR_FASTLOCK_COUNT_HIGH            0x454
#define QSERDES_RX_UCDR_MODULATE                       0x458
#define QSERDES_RX_UCDR_PI_CONTROLS                    0x45C
#define QSERDES_RX_RBIST_CONTROL                       0x460
#define QSERDES_RX_AUX_CONTROL                         0x464
#define QSERDES_RX_AUX_DATA_TCOARSE                    0x468
#define QSERDES_RX_AUX_DATA_TFINE_LSB                  0x46C
#define QSERDES_RX_AUX_DATA_TFINE_MSB                  0x470
#define QSERDES_RX_RCLK_AUXDATA_SEL                    0x474
#define QSERDES_RX_AC_JTAG_ENABLE                      0x478
#define QSERDES_RX_AC_JTAG_INITP                       0x47C
#define QSERDES_RX_AC_JTAG_INITN                       0x480
#define QSERDES_RX_AC_JTAG_LVL                         0x484
#define QSERDES_RX_AC_JTAG_MODE                        0x488
#define QSERDES_RX_AC_JTAG_RESET                       0x48C
#define QSERDES_RX_RX_TERM_BW                          0x490
#define QSERDES_RX_RX_RCVR_IQ_EN                       0x494
#define QSERDES_RX_RX_IDAC_I_DC_OFFSETS                0x498
#define QSERDES_RX_RX_IDAC_IBAR_DC_OFFSETS             0x49C
#define QSERDES_RX_RX_IDAC_Q_DC_OFFSETS                0x4A0
#define QSERDES_RX_RX_IDAC_QBAR_DC_OFFSETS             0x4A4
#define QSERDES_RX_RX_IDAC_A_DC_OFFSETS                0x4A8
#define QSERDES_RX_RX_IDAC_ABAR_DC_OFFSETS             0x4AC
#define QSERDES_RX_RX_IDAC_EN                          0x4B0
#define QSERDES_RX_RX_IDAC_ENABLES                     0x4B4
#define QSERDES_RX_RX_IDAC_SIGN                        0x4B8
#define QSERDES_RX_RX_HIGHZ_HIGHRATE                   0x4BC
#define QSERDES_RX_RX_TERM_AC_BYPASS_DC_COUPLE_OFFSET  0x4C0
#define QSERDES_RX_RX_EQ_GAIN1_LSB                     0x4C4
#define QSERDES_RX_RX_EQ_GAIN1_MSB                     0x4C8
#define QSERDES_RX_RX_EQ_GAIN2_LSB                     0x4CC
#define QSERDES_RX_RX_EQ_GAIN2_MSB                     0x4D0
#define QSERDES_RX_RX_EQU_ADAPTOR_CNTRL1               0x4D4
#define QSERDES_RX_RX_EQU_ADAPTOR_CNTRL2               0x4D8
#define QSERDES_RX_RX_EQU_ADAPTOR_CNTRL3               0x4DC
#define QSERDES_RX_RX_EQU_ADAPTOR_CNTRL4               0x4E0
#define QSERDES_RX_RX_IDAC_CAL_CONFIGURATION           0x4E4
#define QSERDES_RX_RX_IDAC_TSETTLE_LOW                 0x4E8
#define QSERDES_RX_RX_IDAC_TSETTLE_HIGH                0x4EC
#define QSERDES_RX_RX_IDAC_ENDSAMP_LOW                 0x4F0
#define QSERDES_RX_RX_IDAC_ENDSAMP_HIGH                0x4F4
#define QSERDES_RX_RX_IDAC_MIDPOINT_LOW                0x4F8
#define QSERDES_RX_RX_IDAC_MIDPOINT_HIGH               0x4FC
#define QSERDES_RX_RX_EQ_OFFSET_LSB                    0x500
#define QSERDES_RX_RX_EQ_OFFSET_MSB                    0x504
#define QSERDES_RX_RX_EQ_OFFSET_ADAPTOR_CNTRL1         0x508
#define QSERDES_RX_RX_OFFSET_ADAPTOR_CNTRL2            0x50C
#define QSERDES_RX_SIGDET_ENABLES                      0x510
#define QSERDES_RX_SIGDET_CNTRL                        0x514
#define QSERDES_RX_SIGDET_LVL                          0x518
#define QSERDES_RX_SIGDET_DEGLITCH_CNTRL               0x51C
#define QSERDES_RX_RX_BAND                             0x520
#define QSERDES_RX_CDR_FREEZE_UP_DN                    0x524
#define QSERDES_RX_CDR_RESET_OVERRIDE                  0x528
#define QSERDES_RX_RX_INTERFACE_MODE                   0x52C
#define QSERDES_RX_JITTER_GEN_MODE                     0x530
#define QSERDES_RX_BUJ_AMP                             0x534
#define QSERDES_RX_SJ_AMP1                             0x538
#define QSERDES_RX_SJ_AMP2                             0x53C
#define QSERDES_RX_SJ_PER1                             0x540
#define QSERDES_RX_SJ_PER2                             0x544
#define QSERDES_RX_BUJ_STEP_FREQ1                      0x548
#define QSERDES_RX_BUJ_STEP_FREQ2                      0x54C
#define QSERDES_RX_PPM_OFFSET1                         0x550
#define QSERDES_RX_PPM_OFFSET2                         0x554
#define QSERDES_RX_SIGN_PPM_PERIOD1                    0x558
#define QSERDES_RX_SIGN_PPM_PERIOD2                    0x55C
#define QSERDES_RX_SSC_CTRL                            0x560
#define QSERDES_RX_SSC_COUNT1                          0x564
#define QSERDES_RX_SSC_COUNT2                          0x568
#define QSERDES_RX_RX_ALOG_INTF_OBSV_CNTL              0x56C
#define QSERDES_RX_RX_PWM_ENABLE_AND_DATA              0x570
#define QSERDES_RX_RX_PWM_GEAR1_TIMEOUT_COUNT          0x574
#define QSERDES_RX_RX_PWM_GEAR2_TIMEOUT_COUNT          0x578
#define QSERDES_RX_RX_PWM_GEAR3_TIMEOUT_COUNT          0x57C
#define QSERDES_RX_RX_PWM_GEAR4_TIMEOUT_COUNT          0x580
#define QSERDES_RX_PI_CTRL1                            0x584
#define QSERDES_RX_PI_CTRL2                            0x588
#define QSERDES_RX_PI_QUAD                             0x58C
#define QSERDES_RX_IDATA1                              0x590
#define QSERDES_RX_IDATA2                              0x594
#define QSERDES_RX_AUX_DATA1                           0x598
#define QSERDES_RX_AUX_DATA2                           0x59C
#define QSERDES_RX_AC_JTAG_OUTP                        0x5A0
#define QSERDES_RX_AC_JTAG_OUTN                        0x5A4
#define QSERDES_RX_RX_SIGDET                           0x5A8
#define QSERDES_RX_RX_VDCOFF                           0x5AC
#define QSERDES_RX_IDAC_CAL_ON                         0x5B0
#define QSERDES_RX_IDAC_STATUS_I                       0x5B4
#define QSERDES_RX_IDAC_STATUS_IBAR                    0x5B8
#define QSERDES_RX_IDAC_STATUS_Q                       0x5BC
#define QSERDES_RX_IDAC_STATUS_QBAR                    0x5C0
#define QSERDES_RX_IDAC_STATUS_A                       0x5C4
#define QSERDES_RX_IDAC_STATUS_ABAR                    0x5C8
#define QSERDES_RX_CALST_STATUS_I                      0x5CC
#define QSERDES_RX_CALST_STATUS_Q                      0x5D0
#define QSERDES_RX_CALST_STATUS_A                      0x5D4
#define QSERDES_RX_RX_ALOG_INTF_OBSV                   0x5D8
#define QSERDES_RX_READ_EQCODE                         0x5DC
#define QSERDES_RX_READ_OFFSETCODE                     0x5E0
#define QSERDES_RX_IA_ERROR_COUNTER_LOW                0x5E4
#define QSERDES_RX_IA_ERROR_COUNTER_HIGH               0x5E8
#define PCIE_PHY_MISC_DEBUG_BUS_BYTE0_INDEX            0x600
#define PCIE_PHY_MISC_DEBUG_BUS_BYTE1_INDEX            0x604
#define PCIE_PHY_MISC_DEBUG_BUS_BYTE2_INDEX            0x608
#define PCIE_PHY_MISC_DEBUG_BUS_BYTE3_INDEX            0x60C
#define PCIE_PHY_MISC_PLACEHOLDER_STATUS               0x610
#define PCIE_PHY_MISC_DEBUG_BUS_0_STATUS               0x614
#define PCIE_PHY_MISC_DEBUG_BUS_1_STATUS               0x618
#define PCIE_PHY_MISC_DEBUG_BUS_2_STATUS               0x61C
#define PCIE_PHY_MISC_DEBUG_BUS_3_STATUS               0x620
#define PCIE_PHY_MISC_OSC_DTCT_STATUS                  0x624
#define PCIE_PHY_MISC_OSC_DTCT_CONFIG1                 0x628
#define PCIE_PHY_MISC_OSC_DTCT_CONFIG2                 0x62C
#define PCIE_PHY_MISC_OSC_DTCT_CONFIG3                 0x630
#define PCIE_PHY_MISC_OSC_DTCT_CONFIG4                 0x634
#define PCIE_PHY_MISC_OSC_DTCT_CONFIG5                 0x638
#define PCIE_PHY_MISC_OSC_DTCT_CONFIG6                 0x63C
#define PCIE_PHY_MISC_OSC_DTCT_CONFIG7                 0x640
#define PCIE_PHY_SW_RESET                              0x800
#define PCIE_PHY_POWER_DOWN_CONTROL                    0x804
#define PCIE_PHY_START_CONTROL                         0x808
#define PCIE_PHY_TXMGN_V0                              0x80C
#define PCIE_PHY_TXMGN_V1                              0x810
#define PCIE_PHY_TXMGN_V2                              0x814
#define PCIE_PHY_TXMGN_V3                              0x818
#define PCIE_PHY_TXMGN_V4                              0x81C
#define PCIE_PHY_TXMGN_LS                              0x820
#define PCIE_PHY_TXDEEMPH_M6DB_V0                      0x824
#define PCIE_PHY_TXDEEMPH_M3P5DB_V0                    0x828
#define PCIE_PHY_TXDEEMPH_M6DB_V1                      0x82C
#define PCIE_PHY_TXDEEMPH_M3P5DB_V1                    0x830
#define PCIE_PHY_TXDEEMPH_M6DB_V2                      0x834
#define PCIE_PHY_TXDEEMPH_M3P5DB_V2                    0x838
#define PCIE_PHY_TXDEEMPH_M6DB_V3                      0x83C
#define PCIE_PHY_TXDEEMPH_M3P5DB_V3                    0x840
#define PCIE_PHY_TXDEEMPH_M6DB_V4                      0x844
#define PCIE_PHY_TXDEEMPH_M3P5DB_V4                    0x848
#define PCIE_PHY_TXDEEMPH_M6DB_LS                      0x84C
#define PCIE_PHY_TXDEEMPH_M3P5DB_LS                    0x850
#define PCIE_PHY_ENDPOINT_REFCLK_DRIVE                 0x854
#define PCIE_PHY_RX_IDLE_DTCT_CNTRL                    0x858
#define PCIE_PHY_RATE_SLEW_CNTRL                       0x85C
#define PCIE_PHY_POWER_STATE_CONFIG1                   0x860
#define PCIE_PHY_POWER_STATE_CONFIG2                   0x864
#define PCIE_PHY_POWER_STATE_CONFIG3                   0x868
#define PCIE_PHY_POWER_STATE_CONFIG4                   0x86C
#define PCIE_PHY_RCVR_DTCT_DLY_P1U2_L                  0x870
#define PCIE_PHY_RCVR_DTCT_DLY_P1U2_H                  0x874
#define PCIE_PHY_RCVR_DTCT_DLY_U3_L                    0x878
#define PCIE_PHY_RCVR_DTCT_DLY_U3_H                    0x87C
#define PCIE_PHY_LOCK_DETECT_CONFIG1                   0x880
#define PCIE_PHY_LOCK_DETECT_CONFIG2                   0x884
#define PCIE_PHY_LOCK_DETECT_CONFIG3                   0x888
#define PCIE_PHY_TSYNC_RSYNC_TIME                      0x88C
#define PCIE_PHY_SIGDET_LOW_2_IDLE_TIME                0x890
#define PCIE_PHY_BEACON_2_IDLE_TIME_L                  0x894
#define PCIE_PHY_BEACON_2_IDLE_TIME_H                  0x898
#define PCIE_PHY_PWRUP_RESET_DLY_TIME_SYSCLK           0x89C
#define PCIE_PHY_PWRUP_RESET_DLY_TIME_AUXCLK           0x8A0
#define PCIE_PHY_LP_WAKEUP_DLY_TIME_AUXCLK             0x8A4
#define PCIE_PHY_PLL_LOCK_CHK_DLY_TIME                 0x8A8
#define PCIE_PHY_LFPS_DET_HIGH_COUNT_VAL               0x8AC
#define PCIE_PHY_LFPS_TX_ECSTART_EQTLOCK               0x8B0
#define PCIE_PHY_LFPS_TX_END_CNT_P2U3_START            0x8B4
#define PCIE_PHY_RXEQTRAINING_WAIT_TIME                0x8B8
#define PCIE_PHY_RXEQTRAINING_RUN_TIME                 0x8BC
#define PCIE_PHY_TXONESZEROS_RUN_LENGTH                0x8C0
#define PCIE_PHY_FLL_CNTRL1                            0x8C4
#define PCIE_PHY_FLL_CNTRL2                            0x8C8
#define PCIE_PHY_FLL_CNT_VAL_L                         0x8CC
#define PCIE_PHY_FLL_CNT_VAL_H_TOL                     0x8D0
#define PCIE_PHY_FLL_MAN_CODE                          0x8D4
#define PCIE_PHY_AUTONOMOUS_MODE_CTRL                  0x8D8
#define PCIE_PHY_LFPS_RXTERM_IRQ_CLEAR                 0x8DC
#define PCIE_PHY_ARCVR_DTCT_EN_PERIOD                  0x8E0
#define PCIE_PHY_ARCVR_DTCT_CM_DLY                     0x8E4
#define PCIE_PHY_ALFPS_DEGLITCH_VAL                    0x8E8
#define PCIE_PHY_INSIG_SW_CTRL1                        0x8EC
#define PCIE_PHY_INSIG_SW_CTRL2                        0x8F0
#define PCIE_PHY_INSIG_SW_CTRL3                        0x8F4
#define PCIE_PHY_INSIG_MX_CTRL1                        0x8F8
#define PCIE_PHY_INSIG_MX_CTRL2                        0x8FC
#define PCIE_PHY_INSIG_MX_CTRL3                        0x900
#define PCIE_PHY_OUTSIG_SW_CTRL1                       0x904
#define PCIE_PHY_OUTSIG_MX_CTRL1                       0x908
#define PCIE_PHY_CLK_DEBUG_BYPASS_CTRL                 0x90C
#define PCIE_PHY_TEST_CONTROL                          0x910
#define PCIE_PHY_TEST_CONTROL2                         0x914
#define PCIE_PHY_TEST_CONTROL3                         0x918
#define PCIE_PHY_TEST_CONTROL4                         0x91C
#define PCIE_PHY_TEST_CONTROL5                         0x920
#define PCIE_PHY_TEST_CONTROL6                         0x924
#define PCIE_PHY_TEST_CONTROL7                         0x928
#define PCIE_PHY_COM_RESET_CONTROL                     0x92C
#define PCIE_PHY_BIST_CTRL                             0x930
#define PCIE_PHY_PRBS_POLY0                            0x934
#define PCIE_PHY_PRBS_POLY1                            0x938
#define PCIE_PHY_PRBS_SEED0                            0x93C
#define PCIE_PHY_PRBS_SEED1                            0x940
#define PCIE_PHY_FIXED_PAT_CTRL                        0x944
#define PCIE_PHY_FIXED_PAT0                            0x948
#define PCIE_PHY_FIXED_PAT1                            0x94C
#define PCIE_PHY_FIXED_PAT2                            0x950
#define PCIE_PHY_FIXED_PAT3                            0x954
#define PCIE_PHY_COM_CLK_SWITCH_CTRL                   0x958
#define PCIE_PHY_ELECIDLE_DLY_SEL                      0x95C
#define PCIE_PHY_SPARE1                                0x960
#define PCIE_PHY_BIST_CHK_ERR_CNT_L_STATUS             0x964
#define PCIE_PHY_BIST_CHK_ERR_CNT_H_STATUS             0x968
#define PCIE_PHY_BIST_CHK_STATUS                       0x96C
#define PCIE_PHY_LFPS_RXTERM_IRQ_SOURCE_STATUS         0x970
#define PCIE_PHY_PCS_STATUS                            0x974
#define PCIE_PHY_PCS_STATUS2                           0x978
#define PCIE_PHY_PCS_STATUS3                           0x97C
#define PCIE_PHY_COM_RESET_STATUS                      0x980
#define PCIE_PHY_OSC_DTCT_STATUS                       0x984
#define PCIE_PHY_REVISION_ID0                          0x988
#define PCIE_PHY_REVISION_ID1                          0x98C
#define PCIE_PHY_REVISION_ID2                          0x990
#define PCIE_PHY_REVISION_ID3                          0x994
#define PCIE_PHY_DEBUG_BUS_0_STATUS                    0x998
#define PCIE_PHY_DEBUG_BUS_1_STATUS                    0x99C
#define PCIE_PHY_DEBUG_BUS_2_STATUS                    0x9A0
#define PCIE_PHY_DEBUG_BUS_3_STATUS                    0x9A4
#define PCIE_PHY_LP_WAKEUP_DLY_TIME_AUXCLK_MSB         0x9A8
#define PCIE_PHY_OSC_DTCT_ACTIONS                      0x9AC
#define PCIE_PHY_SIGDET_CNTRL                          0x9B0
#define PCIE_PHY_IDAC_CAL_CNTRL                        0x9B4
#define PCIE_PHY_CMN_ACK_OUT_SEL                       0x9B8
#define PCIE_PHY_PLL_LOCK_CHK_DLY_TIME_SYSCLK          0x9BC
#define PCIE_PHY_AUTONOMOUS_MODE_STATUS                0x9C0
#define PCIE_PHY_ENDPOINT_REFCLK_CNTRL                 0x9C4
#define PCIE_PHY_EPCLK_PRE_PLL_LOCK_DLY_SYSCLK         0x9C8
#define PCIE_PHY_EPCLK_PRE_PLL_LOCK_DLY_AUXCLK         0x9CC
#define PCIE_PHY_EPCLK_DLY_COUNT_VAL_L                 0x9D0
#define PCIE_PHY_EPCLK_DLY_COUNT_VAL_H                 0x9D4
#define PCIE_PHY_RX_SIGDET_LVL                         0x9D8
#define PCIE_PHY_L1SS_WAKEUP_DLY_TIME_AUXCLK_LSB       0x9DC
#define PCIE_PHY_L1SS_WAKEUP_DLY_TIME_AUXCLK_MSB       0x9E0
#define PCIE_PHY_AUTONOMOUS_MODE_CTRL2                 0x9E4
#define PCIE_PHY_RXTERMINATION_DLY_SEL                 0x9E8
#define PCIE_PHY_LFPS_PER_TIMER_VAL                    0x9EC
#define PCIE_PHY_SIGDET_STARTUP_TIMER_VAL              0x9F0
#define PCIE_PHY_LOCK_DETECT_CONFIG4                   0x9F4
#endif
