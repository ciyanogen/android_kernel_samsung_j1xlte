/*
 * amsung EXYNOS FIMC-IS2 (Imaging Subsystem) driver
 *
 *  Copyright (C) 2015 Samsung Electronics Co., Ltd.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */

#ifndef FIMC_IS_SFR_MCSC_V120_H
#define FIMC_IS_SFR_MCSC_V120_H

#include "fimc-is-hw-api-common.h"

#define MCSC_REG_CNT 83
enum fimc_is_mcsc_reg_name {
	MCSC_R_SC_GCTRL_0,
	MCSC_R_TRIGGER_CTRL_0,
	MCSC_R_READ_SHADOW_REG_CTRL,
	MCSC_R_SC_RESET_CTRL_GLOBAL,
	MCSC_R_SC_RESET_CTRL_0,
	MCSC_R_I_FORMATTER_0_CLK_GATE_CTRL,
	MCSC_R_DITHER_0_CLK_GATE_CTRL,
	MCSC_R_POLY_SC0_CLK_GATE_CTRL,
	MCSC_R_POST_CHAIN0_CLK_GATE_CTRL,
	MCSC_R_INPUT_SRC0_CTRL,
	MCSC_R_DITHER_0_CTRL,
	MCSC_R_POLY_SC0_IMG_SIZE,
	MCSC_R_POLY_SC0_FIFO_STATUS,
	MCSC_R_POLY_SC0_P0_CTRL,
	MCSC_R_POLY_SC0_P0_SRC_POS,
	MCSC_R_POLY_SC0_P0_SRC_SIZE,
	MCSC_R_POLY_SC0_P0_DST_SIZE,
	MCSC_R_POLY_SC0_P0_H_RATIO,
	MCSC_R_POLY_SC0_P0_V_RATIO,
	MCSC_R_POLY_SC0_P0_H_INIT_PHASE_OFFSET,
	MCSC_R_POLY_SC0_P0_V_INIT_PHASE_OFFSET,
	MCSC_R_POLY_SC0_P0_ROUND_MODE,
	MCSC_R_POLY_SC0_P0_COEFF_CTRL,
	MCSC_R_POST_CHAIN0_POST_SC_CTRL,
	MCSC_R_POST_CHAIN0_POST_SC_IMG_SIZE,
	MCSC_R_POST_CHAIN0_POST_SC_DST_SIZE,
	MCSC_R_POST_CHAIN0_POST_SC_H_RATIO,
	MCSC_R_POST_CHAIN0_POST_SC_V_RATIO,
	MCSC_R_POST_CHAIN0_CONV420_CTRL,
	MCSC_R_POST_CHAIN0_CONV420_WEIGHT,
	MCSC_R_POST_CHAIN0_BCHS_CTRL,
	MCSC_R_POST_CHAIN0_BCHS_BC,
	MCSC_R_POST_CHAIN0_BCHS_HS1,
	MCSC_R_POST_CHAIN0_BCHS_HS2,
	MCSC_R_POST_CHAIN0_OTF_CTRL,
	MCSC_R_POST_CHAIN0_OTF_OUT_FORMAT,
	MCSC_R_POST_CHAIN0_DMA_OUT_CTRL,
	MCSC_R_SCALER_RESET_STATUS,
	MCSC_R_SCALER_RUNNING_STATUS,
	MCSC_R_DMA_RUNNING_STATUS,
	MCSC_R_SCALER_INPUT_STATUS_0,
	MCSC_R_SCALER_INTERRUPT_MASK_0,
	MCSC_R_SCALER_INTERRUPT_0,
	MCSC_R_SCALER_VERSION,
	MCSC_R_WDMA0_DATA_FORMAT,
	MCSC_R_WDMA0_SWAP_TABLE,
	MCSC_R_WDMA_QOS_LUT0,
	MCSC_R_WDMA_QOS_LUT1,
	MCSC_R_WDMA0_CRC_RESULT0,
	MCSC_R_WDMA0_CRC_RESULT1,
	MCSC_R_WDMA0_CRC_RESULT2,
	MCSC_R_WDMA0_FLIP_CONTROL,
	MCSC_R_WDMA0_CLK_EN,
	MCSC_R_WDMA0_CLK_GATE_DISABLE,
	MCSC_R_WDMA0_BASE_ADDR01,
	MCSC_R_WDMA0_BASE_ADDR02,
	MCSC_R_WDMA0_BASE_ADDR03,
	MCSC_R_WDMA0_BASE_ADDR04,
	MCSC_R_WDMA0_BASE_ADDR05,
	MCSC_R_WDMA0_BASE_ADDR06,
	MCSC_R_WDMA0_BASE_ADDR07,
	MCSC_R_WDMA0_BASE_ADDR08,
	MCSC_R_WDMA0_BASE_ADDR11,
	MCSC_R_WDMA0_BASE_ADDR12,
	MCSC_R_WDMA0_BASE_ADDR13,
	MCSC_R_WDMA0_BASE_ADDR14,
	MCSC_R_WDMA0_BASE_ADDR15,
	MCSC_R_WDMA0_BASE_ADDR16,
	MCSC_R_WDMA0_BASE_ADDR17,
	MCSC_R_WDMA0_BASE_ADDR18,
	MCSC_R_WDMA0_BASE_ADDR21,
	MCSC_R_WDMA0_BASE_ADDR22,
	MCSC_R_WDMA0_BASE_ADDR23,
	MCSC_R_WDMA0_BASE_ADDR24,
	MCSC_R_WDMA0_BASE_ADDR25,
	MCSC_R_WDMA0_BASE_ADDR26,
	MCSC_R_WDMA0_BASE_ADDR27,
	MCSC_R_WDMA0_BASE_ADDR28,
	MCSC_R_WDMA0_WIDTH,
	MCSC_R_WDMA0_HEIGHT,
	MCSC_R_WDMA0_STRIDE,
	MCSC_R_WDMA0_BASE_ADDR_EN,
	MCSC_R_WDMA0_FRAME_CNT
};

