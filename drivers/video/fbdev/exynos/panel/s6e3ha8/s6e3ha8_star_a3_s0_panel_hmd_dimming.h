/*
 * linux/drivers/video/fbdev/exynos/panel/s6e3ha8/s6e3ha8_star_a3_s0_panel_hmd_dimming.h
 *
 * Header file for S6E3HA8 Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __S6E3HA8_STAR_A3_S0_PANEL_HMD_DIMMING_H__
#define __S6E3HA8_STAR_A3_S0_PANEL_HMD_DIMMING_H__
#include "../dimming.h"
#include "../panel_dimming.h"
#include "s6e3ha8_dimming.h"

/*
 * PANEL INFORMATION
 * LDI : S6E3HA8
 * PANEL : STAR_A3_S0
 */
static s32 star_a3_s0_hmd_rtbl10nit[11] = { 0, 0, 8, 9, 6, 5, 4, 2, 1, 0, 0 };
static s32 star_a3_s0_hmd_rtbl11nit[11] = { 0, 0, 8, 8, 7, 6, 5, 3, 2, 0, 0 };
static s32 star_a3_s0_hmd_rtbl12nit[11] = { 0, 0, 8, 8, 6, 5, 4, 2, 2, 1, 0 };
static s32 star_a3_s0_hmd_rtbl13nit[11] = { 0, 0, 8, 8, 6, 5, 4, 3, 2, 0, 0 };
static s32 star_a3_s0_hmd_rtbl14nit[11] = { 0, 0, 8, 8, 6, 5, 4, 3, 2, 0, 0 };
static s32 star_a3_s0_hmd_rtbl15nit[11] = { 0, 0, 8, 8, 5, 5, 5, 2, 2, -1, 0 };
static s32 star_a3_s0_hmd_rtbl16nit[11] = { 0, 0, 8, 8, 6, 4, 4, 1, 1, 0, 0 };
static s32 star_a3_s0_hmd_rtbl17nit[11] = { 0, 0, 7, 8, 6, 5, 3, 1, 2, 1, 0 };
static s32 star_a3_s0_hmd_rtbl19nit[11] = { 0, 0, 7, 7, 6, 5, 4, 2, 2, 1, 0 };
static s32 star_a3_s0_hmd_rtbl20nit[11] = { 0, 0, 8, 8, 6, 4, 3, 2, 1, 1, 0 };
static s32 star_a3_s0_hmd_rtbl21nit[11] = { 0, 0, 8, 8, 5, 4, 4, 2, 1, 1, 0 };
static s32 star_a3_s0_hmd_rtbl22nit[11] = { 0, 0, 8, 8, 5, 4, 3, 1, 2, 2, 0 };
static s32 star_a3_s0_hmd_rtbl23nit[11] = { 0, 0, 8, 8, 5, 4, 4, 1, 1, 1, 0 };
static s32 star_a3_s0_hmd_rtbl25nit[11] = { 0, 0, 8, 7, 6, 5, 4, 1, 1, 3, 0 };
static s32 star_a3_s0_hmd_rtbl27nit[11] = { 0, 0, 8, 7, 5, 5, 4, 2, 2, 2, 0 };
static s32 star_a3_s0_hmd_rtbl29nit[11] = { 0, 0, 8, 8, 5, 4, 4, 2, 2, 3, 0 };
static s32 star_a3_s0_hmd_rtbl31nit[11] = { 0, 0, 8, 8, 5, 5, 4, 3, 3, 3, 0 };
static s32 star_a3_s0_hmd_rtbl33nit[11] = { 0, 0, 8, 8, 5, 4, 3, 3, 3, 4, 0 };
static s32 star_a3_s0_hmd_rtbl35nit[11] = { 0, 0, 8, 7, 5, 5, 3, 3, 3, 3, 0 };
static s32 star_a3_s0_hmd_rtbl37nit[11] = { 0, 0, 8, 7, 5, 4, 3, 2, 4, 3, 0 };
static s32 star_a3_s0_hmd_rtbl39nit[11] = { 0, 0, 8, 7, 5, 5, 4, 3, 5, 4, 0 };
static s32 star_a3_s0_hmd_rtbl41nit[11] = { 0, 0, 8, 8, 5, 5, 5, 4, 5, 4, 0 };
static s32 star_a3_s0_hmd_rtbl44nit[11] = { 0, 0, 8, 8, 5, 4, 4, 4, 5, 3, 0 };
static s32 star_a3_s0_hmd_rtbl47nit[11] = { 0, 0, 8, 7, 4, 4, 4, 4, 6, 4, 0 };
static s32 star_a3_s0_hmd_rtbl50nit[11] = { 0, 0, 8, 7, 5, 5, 5, 4, 7, 4, 0 };
static s32 star_a3_s0_hmd_rtbl53nit[11] = { 0, 0, 8, 7, 5, 4, 4, 4, 6, 4, 0 };
static s32 star_a3_s0_hmd_rtbl56nit[11] = { 0, 0, 8, 7, 4, 5, 4, 5, 6, 4, 0 };
static s32 star_a3_s0_hmd_rtbl60nit[11] = { 0, 0, 8, 7, 5, 5, 4, 5, 7, 5, 0 };
static s32 star_a3_s0_hmd_rtbl64nit[11] = { 0, 0, 8, 7, 4, 4, 4, 5, 8, 6, 0 };
static s32 star_a3_s0_hmd_rtbl68nit[11] = { 0, 0, 8, 7, 5, 4, 4, 5, 8, 6, 0 };
static s32 star_a3_s0_hmd_rtbl72nit[11] = { 0, 0, 8, 7, 5, 5, 5, 6, 9, 6, 0 };
static s32 star_a3_s0_hmd_rtbl77nit[11] = { 0, 0, 4, 4, 3, 2, 2, 2, 5, 2, 0 };
static s32 star_a3_s0_hmd_rtbl82nit[11] = { 0, 0, 4, 4, 2, 2, 2, 3, 5, 3, 0 };
static s32 star_a3_s0_hmd_rtbl87nit[11] = { 0, 0, 4, 4, 2, 2, 2, 3, 6, 3, 0 };
static s32 star_a3_s0_hmd_rtbl93nit[11] = { 0, 0, 4, 3, 2, 2, 2, 3, 6, 5, 0 };
static s32 star_a3_s0_hmd_rtbl99nit[11] = { 0, 0, 5, 4, 2, 2, 2, 3, 7, 6, 0 };
static s32 star_a3_s0_hmd_rtbl105nit[11] = { 0, 0, 5, 4, 2, 3, 3, 5, 8, 6, 0 };