static struct fimc_is_reg mcsc_regs[MCSC_REG_CNT] = {
	{0x0000, "SC_GCTRL_0"},
	{0x0008, "TRIGGER_CTRL_0"},
	{0x0014, "READ_SHADOW_REG_CTRL"},
	{0x0020, "SC_RESET_CTRL_GLOBAL"},
	{0x0024, "SC_RESET_CTRL_0"},
	{0x0030, "I_FORMATTER_0_CLK_GATE_CTRL"},
	{0x0038, "DITHER_0_CLK_GATE_CTRL"},
	{0x0040, "POLY_SC0_CLK_GATE_CTRL"},
	{0x0048, "POST_CHAIN0_CLK_GATE_CTRL"},
	{0x0060, "INPUT_SRC0_CTRL"},
	{0x0070, "DITHER_0_CTRL"},
	{0x0090, "POLY_SC0_IMG_SIZE"},
	{0x0094, "POLY_SC0_FIFO_STATUS"},
	{0x00A0, "POLY_SC0_P0_CTRL"},
	{0x00A4, "POLY_SC0_P0_SRC_POS"},
	{0x00A8, "POLY_SC0_P0_SRC_SIZE"},
	{0x00AC, "POLY_SC0_P0_DST_SIZE"},
	{0x00B0, "POLY_SC0_P0_H_RATIO"},
	{0x00B4, "POLY_SC0_P0_V_RATIO"},
	{0x00B8, "POLY_SC0_P0_H_INIT_PHASE_OFFSET"},
	{0x00BC, "POLY_SC0_P0_V_INIT_PHASE_OFFSET"},
	{0x00C0, "POLY_SC0_P0_ROUND_MODE"},
	{0x00C4, "POLY_SC0_P0_COEFF_CTRL"},
	{0x0600, "POST_CHAIN0_POST_SC_CTRL"},
	{0x0604, "POST_CHAIN0_POST_SC_IMG_SIZE"},
	{0x0608, "POST_CHAIN0_POST_SC_DST_SIZE"},
	{0x060C, "POST_CHAIN0_POST_SC_H_RATIO"},
	{0x0610, "POST_CHAIN0_POST_SC_V_RATIO"},
	{0x0620, "POST_CHAIN0_CONV420_CTRL"},
	{0x0624, "POST_CHAIN0_CONV420_WEIGHT"},
	{0x0630, "POST_CHAIN0_BCHS_CTRL"},
	{0x0634, "POST_CHAIN0_BCHS_BC"},
	{0x0638, "POST_CHAIN0_BCHS_HS1"},
	{0x063C, "POST_CHAIN0_BCHS_HS2"},
	{0x0640, "POST_CHAIN0_OTF_CTRL"},
	{0x0644, "POST_CHAIN0_OTF_OUT_FORMAT"},
	{0x0648, "POST_CHAIN0_DMA_OUT_CTRL"},
	{0x0790, "SCALER_RESET_STATUS"},
	{0x0794, "SCALER_RUNNING_STATUS"},
	{0x0798, "DMA_RUNNING_STATUS"},
	{0x079C, "SCALER_INPUT_STATUS_0"},
	{0x07A4, "SCALER_INTERRUPT_MASK_0"},
	{0x07AC, "SCALER_INTERRUPT_0"},
	{0x07B4, "SCALER_VERSION"},
	{0x1004, "WDMA0_DATA_FORMAT"},
	{0x101C, "WDMA0_SWAP_TABLE"},
	{0x1038, "WDMA_QOS_LUT0"},
	{0x103C, "WDMA_QOS_LUT1"},
	{0x1040, "WDMA0_CRC_RESULT0"},
	{0x1044, "WDMA0_CRC_RESULT1"},
	{0x1048, "WDMA0_CRC_RESULT2"},
	{0x107C, "WDMA0_FLIP_CONTROL"},
	{0x1094, "WDMA0_CLK_EN"},
	{0x10AC, "WDMA0_CLK_GATE_DISABLE"},
	{0x1300, "WDMA0_BASE_ADDR01"},
	{0x1304, "WDMA0_BASE_ADDR02"},
	{0x1308, "WDMA0_BASE_ADDR03"},
	{0x130C, "WDMA0_BASE_ADDR04"},
	{0x1310, "WDMA0_BASE_ADDR05"},
	{0x1314, "WDMA0_BASE_ADDR06"},
	{0x1318, "WDMA0_BASE_ADDR07"},
	{0x131C, "WDMA0_BASE_ADDR08"},
	{0x1320, "WDMA0_BASE_ADDR11"},
	{0x1324, "WDMA0_BASE_ADDR12"},
	{0x1328, "WDMA0_BASE_ADDR13"},
	{0x132C, "WDMA0_BASE_ADDR14"},
	{0x1330, "WDMA0_BASE_ADDR15"},
	{0x1334, "WDMA0_BASE_ADDR16"},
	{0x1338, "WDMA0_BASE_ADDR17"},
	{0x133C, "WDMA0_BASE_ADDR18"},
	{0x1340, "WDMA0_BASE_ADDR21"},
	{0x1344, "WDMA0_BASE_ADDR22"},
	{0x1348, "WDMA0_BASE_ADDR23"},
	{0x134C, "WDMA0_BASE_ADDR24"},
	{0x1350, "WDMA0_BASE_ADDR25"},
	{0x1354, "WDMA0_BASE_ADDR26"},
	{0x1358, "WDMA0_BASE_ADDR27"},
	{0x135C, "WDMA0_BASE_ADDR28"},
	{0x1360, "WDMA0_WIDTH"},
	{0x1364, "WDMA0_HEIGHT"},
	{0x1368, "WDMA0_STRIDE"},
	{0x136C, "WDMA0_BASE_ADDR_EN"},
	{0x1370, "WDMA0_FRAME_CNT"}
};

#define MCSC_REG_FIELD_CNT 159
enum fimc_is_mcsc_reg_field {
	MCSC_F_SCALER_ENABLE_0,
	MCSC_F_SHADOWING_DISABLE_0,
	MCSC_F_SW_TRIGGER_0,
	MCSC_F_READ_SHADOW_REG,
	MCSC_F_SW_RESET_GLOBAL,
	MCSC_F_PARTIAL_RESET_ENABLE_0,
	MCSC_F_SW_RESET_0,
	MCSC_F_I_FORMATTER_0_CLK_GATE_DISABLE,
	MCSC_F_DITHER_0_CLK_GATE_DISABLE,
	MCSC_F_POLY_SC0_P0_CLK_GATE_DISABLE,
	MCSC_F_POLY_SC0_LB_CTRL_CLK_GATE_DISABLE,
	MCSC_F_POLY_SC0_FIFO_CLK_GATE_DISABLE,
	MCSC_F_POST_CHAIN0_OTF_OUT_CLK_GATE_DISABLE,
	MCSC_F_POST_CHAIN0_BCHS_CLK_GATE_DISABLE,
	MCSC_F_POST_CHAIN0_CONV420_CLK_GATE_DISABLE,
	MCSC_F_POST_CHAIN0_POST_SC_CLK_GATE_DISABLE,
	MCSC_F_INPUT_SRC0_FORMAT,
	MCSC_F_DITHER_0_ON,
	MCSC_F_POLY_SC0_IMG_HSIZE,
	MCSC_F_POLY_SC0_IMG_VSIZE,
	MCSC_F_POLY_SC0_PEAK_FIFO_CNT,
	MCSC_F_POLY_SC0_CUR_FIFO_CNT,
	MCSC_F_POLY_SC0_P0_ENABLE,
	MCSC_F_POLY_SC0_P0_SRC_HPOS,
	MCSC_F_POLY_SC0_P0_SRC_VPOS,
	MCSC_F_POLY_SC0_P0_SRC_HSIZE,
	MCSC_F_POLY_SC0_P0_SRC_VSIZE,
	MCSC_F_POLY_SC0_P0_DST_HSIZE,
	MCSC_F_POLY_SC0_P0_DST_VSIZE,
	MCSC_F_POLY_SC0_P0_H_RATIO,
	MCSC_F_POLY_SC0_P0_V_RATIO,
	MCSC_F_POLY_SC0_P0_H_INIT_PHASE_OFFSET,
	MCSC_F_POLY_SC0_P0_V_INIT_PHASE_OFFSET,
	MCSC_F_POLY_SC0_P0_ROUND_MODE,
	MCSC_F_POLY_SC0_P0_V_COEFF_SEL,
	MCSC_F_POLY_SC0_P0_H_COEFF_SEL,
	MCSC_F_POST_CHAIN0_POST_SC_ENABLE,
	MCSC_F_POST_CHAIN0_POST_SC_IMG_HSIZE,
	MCSC_F_POST_CHAIN0_POST_SC_IMG_VSIZE,
	MCSC_F_POST_CHAIN0_POST_SC_DST_HSIZE,
	MCSC_F_POST_CHAIN0_POST_SC_DST_VSIZE,
	MCSC_F_POST_CHAIN0_POST_SC_H_RATIO,
	MCSC_F_POST_CHAIN0_POST_SC_V_RATIO,
	MCSC_F_POST_CHAIN0_CONV420_ENABLE,
	MCSC_F_POST_CHAIN0_CONV420_WEIGHT,
	MCSC_F_POST_CHAIN0_BCHS_ENABLE,
	MCSC_F_POST_CHAIN0_BCHS_YOFFSET,
	MCSC_F_POST_CHAIN0_BCHS_YGAIN,
	MCSC_F_POST_CHAIN0_BCHS_C_GAIN_01,
	MCSC_F_POST_CHAIN0_BCHS_C_GAIN_00,
	MCSC_F_POST_CHAIN0_BCHS_C_GAIN_11,
	MCSC_F_POST_CHAIN0_BCHS_C_GAIN_10,
	MCSC_F_POST_CHAIN0_OTF_OUT_ENABLE,
	MCSC_F_POST_CHAIN0_OTF_OUT_FORMAT,
	MCSC_F_POST_CHAIN0_DMA_OUT_ENABLE,
	MCSC_F_SW_RESET_0_STATUS,
	MCSC_F_SW_RESET_GLOBAL_STATUS,
	MCSC_F_POST_CHAIN0_OTF_OUT_RUNNING,
	MCSC_F_POST_CHAIN0_BCHS_RUNNING,
	MCSC_F_POST_CHAIN0_CONV420_RUNNING,
	MCSC_F_POST_CHAIN0_POST_SC_RUNNING,
	MCSC_F_POLY_SC0_P0_RUNNING,
	MCSC_F_POLY_SC0_LB_CTRL_RUNNING,
	MCSC_F_POLY_SC0_FIFO_RUNNING,
	MCSC_F_DITHER_0_RUNNING,
	MCSC_F_I_FORMATTER_0_RUNNING,
	MCSC_F_SCALER_IDLE_0,
	MCSC_F_WDMA0_BUSY,
	MCSC_F_CUR_VERTICAL_CNT_0,
	MCSC_F_CUR_HORIZONTAL_CNT_0,
	MCSC_F_SCALER_OVERFLOW_INT_0_MASK,
	MCSC_F_OUT_STALL_BLOCKING_INT_0_MASK,
	MCSC_F_INPUT_VERTICAL_UNF_INT_0_MASK,
	MCSC_F_INPUT_VERTICAL_OVF_INT_0_MASK,
	MCSC_F_INPUT_HORIZONTAL_UNF_INT_0_MASK,
	MCSC_F_INPUT_HORIZONTAL_OVF_INT_0_MASK,
	MCSC_F_INPUT_PROTOCOL_ERR_INT_0_MASK,
	MCSC_F_SHADOW_TRIGGER_INT_0_MASK,
	MCSC_F_SHADOW_HW_TRIGGER_INT_0_MASK,
	MCSC_F_CORE_FINISH_INT_0_MASK,
	MCSC_F_WDMA_FINISH_INT_0_MASK,
	MCSC_F_FRAME_START_INT_0_MASK,
	MCSC_F_FRAME_END_INT_0_MASK,
	MCSC_F_SCALER_OVERFLOW_INT_0,
	MCSC_F_OUT_STALL_BLOCKING_INT_0,
	MCSC_F_INPUT_VERTICAL_UNF_INT_0,
	MCSC_F_INPUT_VERTICAL_OVF_INT_0,
	MCSC_F_INPUT_HORIZONTAL_UNF_INT_0,
	MCSC_F_INPUT_HORIZONTAL_OVF_INT_0,
	MCSC_F_INPUT_PROTOCOL_ERR_INT_0,
	MCSC_F_SHADOW_TRIGGER_INT_0,
	MCSC_F_SHADOW_HW_TRIGGER_INT_0,
	MCSC_F_CORE_FINISH_INT_0,
	MCSC_F_WDMA_FINISH_INT_0,
	MCSC_F_FRAME_START_INT_0,
	MCSC_F_FRAME_END_INT_0,
	MCSC_F_SCALER_VERSION,
	MCSC_F_WDMA0_DATA_FORMAT,
	MCSC_F_WDMA0_SWAP_TABLE,
	MCSC_F_WDMA_QOS_LUT_0,
	MCSC_F_WDMA_QOS_LUT_1,
	MCSC_F_WDMA_QOS_LUT_2,
	MCSC_F_WDMA_QOS_LUT_3,
	MCSC_F_WDMA_QOS_LUT_4,
	MCSC_F_WDMA_QOS_LUT_5,
	MCSC_F_WDMA_QOS_LUT_6,
	MCSC_F_WDMA_QOS_LUT_7,
	MCSC_F_WDMA_QOS_LUT_8,
	MCSC_F_WDMA_QOS_LUT_9,
	MCSC_F_WDMA_QOS_LUT_10,
	MCSC_F_WDMA_QOS_LUT_11,
	MCSC_F_WDMA_QOS_LUT_12,
	MCSC_F_WDMA_QOS_LUT_13,
	MCSC_F_WDMA_QOS_LUT_14,
	MCSC_F_WDMA_QOS_LUT_15,
	MCSC_F_WDMA0_CRC_RESULT0,
	MCSC_F_WDMA0_CRC_RESULT1,
	MCSC_F_WDMA0_CRC_RESULT2,
	MCSC_F_WDMA0_FLIP_CONTROL,
	MCSC_F_WDMA0_CLK_EN,
	MCSC_F_WDMA0_CLK_GATE_DISABLE,
	MCSC_F_WDMA0_BASE_ADDR01,
	MCSC_F_WDMA0_BASE_ADDR02,
	MCSC_F_WDMA0_BASE_ADDR03,
	MCSC_F_WDMA0_BASE_ADDR04,
	MCSC_F_WDMA0_BASE_ADDR05,
	MCSC_F_WDMA0_BASE_ADDR06,
	MCSC_F_WDMA0_BASE_ADDR07,
	MCSC_F_WDMA0_BASE_ADDR08,
	MCSC_F_WDMA0_BASE_ADDR11,
	MCSC_F_WDMA0_BASE_ADDR12,
	MCSC_F_WDMA0_BASE_ADDR13,
	MCSC_F_WDMA0_BASE_ADDR14,
	MCSC_F_WDMA0_BASE_ADDR15,
	MCSC_F_WDMA0_BASE_ADDR16,
	MCSC_F_WDMA0_BASE_ADDR17,
	MCSC_F_WDMA0_BASE_ADDR18,
	MCSC_F_WDMA0_BASE_ADDR21,
	MCSC_F_WDMA0_BASE_ADDR22,
	MCSC_F_WDMA0_BASE_ADDR23,
	MCSC_F_WDMA0_BASE_ADDR24,
	MCSC_F_WDMA0_BASE_ADDR25,
	MCSC_F_WDMA0_BASE_ADDR26,
	MCSC_F_WDMA0_BASE_ADDR27,
	MCSC_F_WDMA0_BASE_ADDR28,
	MCSC_F_WDMA0_WIDTH,
	MCSC_F_WDMA0_HEIGHT,
	MCSC_F_WDMA0_C_STRIDE,
	MCSC_F_WDMA0_Y_STRIDE,
	MCSC_F_WDMA0_BASE_ADDR_EN1,
	MCSC_F_WDMA0_BASE_ADDR_EN2,
	MCSC_F_WDMA0_BASE_ADDR_EN3,
	MCSC_F_WDMA0_BASE_ADDR_EN4,
	MCSC_F_WDMA0_BASE_ADDR_EN5,
	MCSC_F_WDMA0_BASE_ADDR_EN6,
	MCSC_F_WDMA0_BASE_ADDR_EN7,
	MCSC_F_WDMA0_BASE_ADDR_EN8,
	MCSC_F_WDMA0_FRAME_CNT_BEFORE,
	MCSC_F_WDMA0_FRAME_CNT_PRESENT
};