static s32 star_a3_s0_hmd_ctbl10nit[33] = { 0, 0, 0, 0, 0, 0, -1, 0, -2, 2, 3, -6, -3, 2, -6, -1, 2, -5, -4, 2, -6, -4, 1, -4, 0, 0, -1, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl11nit[33] = { 0, 0, 0, 0, 0, 0, -1, 1, -2, 3, 3, -8, -2, 2, -5, -2, 2, -5, -4, 2, -6, -4, 1, -4, 0, 0, 0, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl12nit[33] = { 0, 0, 0, 0, 0, 0, -3, 1, -3, 3, 3, -7, -1, 2, -4, -2, 2, -5, -3, 2, -5, -4, 1, -4, 0, 0, -1, 0, 0, 0, 0, 0, 2 };
static s32 star_a3_s0_hmd_ctbl13nit[33] = { 0, 0, 0, 0, 0, 0, -1, 1, -3, 4, 3, -6, -2, 2, -5, -2, 2, -6, -4, 2, -6, -3, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl14nit[33] = { 0, 0, 0, 0, 0, 0, -2, 1, -3, 6, 2, -6, -3, 3, -6, -1, 2, -4, -4, 2, -6, -3, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static s32 star_a3_s0_hmd_ctbl15nit[33] = { 0, 0, 0, 0, 0, 0, 1, 0, -1, 4, 3, -8, -2, 2, -6, -2, 2, -6, -3, 2, -4, -3, 1, -3, 0, 0, -1, 0, 0, 0, 1, 0, 1 };
static s32 star_a3_s0_hmd_ctbl16nit[33] = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 5, 3, -8, -3, 2, -5, -3, 2, -6, -3, 2, -4, -2, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 2 };
static s32 star_a3_s0_hmd_ctbl17nit[33] = { 0, 0, 0, 0, 0, 0, 1, 1, -4, 2, 2, -6, -3, 2, -6, -3, 2, -5, -4, 2, -5, -2, 1, -2, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 star_a3_s0_hmd_ctbl19nit[33] = { 0, 0, 0, 0, 0, 0, -1, 1, -4, 0, 4, -8, -2, 2, -5, -3, 2, -6, -3, 2, -4, -3, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl20nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, 1, 2, -6, -2, 2, -4, -3, 2, -5, -2, 2, -4, -3, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl21nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, 1, 3, -6, -3, 2, -4, -3, 2, -5, -3, 2, -4, -3, 0, -2, 0, 0, 0, 1, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl22nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -3, 3, 2, -5, -3, 2, -5, -2, 2, -4, -3, 2, -4, -2, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl23nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, 2, 2, -5, -3, 3, -6, -2, 2, -4, -3, 1, -4, -3, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl25nit[33] = { 0, 0, 0, 0, 0, 0, 1, 1, -3, 0, 3, -7, -3, 2, -5, -2, 2, -5, -4, 1, -4, -2, 1, -2, 0, 0, 0, 1, 0, 1, 0, 0, 0 };
static s32 star_a3_s0_hmd_ctbl27nit[33] = { 0, 0, 0, 0, 0, 0, 2, 1, -4, 1, 2, -6, -4, 3, -6, -2, 1, -4, -4, 2, -4, -3, 0, -2, 0, 0, 0, 0, 0, 0, 1, 0, 1 };
static s32 star_a3_s0_hmd_ctbl29nit[33] = { 0, 0, 0, 0, 0, 0, 0, 2, -5, 1, 2, -4, -4, 3, -6, -2, 2, -4, -3, 2, -4, -2, 0, -2, 0, 0, 0, 0, 0, 1, 1, 0, 0 };
static s32 star_a3_s0_hmd_ctbl31nit[33] = { 0, 0, 0, 0, 0, 0, 1, 1, -3, 0, 3, -6, -3, 2, -6, -3, 2, -4, -4, 1, -4, -1, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl33nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, 0, 2, -5, -3, 2, -6, -3, 2, -4, -3, 2, -4, -1, 0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl35nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, 0, 3, -7, -3, 2, -5, -3, 1, -4, -4, 1, -4, -2, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 1 };
static s32 star_a3_s0_hmd_ctbl37nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, 0, 3, -6, -4, 2, -6, -2, 2, -4, -2, 1, -3, -2, 0, -1, 1, 0, 0, 0, 0, 1, 1, 0, 1 };
static s32 star_a3_s0_hmd_ctbl39nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, 0, 3, -6, -4, 3, -6, -2, 1, -4, -4, 1, -4, -2, 0, -2, 0, 0, 0, 0, 0, 0, 1, 0, 1 };
static s32 star_a3_s0_hmd_ctbl41nit[33] = { 0, 0, 0, 0, 0, 0, -1, 2, -6, 0, 2, -6, -5, 2, -6, -1, 1, -4, -3, 1, -3, -2, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static s32 star_a3_s0_hmd_ctbl44nit[33] = { 0, 0, 0, 0, 0, 0, 0, 2, -4, 0, 2, -6, -4, 2, -6, -2, 1, -4, -4, 1, -4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 };
static s32 star_a3_s0_hmd_ctbl47nit[33] = { 0, 0, 0, 0, 0, 0, -3, 2, -5, 0, 3, -7, -4, 2, -6, -2, 1, -4, -2, 1, -2, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static s32 star_a3_s0_hmd_ctbl50nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -3, -1, 3, -7, -4, 2, -6, -2, 1, -3, -3, 1, -3, -2, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1 };
static s32 star_a3_s0_hmd_ctbl53nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, -2, 3, -6, -3, 2, -6, -3, 1, -3, -3, 1, -3, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 2 };
static s32 star_a3_s0_hmd_ctbl56nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -3, -2, 3, -7, -2, 2, -5, -3, 1, -3, -2, 1, -2, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 2 };
static s32 star_a3_s0_hmd_ctbl60nit[33] = { 0, 0, 0, 0, 0, 0, 0, 0, -2, -4, 3, -8, -3, 2, -4, -3, 1, -3, -3, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3 };
static s32 star_a3_s0_hmd_ctbl64nit[33] = { 0, 0, 0, 0, 0, 0, -1, 1, -4, 0, 2, -6, -4, 2, -5, -3, 1, -4, -2, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 star_a3_s0_hmd_ctbl68nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, -2, 3, -7, -2, 2, -4, -2, 1, -3, -3, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 };
static s32 star_a3_s0_hmd_ctbl72nit[33] = { 0, 0, 0, 0, 0, 0, 0, 2, -4, -3, 3, -8, -3, 2, -5, -3, 1, -3, -2, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2 };
static s32 star_a3_s0_hmd_ctbl77nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, -2, 2, -6, -3, 1, -4, -1, 1, -2, -2, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 2 };
static s32 star_a3_s0_hmd_ctbl82nit[33] = { 0, 0, 0, 0, 0, 0, 2, 1, -2, -1, 3, -6, -3, 1, -4, -1, 0, -1, -1, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2 };
static s32 star_a3_s0_hmd_ctbl87nit[33] = { 0, 0, 0, 0, 0, 0, 1, 1, -2, 0, 2, -6, -3, 1, -4, -2, 0, -2, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 star_a3_s0_hmd_ctbl93nit[33] = { 0, 0, 0, 0, 0, 0, 1, 0, -2, -2, 3, -6, -2, 1, -3, -2, 1, -2, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 star_a3_s0_hmd_ctbl99nit[33] = { 0, 0, 0, 0, 0, 0, 0, 1, -4, -3, 2, -6, -3, 1, -4, -2, 1, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1 };
static s32 star_a3_s0_hmd_ctbl105nit[33] = { 0, 0, 0, 0, 0, 0, 1, 1, -3, -2, 2, -6, -3, 1, -4, -1, 0, -2, -2, 0, -2, -1, 0, -1, -1, 0, 0, 0, 0, 0, 2, 0, 2 };

static struct dimming_lut star_a3_s0_hmd_dimming_lut[] = {
	DIM_LUT_V0_INIT(10, 45, GAMMA_2_15, star_a3_s0_hmd_rtbl10nit, star_a3_s0_hmd_ctbl10nit),
	DIM_LUT_V0_INIT(11, 49, GAMMA_2_15, star_a3_s0_hmd_rtbl11nit, star_a3_s0_hmd_ctbl11nit),
	DIM_LUT_V0_INIT(12, 53, GAMMA_2_15, star_a3_s0_hmd_rtbl12nit, star_a3_s0_hmd_ctbl12nit),
	DIM_LUT_V0_INIT(13, 59, GAMMA_2_15, star_a3_s0_hmd_rtbl13nit, star_a3_s0_hmd_ctbl13nit),
	DIM_LUT_V0_INIT(14, 63, GAMMA_2_15, star_a3_s0_hmd_rtbl14nit, star_a3_s0_hmd_ctbl14nit),
	DIM_LUT_V0_INIT(15, 67, GAMMA_2_15, star_a3_s0_hmd_rtbl15nit, star_a3_s0_hmd_ctbl15nit),
	DIM_LUT_V0_INIT(16, 71, GAMMA_2_15, star_a3_s0_hmd_rtbl16nit, star_a3_s0_hmd_ctbl16nit),
	DIM_LUT_V0_INIT(17, 75, GAMMA_2_15, star_a3_s0_hmd_rtbl17nit, star_a3_s0_hmd_ctbl17nit),
	DIM_LUT_V0_INIT(19, 85, GAMMA_2_15, star_a3_s0_hmd_rtbl19nit, star_a3_s0_hmd_ctbl19nit),
	DIM_LUT_V0_INIT(20, 90, GAMMA_2_15, star_a3_s0_hmd_rtbl20nit, star_a3_s0_hmd_ctbl20nit),
	DIM_LUT_V0_INIT(21, 94, GAMMA_2_15, star_a3_s0_hmd_rtbl21nit, star_a3_s0_hmd_ctbl21nit),
	DIM_LUT_V0_INIT(22, 97, GAMMA_2_15, star_a3_s0_hmd_rtbl22nit, star_a3_s0_hmd_ctbl22nit),
	DIM_LUT_V0_INIT(23, 102, GAMMA_2_15, star_a3_s0_hmd_rtbl23nit, star_a3_s0_hmd_ctbl23nit),
	DIM_LUT_V0_INIT(25, 110, GAMMA_2_15, star_a3_s0_hmd_rtbl25nit, star_a3_s0_hmd_ctbl25nit),
	DIM_LUT_V0_INIT(27, 117, GAMMA_2_15, star_a3_s0_hmd_rtbl27nit, star_a3_s0_hmd_ctbl27nit),
	DIM_LUT_V0_INIT(29, 127, GAMMA_2_15, star_a3_s0_hmd_rtbl29nit, star_a3_s0_hmd_ctbl29nit),
	DIM_LUT_V0_INIT(31, 133, GAMMA_2_15, star_a3_s0_hmd_rtbl31nit, star_a3_s0_hmd_ctbl31nit),
	DIM_LUT_V0_INIT(33, 141, GAMMA_2_15, star_a3_s0_hmd_rtbl33nit, star_a3_s0_hmd_ctbl33nit),
	DIM_LUT_V0_INIT(35, 150, GAMMA_2_15, star_a3_s0_hmd_rtbl35nit, star_a3_s0_hmd_ctbl35nit),
	DIM_LUT_V0_INIT(37, 159, GAMMA_2_15, star_a3_s0_hmd_rtbl37nit, star_a3_s0_hmd_ctbl37nit),
	DIM_LUT_V0_INIT(39, 166, GAMMA_2_15, star_a3_s0_hmd_rtbl39nit, star_a3_s0_hmd_ctbl39nit),
	DIM_LUT_V0_INIT(41, 174, GAMMA_2_15, star_a3_s0_hmd_rtbl41nit, star_a3_s0_hmd_ctbl41nit),
	DIM_LUT_V0_INIT(44, 186, GAMMA_2_15, star_a3_s0_hmd_rtbl44nit, star_a3_s0_hmd_ctbl44nit),
	DIM_LUT_V0_INIT(47, 198, GAMMA_2_15, star_a3_s0_hmd_rtbl47nit, star_a3_s0_hmd_ctbl47nit),
	DIM_LUT_V0_INIT(50, 210, GAMMA_2_15, star_a3_s0_hmd_rtbl50nit, star_a3_s0_hmd_ctbl50nit),
	DIM_LUT_V0_INIT(53, 219, GAMMA_2_15, star_a3_s0_hmd_rtbl53nit, star_a3_s0_hmd_ctbl53nit),
	DIM_LUT_V0_INIT(56, 230, GAMMA_2_15, star_a3_s0_hmd_rtbl56nit, star_a3_s0_hmd_ctbl56nit),
	DIM_LUT_V0_INIT(60, 245, GAMMA_2_15, star_a3_s0_hmd_rtbl60nit, star_a3_s0_hmd_ctbl60nit),
	DIM_LUT_V0_INIT(64, 259, GAMMA_2_15, star_a3_s0_hmd_rtbl64nit, star_a3_s0_hmd_ctbl64nit),
	DIM_LUT_V0_INIT(68, 273, GAMMA_2_15, star_a3_s0_hmd_rtbl68nit, star_a3_s0_hmd_ctbl68nit),
	DIM_LUT_V0_INIT(72, 284, GAMMA_2_15, star_a3_s0_hmd_rtbl72nit, star_a3_s0_hmd_ctbl72nit),
	DIM_LUT_V0_INIT(77, 217, GAMMA_2_15, star_a3_s0_hmd_rtbl77nit, star_a3_s0_hmd_ctbl77nit),
	DIM_LUT_V0_INIT(82, 230, GAMMA_2_15, star_a3_s0_hmd_rtbl82nit, star_a3_s0_hmd_ctbl82nit),
	DIM_LUT_V0_INIT(87, 243, GAMMA_2_15, star_a3_s0_hmd_rtbl87nit, star_a3_s0_hmd_ctbl87nit),
	DIM_LUT_V0_INIT(93, 257, GAMMA_2_15, star_a3_s0_hmd_rtbl93nit, star_a3_s0_hmd_ctbl93nit),
	DIM_LUT_V0_INIT(99, 271, GAMMA_2_15, star_a3_s0_hmd_rtbl99nit, star_a3_s0_hmd_ctbl99nit),
	DIM_LUT_V0_INIT(105, 285, GAMMA_2_15, star_a3_s0_hmd_rtbl105nit, star_a3_s0_hmd_ctbl105nit),
};

static unsigned int star_a3_s0_hmd_brt_tbl[S6E3HA8_HMD_NR_LUMINANCE] = {
	BRT(0), BRT(27), BRT(30), BRT(32), BRT(34), BRT(37), BRT(39), BRT(42), BRT(47), BRT(49),
	BRT(51), BRT(54), BRT(56), BRT(61), BRT(66), BRT(71), BRT(76), BRT(81), BRT(85), BRT(90),
	BRT(95), BRT(100), BRT(107), BRT(115), BRT(122), BRT(129), BRT(136), BRT(146), BRT(156), BRT(166),
	BRT(175), BRT(187), BRT(200), BRT(212), BRT(226), BRT(241), BRT(255),
};

static unsigned int star_a3_s0_hmd_lum_tbl[S6E3HA8_HMD_NR_LUMINANCE] = {
	10, 11, 12, 13, 14, 15, 16, 17, 19, 20,
	21, 22, 23, 25, 27, 29, 31, 33, 35, 37,
	39, 41, 44, 47, 50, 53, 56, 60, 64, 68,
	72, 77, 82, 87, 93, 99, 105,
};

static struct brightness_table s6e3ha8_star_a3_s0_panel_hmd_brightness_table = {
	.brt = star_a3_s0_hmd_brt_tbl,
	.sz_brt = ARRAY_SIZE(star_a3_s0_hmd_brt_tbl),
	.lum = star_a3_s0_hmd_lum_tbl,
	.sz_lum = ARRAY_SIZE(star_a3_s0_hmd_lum_tbl),
	.brt_to_step = star_a3_s0_hmd_brt_tbl,
	.sz_brt_to_step = ARRAY_SIZE(star_a3_s0_hmd_brt_tbl),
};

static struct panel_dimming_info s6e3ha8_star_a3_s0_panel_hmd_dimming_info = {
	.name = "s6e3ha8_star_a3_s0_hmd",
	.dim_init_info = {
		.name = "s6e3ha8_star_a3_s0_hmd",
		.nr_tp = S6E3HA8_NR_TP,
		.tp = s6e3ha8_tp,
		.nr_luminance = S6E3HA8_HMD_NR_LUMINANCE,
		.vregout = 114085069LL,	/* 6.8 * 2^24 */
		.bitshift = 24,
		.vt_voltage = {
			0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
			138, 148, 158, 168, 178, 186,
		},
		.target_luminance = S6E3HA8_HMD_TARGET_LUMINANCE,
		.target_gamma = 220,
		.dim_lut = star_a3_s0_hmd_dimming_lut,
	},
	.target_luminance = S6E3HA8_HMD_TARGET_LUMINANCE,
	.nr_luminance = S6E3HA8_HMD_NR_LUMINANCE,
	.hbm_target_luminance = -1,
	.nr_hbm_luminance = 0,
	.extend_hbm_target_luminance = -1,
	.nr_extend_hbm_luminance = 0,
	.brt_tbl = &s6e3ha8_star_a3_s0_panel_hmd_brightness_table,
};
#endif /* __S6E3HA8_STAR_A3_S0_PANEL_HMD_DIMMING_H__ */