static struct fimc_is_field mcsc_fields[MCSC_REG_FIELD_CNT] = {
	/* 1. sfr addr 2. register name 3. bit start 4. bit width 5. access type 6. reset */
	{"SCALER_ENABLE_0",		0,	1,	RW,	0},	/* SC_GCTRL_0 */
	{"SHADOWING_DISABLE_0",		1,	1,	RW,	0},	/* TRIGGER_CTRL_0 */
	{"SW_TRIGGER_0",		0,	1,	WO,	0},	/* TRIGGER_CTRL_0 */
	{"READ_SHADOW_REG",		0,	1,	RW,	0},	/* READ_SHADOW_REG_CTRL */
	{"SW_RESET_GLOBAL",		0,	1,	WO,	0},	/* SC_RESET_CTRL_GLOBAL */
	{"PARTIAL_RESET_ENABLE_0",		1,	1,	RWI,	1},	/* SC_RESET_CTRL_0 */
	{"SW_RESET_0",		0,	1,	WO,	0},		/* SC_RESET_CTRL_0 */
	{"I_FORMATTER_0_CLK_GATE_DISABLE",		0,	1,	RWI,	0},	/* I_FORMATTER_0_CLK_GATE_CTRL */
	{"DITHER_0_CLK_GATE_DISABLE",		0,	1,	RWI,	0},	/* DITHER_0_CLK_GATE_CTRL */
	{"POLY_SC0_P0_CLK_GATE_DISABLE",		2,	1,	RWI,	0},	/* POLY_SC0_CLK_GATE_CTRL */
	{"POLY_SC0_LB_CTRL_CLK_GATE_DISABLE",		1,	1,	RWI,	0},	/* POLY_SC0_CLK_GATE_CTRL */
	{"POLY_SC0_FIFO_CLK_GATE_DISABLE",		0,	1,	RWI,	0},	/* POLY_SC0_CLK_GATE_CTRL */
	{"POST_CHAIN0_OTF_OUT_CLK_GATE_DISABLE",		3,	1,	RWI,	0},	/* POST_CHAIN0_CLK_GATE_CTRL */
	{"POST_CHAIN0_BCHS_CLK_GATE_DISABLE",		2,	1,	RWI,	0},	/* POST_CHAIN0_CLK_GATE_CTRL */
	{"POST_CHAIN0_CONV420_CLK_GATE_DISABLE",		1,	1,	RWI,	0},	/* POST_CHAIN0_CLK_GATE_CTRL */
	{"POST_CHAIN0_POST_SC_CLK_GATE_DISABLE",		0,	1,	RWI,	0},	/* POST_CHAIN0_CLK_GATE_CTRL */
	{"INPUT_SRC0_FORMAT",		1,	2,	RWI,	1},	/* INPUT_SRC0_CTRL */
	{"DITHER_0_ON",		0,	1,	RWI,	0},	/* DITHER_0_CTRL */
	{"POLY_SC0_IMG_HSIZE",		16,	14,	RWI,	0x280},	/* POLY_SC0_IMG_SIZE */
	{"POLY_SC0_IMG_VSIZE",		0,	14,	RWI,	0x1E0},	/* POLY_SC0_IMG_SIZE */
	{"POLY_SC0_PEAK_FIFO_CNT",		16,	14,	RO,	0x0},	/* POLY_SC0_FIFO_STATUS */
	{"POLY_SC0_CUR_FIFO_CNT",		0,	14,	RO,	0x0},	/* POLY_SC0_FIFO_STATUS */
	{"POLY_SC0_P0_ENABLE",		0,	1,	RWI,	0},	/* POLY_SC0_P0_CTRL */
	{"POLY_SC0_P0_SRC_HPOS",		16,	14,	RWI,	0},	/* POLY_SC0_P0_SRC_POS */
	{"POLY_SC0_P0_SRC_VPOS",		0,	14,	RWI,	0},	/* POLY_SC0_P0_SRC_POS */
	{"POLY_SC0_P0_SRC_HSIZE",		16,	14,	RWI,	0x280},	/* POLY_SC0_P0_SRC_SIZE */
	{"POLY_SC0_P0_SRC_VSIZE",		0,	14,	RWI,	0x1E0},	/* POLY_SC0_P0_SRC_SIZE */
	{"POLY_SC0_P0_DST_HSIZE",		16,	14,	RWI,	0x280},	/* POLY_SC0_P0_DST_SIZE */
	{"POLY_SC0_P0_DST_VSIZE",		0,	14,	RWI,	0x1E0},	/* POLY_SC0_P0_DST_SIZE */
	{"POLY_SC0_P0_H_RATIO",		0,	24,	RWI,	0x100000},	/* POLY_SC0_P0_H_RATIO */
	{"POLY_SC0_P0_V_RATIO",		0,	24,	RWI,	0x100000},	/* POLY_SC0_P0_V_RATIO */
	{"POLY_SC0_P0_H_INIT_PHASE_OFFSET",		0,	20,	RWI,	0x0},	/* POLY_SC0_P0_H_INIT_PHASE_OFFSET */
	{"POLY_SC0_P0_V_INIT_PHASE_OFFSET",		0,	20,	RWI,	0x0},	/* POLY_SC0_P0_V_INIT_PHASE_OFFSET */
	{"POLY_SC0_P0_ROUND_MODE",		0,	1,	RWI,	0x1},	/* POLY_SC0_P0_ROUND_MODE */
	{"POLY_SC0_P0_V_COEFF_SEL",		16,	3,	RWI,	0x0},	/* POLY_SC0_P0_COEFF_CTRL */
	{"POLY_SC0_P0_H_COEFF_SEL",		0,	3,	RWI,	0x0},	/* POLY_SC0_P0_COEFF_CTRL */
	{"POST_CHAIN0_POST_SC_ENABLE",		0,	1,	RWI,	0x0},	/* POST_CHAIN0_POST_SC_CTRL */
	{"POST_CHAIN0_POST_SC_IMG_HSIZE",		16,	14,	RWI,	0x280},	/* POST_CHAIN0_POST_SC_IMG_SIZE */
	{"POST_CHAIN0_POST_SC_IMG_VSIZE",		0,	14,	RWI,	0x1E0},	/* POST_CHAIN0_POST_SC_IMG_SIZE */
	{"POST_CHAIN0_POST_SC_DST_HSIZE",		16,	14,	RWI,	0x280},	/* POST_CHAIN0_POST_SC_DST_SIZE */
	{"POST_CHAIN0_POST_SC_DST_VSIZE",		0,	14,	RWI,	0x1E0},	/* POST_CHAIN0_POST_SC_DST_SIZE */
	{"POST_CHAIN0_POST_SC_H_RATIO",		0,	24,	RWI,	0x100000},	/* POST_CHAIN0_POST_SC_H_RATIO */
	{"POST_CHAIN0_POST_SC_V_RATIO",		0,	24,	RWI,	0x100000},	/* POST_CHAIN0_POST_SC_V_RATIO */
	{"POST_CHAIN0_CONV420_ENABLE",		0,	1,	RWI,	0x1},	/* POST_CHAIN0_CONV420_CTRL */
	{"POST_CHAIN0_CONV420_WEIGHT",		0,	5,	RWI,	0x1},	/* POST_CHAIN0_CONV420_WEIGHT */
	{"POST_CHAIN0_BCHS_ENABLE",		0,	1,	RWI,	0x0},	/* POST_CHAIN0_BCHS_CTRL */
	{"POST_CHAIN0_BCHS_YOffset",		16,	8,	RWI,	0},	/* POST_CHAIN0_BCHS_BC */
	{"POST_CHAIN0_BCHS_YGain",		0,	12,	RWI,	0x100},	/* POST_CHAIN0_BCHS_BC */
	{"POST_CHAIN0_BCHS_C_GAIN_01",		16,	13,	RWI,	0},	/* POST_CHAIN0_BCHS_HS1 */
	{"POST_CHAIN0_BCHS_C_GAIN_00",		0,	13,	RWI,	0x100},	/* POST_CHAIN0_BCHS_HS1 */
	{"POST_CHAIN0_BCHS_C_GAIN_11",		16,	13,	RWI,	0x100},	/* POST_CHAIN0_BCHS_HS2 */
	{"POST_CHAIN0_BCHS_C_GAIN_10",		0,	13,	RWI,	0},	/* POST_CHAIN0_BCHS_HS2 */
	{"POST_CHAIN0_OTF_OUT_ENABLE",		0,	1,	RWI,	0x0},	/* POST_CHAIN0_OTF_CTRL */
	{"POST_CHAIN0_OTF_OUT_FORMAT",		0,	2,	RWI,	1},	/* POST_CHAIN0_OTF_OUT_FORMAT */
	{"POST_CHAIN0_DMA_OUT_ENABLE",		0,	1,	RWI,	0x0},	/* POST_CHAIN0_DMA_OUT_CTRL */
	{"SW_RESET_0_STATUS",		2,	1,	RO,	0},	/* SCALER_RESET_STATUS */
	{"SW_RESET_GLOBAL_STATUS",		0,	1,	RO,	0},	/* SCALER_RESET_STATUS */
	{"POST_CHAIN0_OTF_OUT_RUNNING",		18,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"POST_CHAIN0_BCHS_RUNNING",		17,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"POST_CHAIN0_CONV420_RUNNING",		16,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"POST_CHAIN0_POST_SC_RUNNING",		15,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"POLY_SC0_P0_RUNNING",		9,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"POLY_SC0_LB_CTRL_RUNNING",		8,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"POLY_SC0_FIFO_RUNNING",		7,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"DITHER_0_RUNNING",		5,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"I_FORMATTER_0_RUNNING",		3,	1,	RO,	0x0},	/* SCALER_RUNNING_STATUS */
	{"SCALER_IDLE_0",		0,	1,	RO,	0x1},	/* SCALER_RUNNING_STATUS */
	{"WDMA0_BUSY",		1,	1,	RO,	0x0},	/* DMA_RUNNING_STATUS */
	{"CUR_VERTICAL_CNT_0",		16,	14,	RO,	0x0},	/* SCALER_INPUT_STATUS_0 */
	{"CUR_HORIZONTAL_CNT_0",		0,	14,	RO,	0x0},	/* SCALER_INPUT_STATUS_0 */
	{"SCALER_OVERFLOW_INT_0_MASK",		13,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"OUT_STALL_BLOCKING_INT_0_MASK",		12,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"INPUT_VERTICAL_UNF_INT_0_MASK",		11,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"INPUT_VERTICAL_OVF_INT_0_MASK",		10,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"INPUT_HORIZONTAL_UNF_INT_0_MASK",		9,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"INPUT_HORIZONTAL_OVF_INT_0_MASK",		8,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"INPUT_PROTOCOL_ERR_INT_0_MASK",		7,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"SHADOW_TRIGGER_INT_0_MASK",		6,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"SHADOW_HW_TRIGGER_INT_0_MASK",		5,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"CORE_FINISH_INT_0_MASK",		4,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"WDMA_FINISH_INT_0_MASK",		3,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"FRAME_START_INT_0_MASK",		1,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"FRAME_END_INT_0_MASK",		0,	1,	RWI,	0x1},	/* SCALER_INTERRUPT_MASK_0 */
	{"SCALER_OVERFLOW_INT_0",		13,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"OUT_STALL_BLOCKING_INT_0",		12,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"INPUT_VERTICAL_UNF_INT_0",		11,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"INPUT_VERTICAL_OVF_INT_0",		10,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"INPUT_HORIZONTAL_UNF_INT_0",		9,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"INPUT_HORIZONTAL_OVF_INT_0",		8,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"INPUT_PROTOCOL_ERR_INT_0",		7,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"SHADOW_TRIGGER_INT_0",		6,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"SHADOW_HW_TRIGGER_INT_0",		5,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"CORE_FINISH_INT_0",		4,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"WDMA_FINISH_INT_0",		3,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"FRAME_START_INT_0",		1,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"FRAME_END_INT_0",		0,	1,	RO,	0x0},	/* SCALER_INTERRUPT_0 */
	{"SCALER_VERSION",		0,	32,	RO,	0x01200000},	/* SCALER_VERSION */
	{"WDMA0_DATA_FORMAT",		0,	4,	WRI,	0x00000000},	/* WDMA0_DATA_FORMAT */
	{"WDMA0_SWAP_TABLE",		0,	1,	WRI,	0x00000000},	/* WDMA0_SWAP_TABLE */
	{"WDMA_QOS_LUT_0",		0,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT0 */
	{"WDMA_QOS_LUT_1",		4,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT0 */
	{"WDMA_QOS_LUT_2",		8,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT0 */
	{"WDMA_QOS_LUT_3",		12,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT0 */
	{"WDMA_QOS_LUT_4",		16,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT0 */
	{"WDMA_QOS_LUT_5",		20,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT0 */
	{"WDMA_QOS_LUT_6",		24,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT0 */
	{"WDMA_QOS_LUT_7",		28,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT0 */
	{"WDMA_QOS_LUT_8",		0,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT1 */
	{"WDMA_QOS_LUT_9",		4,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT1 */
	{"WDMA_QOS_LUT_10",		8,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT1 */
	{"WDMA_QOS_LUT_11",		12,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT1 */
	{"WDMA_QOS_LUT_12",		16,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT1 */
	{"WDMA_QOS_LUT_13",		20,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT1 */
	{"WDMA_QOS_LUT_14",		24,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT1 */
	{"WDMA_QOS_LUT_15",		28,	4,	WRI,	0x00000000},	/* WDMA_QOS_LUT1 */
	{"WDMA0_CRC_RESULT0",		0,	32,	RO,	0xFFFFFFFF},	/* WDMA0_CRC_RESULT0 */
	{"WDMA0_CRC_RESULT1",		0,	32,	RO,	0xFFFFFFFF},	/* WDMA0_CRC_RESULT1 */
	{"WDMA0_CRC_RESULT2",		0,	32,	RO,	0xFFFFFFFF},	/* WDMA0_CRC_RESULT2 */
	{"WDMA0_FLIP_CONTROL",		0,	2,	WRI,	0x00000000},	/* WDMA0_FLIP_CONTROL */
	{"WDMA0_CLK_EN",		0,	1,	WRI,	0x00000001},	/* WDMA0_CLK_EN */
	{"WDMA0_CLK_GATE_DISABLE",		0,	1,	WRI,	0x00000000},	/* WDMA0_CLK_GATE_DISABLE */
	{"WDMA0_BASE_ADDR01",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR01 */
	{"WDMA0_BASE_ADDR02",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR02 */
	{"WDMA0_BASE_ADDR03",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR03 */
	{"WDMA0_BASE_ADDR04",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR04 */
	{"WDMA0_BASE_ADDR05",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR05 */
	{"WDMA0_BASE_ADDR06",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR06 */
	{"WDMA0_BASE_ADDR07",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR07 */
	{"WDMA0_BASE_ADDR08",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR08 */
	{"WDMA0_BASE_ADDR11",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR11 */
	{"WDMA0_BASE_ADDR12",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR12 */
	{"WDMA0_BASE_ADDR13",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR13 */
	{"WDMA0_BASE_ADDR14",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR14 */
	{"WDMA0_BASE_ADDR15",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR15 */
	{"WDMA0_BASE_ADDR16",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR16 */
	{"WDMA0_BASE_ADDR17",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR17 */
	{"WDMA0_BASE_ADDR18",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR18 */
	{"WDMA0_BASE_ADDR21",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR21 */
	{"WDMA0_BASE_ADDR22",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR22 */
	{"WDMA0_BASE_ADDR23",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR23 */
	{"WDMA0_BASE_ADDR24",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR24 */
	{"WDMA0_BASE_ADDR25",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR25 */
	{"WDMA0_BASE_ADDR26",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR26 */
	{"WDMA0_BASE_ADDR27",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR27 */
	{"WDMA0_BASE_ADDR28",		0,	32,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR28 */
	{"WDMA0_WIDTH",		0,	14,	WRI,	0x00000010},	/* WDMA0_WIDTH */
	{"WDMA0_HEIGHT",		0,	14,	WRI,	0x00000010},	/* WDMA0_HEIGHT */
	{"WDMA0_C_STRIDE",		16,	14,	WRI,	0x00000010},	/* WDMA0_STRIDE */
	{"WDMA0_Y_STRIDE",		0,	14,	WRI,	0x00000010},	/* WDMA0_STRIDE */
	{"WDMA0_BASE_ADDR_EN1",		0,	1,	WRI,	0x00000001},	/* WDMA0_BASE_ADDR_EN */
	{"WDMA0_BASE_ADDR_EN2",		1,	1,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR_EN */
	{"WDMA0_BASE_ADDR_EN3",		2,	1,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR_EN */
	{"WDMA0_BASE_ADDR_EN4",		3,	1,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR_EN */
	{"WDMA0_BASE_ADDR_EN5",		4,	1,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR_EN */
	{"WDMA0_BASE_ADDR_EN6",		5,	1,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR_EN */
	{"WDMA0_BASE_ADDR_EN7",		6,	1,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR_EN */
	{"WDMA0_BASE_ADDR_EN8",		7,	1,	WRI,	0x00000000},	/* WDMA0_BASE_ADDR_EN */
	{"WDMA0_FRAME_CNT_BEFORE",		0,	4,	RO,	0x00000000},	/* WDMA0_FRAME_CNT */
	{"WDMA0_FRAME_CNT_PRESENT",		4,	4,	RO,	0x00000000},	/* WDMA0_FRAME_CNT */
};

#endif
