/*
 * ov5647_mode_tbls.h - ov5647 sensor mode tables
 *
 * Copyright (c) 2015-2019, NVIDIA CORPORATION, All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __OV5647_TABLES__
#define __OV5647_TABLES__

#include <media/camera_common.h>

#define OV5647_TABLE_WAIT_MS	0
#define OV5647_TABLE_END	1
#define OV5647_MAX_RETRIES	3
#define OV5647_WAIT_MS		10

#define ENABLE_EXTRA_MODES 0

#define ov5647_reg struct reg_8

static const ov5647_reg ov5647_start[] = {
	{0x0100, 0x01}, /* mode select streaming on */
	{OV5647_TABLE_END, 0x00}
};

static const ov5647_reg ov5647_stop[] = {
	{0x0100, 0x00}, /* mode select streaming on */
	{OV5647_TABLE_END, 0x00}
};

static const ov5647_reg tp_colorbars[] = {
	{0x0600, 0x00},
	{0x0601, 0x02},

	{OV5647_TABLE_WAIT_MS, OV5647_WAIT_MS},
	{OV5647_TABLE_END, 0x00}
};

static const ov5647_reg mode_2592x1944[] = {
	{OV5647_TABLE_WAIT_MS, OV5647_WAIT_MS},
	{0x0100, 0x00},/* Including sw reset */
	{0x3001, 0x0a},
	{0x3002, 0x80},
	{0x3006, 0x00},
	{0x3011, 0x21},
	{0x3012, 0x09},
	{0x3013, 0x10},
	{0x3014, 0x00},
	{0x3015, 0x08},
	{0x3016, 0xf0},
	{0x3017, 0xf0},
	{0x3018, 0xf0},
	{0x301b, 0xb4},
	{0x301d, 0x02},
	{0x3021, 0x00},
	{0x3022, 0x01},
	{0x3028, 0x44},
	{0x3090, 0x02},
	{0x3091, 0x0e},
	{0x3092, 0x00},
	{0x3093, 0x00},
	{0x3098, 0x03},
	{0x3099, 0x1e},
	{0x309a, 0x02},
	{0x309b, 0x01},
	{0x309c, 0x00},
	{0x30a0, 0xd2},
	{0x30a2, 0x01},
	{0x30b2, 0x00},
	{0x30b3, 0x68},
	{0x30b4, 0x03},
	{0x30b5, 0x04},
	{0x30b6, 0x01},
	{0x3104, 0x21},
	{0x3106, 0x00},
	{0x3406, 0x01},
	{0x3500, 0x00},
	{0x3501, 0x7b},
	{0x3502, 0x00},
	{0x3503, 0x07},
	{0x3504, 0x00},
	{0x3505, 0x00},
	{0x3506, 0x00},
	{0x3507, 0x02},
	{0x3508, 0x00},
	{0x3509, 0x10},
	{0x350a, 0x00},
	{0x350b, 0x40},
	{0x3601, 0x0a},
	{0x3602, 0x18},
	{0x3612, 0x80},
	{0x3620, 0x54},
	{0x3621, 0xc7},
	{0x3622, 0x0f},
	{0x3625, 0x10},
	{0x3630, 0x55},
	{0x3631, 0xf4},
	{0x3632, 0x00},
	{0x3633, 0x34},
	{0x3634, 0x02},
	{0x364d, 0x0d},
	{0x364f, 0xdd},
	{0x3660, 0x04},
	{0x3662, 0x10},
	{0x3663, 0xf1},
	{0x3665, 0x00},
	{0x3666, 0x20},
	{0x3667, 0x00},
	{0x366a, 0x80},
	{0x3680, 0xe0},
	{0x3681, 0x00},
	{0x3700, 0x42},
	{0x3701, 0x14},
	{0x3702, 0xa0},
	{0x3703, 0xd8},
	{0x3704, 0x78},
	{0x3705, 0x02},
	{0x3708, 0xe2},
	{0x3709, 0xc3},
	{0x370a, 0x00},
	{0x370b, 0x20},
	{0x370c, 0x0c},
	{0x370d, 0x11},
	{0x370e, 0x00},
	{0x370f, 0x40},
	{0x3710, 0x00},
	{0x371a, 0x1c},
	{0x371b, 0x05},
	{0x371c, 0x01},
	{0x371e, 0xa1},
	{0x371f, 0x0c},
	{0x3721, 0x00},
	{0x3724, 0x10},
	{0x3726, 0x00},
	{0x372a, 0x01},
	{0x3730, 0x10},
	{0x3738, 0x22},
	{0x3739, 0xe5},
	{0x373a, 0x50},
	{0x373b, 0x02},
	{0x373c, 0x41},
	{0x373f, 0x02},
	{0x3740, 0x42},
	{0x3741, 0x02},
	{0x3742, 0x18},
	{0x3743, 0x01},
	{0x3744, 0x02},
	{0x3747, 0x10},
	{0x374c, 0x04},
	{0x3751, 0xf0},
	{0x3752, 0x00},
	{0x3753, 0x00},
	{0x3754, 0xc0},
	{0x3755, 0x00},
	{0x3756, 0x1a},
	{0x3758, 0x00},
	{0x3759, 0x0f},
	{0x376b, 0x44},
	{0x375c, 0x04},
	{0x3776, 0x00},
	{0x377f, 0x08},
	{0x3780, 0x22},
	{0x3781, 0x0c},
	{0x3784, 0x2c},
	{0x3785, 0x1e},
	{0x378f, 0xf5},
	{0x3791, 0xb0},
	{0x3795, 0x00},
	{0x3796, 0x64},
	{0x3797, 0x11},
	{0x3798, 0x30},
	{0x3799, 0x41},
	{0x379a, 0x07},
	{0x379b, 0xb0},
	{0x379c, 0x0c},
	{0x37c5, 0x00},
	{0x37c6, 0x00},
	{0x37c7, 0x00},
	{0x37c9, 0x00},
	{0x37ca, 0x00},
	{0x37cb, 0x00},
	{0x37de, 0x00},
	{0x37df, 0x00},
	{0x3800, 0x00},
	{0x3801, 0x02},
	{0x3802, 0x00},
	{0x3803, 0x02},
	{0x3804, 0x0a},
	{0x3805, 0x41},
	{0x3806, 0x07},
	{0x3807, 0xa5},
	{0x3808, 0x0a},
	{0x3809, 0x20},
	{0x380a, 0x07},
	{0x380b, 0x98},
	{0x380c, 0x0a},
	{0x380d, 0x80},
	{0x380e, 0x07},
	{0x380f, 0xc0},
	{0x3810, 0x00},
	{0x3811, 0x02},
	{0x3812, 0x00},
	{0x3813, 0x02},
	{0x3814, 0x11},
	{0x3815, 0x11},
	{0x3820, 0x00},
	{0x3821, 0x1e},
	{0x3823, 0x00},
	{0x3824, 0x00},
	{0x3825, 0x00},
	{0x3826, 0x00},
	{0x3827, 0x00},
	{0x382a, 0x04},
	{0x3a04, 0x06},
	{0x3a05, 0x14},
	{0x3a06, 0x00},
	{0x3a07, 0xfe},
	{0x3b00, 0x00},
	{0x3b02, 0x00},
	{0x3b03, 0x00},
	{0x3b04, 0x00},
	{0x3b05, 0x00},
	{0x3d00, 0x00},
	{0x3d01, 0x00},
	{0x3d02, 0x00},
	{0x3d03, 0x00},
	{0x3d04, 0x00},
	{0x3d05, 0x00},
	{0x3d06, 0x00},
	{0x3d07, 0x00},
	{0x3d08, 0x00},
	{0x3d09, 0x00},
	{0x3d0a, 0x00},
	{0x3d0b, 0x00},
	{0x3d0c, 0x00},
	{0x3d0d, 0x00},
	{0x3d0e, 0x00},
	{0x3d0f, 0x00},
	{0x3d80, 0x00},
	{0x3d81, 0x00},
	{0x3d84, 0x00},
	{0x3e07, 0x20},
	{0x4000, 0x08},
	{0x4001, 0x04},
	{0x4002, 0x45},
	{0x4004, 0x08},
	{0x4005, 0x18},
	{0x4006, 0x20},
	{0x4008, 0x24},
	{0x4009, 0x10},
	{0x400c, 0x00},
	{0x400d, 0x00},
	{0x4058, 0x00},
	{0x4101, 0xb2},
	{0x4303, 0x00},
	{0x4304, 0x08},
	{0x4307, 0x30},
	{0x4311, 0x04},
	{0x4315, 0x01},
	{0x4511, 0x05},
	{0x4512, 0x01},
	{0x4800, 0x20}, /* dis-continuous */
	{0x4806, 0x00},
	{0x4816, 0x52},
	{0x481f, 0x30},
	{0x4826, 0x32},
	{0x4831, 0x6a},
	{0x4d00, 0x04},
	{0x4d01, 0x71},
	{0x4d02, 0xfd},
	{0x4d03, 0xf5},
	{0x4d04, 0x0c},
	{0x4d05, 0xcc},
	{0x4837, 0x0a},
	{0x5000, 0x06},
	{0x5001, 0x01},
	{0x5002, 0x00},
	{0x5003, 0x20},
	{0x5046, 0x0a},
	{0x5013, 0x00},
	{0x5046, 0x0a},
	{0x5780, 0x1c},
	{0x5786, 0x20},
	{0x5787, 0x10},
	{0x5788, 0x18},
	{0x578a, 0x04},
	{0x578b, 0x02},
	{0x578c, 0x02},
	{0x578e, 0x06},
	{0x578f, 0x02},
	{0x5790, 0x02},
	{0x5791, 0xff},
	{0x5842, 0x01},
	{0x5843, 0x2b},
	{0x5844, 0x01},
	{0x5845, 0x92},
	{0x5846, 0x01},
	{0x5847, 0x8f},
	{0x5848, 0x01},
	{0x5849, 0x0c},
	{0x5e00, 0x00},
	{0x5e10, 0x0c},
	{OV5647_TABLE_END, 0x0000}
};

static const ov5647_reg mode_1920x1080[] = {
	{OV5647_TABLE_WAIT_MS, OV5647_WAIT_MS},
	{0x0100, 0x00},/*, 0xIncluding, 0xsw, 0xreset, 0x*/
	{0x3001, 0x0a},
	{0x3002, 0x80},
	{0x3006, 0x00},
	{0x3011, 0x21},
	{0x3012, 0x09},
	{0x3013, 0x10},
	{0x3014, 0x00},
	{0x3015, 0x08},
	{0x3016, 0xf0},
	{0x3017, 0xf0},
	{0x3018, 0xf0},
	{0x301b, 0xb4},
	{0x301d, 0x02},
	{0x3021, 0x00},
	{0x3022, 0x01},
	{0x3028, 0x44},
	{0x3098, 0x03},
	{0x3099, 0x1e},
	{0x309a, 0x02},
	{0x309b, 0x01},
	{0x309c, 0x00},
	{0x30a0, 0xd2},
	{0x30a2, 0x01},
	{0x30b2, 0x00},
	{0x30b3, 0x68},
	{0x30b4, 0x03},
	{0x30b5, 0x04},
	{0x30b6, 0x01},
	{0x3104, 0x21},
	{0x3106, 0x00},
	{0x3406, 0x01},
	{0x3500, 0x00},
	{0x3501, 0x7b},
	{0x3502, 0x00},
	{0x3503, 0x07},
	{0x3504, 0x00},
	{0x3505, 0x00},
	{0x3506, 0x00},
	{0x3507, 0x02},
	{0x3508, 0x00},
	{0x3509, 0x10},
	{0x350a, 0x00},
	{0x350b, 0x40},
	{0x3601, 0x0a},
	{0x3602, 0x38},
	{0x3612, 0x80},
	{0x3620, 0x54},
	{0x3621, 0xc7},
	{0x3622, 0x0f},
	{0x3625, 0x10},
	{0x3630, 0x55},
	{0x3631, 0xf4},
	{0x3632, 0x00},
	{0x3633, 0x34},
	{0x3634, 0x02},
	{0x364d, 0x0d},
	{0x364f, 0xdd},
	{0x3660, 0x04},
	{0x3662, 0x10},
	{0x3663, 0xf1},
	{0x3665, 0x00},
	{0x3666, 0x20},
	{0x3667, 0x00},
	{0x366a, 0x80},
	{0x3680, 0xe0},
	{0x3681, 0x00},
	{0x3700, 0x42},
	{0x3701, 0x14},
	{0x3702, 0xa0},
	{0x3703, 0xd8},
	{0x3704, 0x78},
	{0x3705, 0x02},
	{0x3708, 0xe2},
	{0x3709, 0xc3},
	{0x370a, 0x00},
	{0x370b, 0x20},
	{0x370c, 0x0c},
	{0x370d, 0x11},
	{0x370e, 0x00},
	{0x370f, 0x40},
	{0x3710, 0x00},
	{0x371a, 0x1c},
	{0x371b, 0x05},
	{0x371c, 0x01},
	{0x371e, 0xa1},
	{0x371f, 0x0c},
	{0x3721, 0x00},
	{0x3724, 0x10},
	{0x3726, 0x00},
	{0x372a, 0x01},
	{0x3730, 0x10},
	{0x3738, 0x22},
	{0x3739, 0xe5},
	{0x373a, 0x50},
	{0x373b, 0x02},
	{0x373c, 0x41},
	{0x373f, 0x02},
	{0x3740, 0x42},
	{0x3741, 0x02},
	{0x3742, 0x18},
	{0x3743, 0x01},
	{0x3744, 0x02},
	{0x3747, 0x10},
	{0x374c, 0x04},
	{0x3751, 0xf0},
	{0x3752, 0x00},
	{0x3753, 0x00},
	{0x3754, 0xc0},
	{0x3755, 0x00},
	{0x3756, 0x1a},
	{0x3758, 0x00},
	{0x3759, 0x0f},
	{0x376b, 0x44},
	{0x375c, 0x04},
	{0x3774, 0x10},
	{0x3776, 0x00},
	{0x377f, 0x08},
	{0x3780, 0x22},
	{0x3781, 0x0c},
	{0x3784, 0x2c},
	{0x3785, 0x1e},
	{0x378f, 0xf5},
	{0x3791, 0xb0},
	{0x3795, 0x00},
	{0x3796, 0x64},
	{0x3797, 0x11},
	{0x3798, 0x30},
	{0x3799, 0x41},
	{0x379a, 0x07},
	{0x379b, 0xb0},
	{0x379c, 0x0c},
	{0x37c5, 0x00},
	{0x37c6, 0x00},
	{0x37c7, 0x00},
	{0x37c9, 0x00},
	{0x37ca, 0x00},
	{0x37cb, 0x00},
	{0x37de, 0x00},
	{0x37df, 0x00},
	{0x3800, 0x00},
	{0x3801, 0x00},
	{0x3802, 0x00},
	{0x3803, 0xf8},
	{0x3804, 0x0a},
	{0x3805, 0x3f},
	{0x3806, 0x06},
	{0x3807, 0xab},
	{0x3808, 0x07},
	{0x3809, 0x80},
	{0x380a, 0x04},
	{0x380b, 0x38},
	{0x380c, 0x0a},
	{0x380d, 0x80},
	{0x380e, 0x07},
	{0x380f, 0xc0},
	{0x3810, 0x00},
	{0x3811, 0x02},
	{0x3812, 0x00},
	{0x3813, 0x02},
	{0x3814, 0x11},
	{0x3815, 0x11},
	{0x3820, 0x00},
	{0x3821, 0x1e},
	{0x3823, 0x00},
	{0x3824, 0x00},
	{0x3825, 0x00},
	{0x3826, 0x00},
	{0x3827, 0x00},
	{0x382a, 0x04},
	{0x3a04, 0x06},
	{0x3a05, 0x14},
	{0x3a06, 0x00},
	{0x3a07, 0xfe},
	{0x3b00, 0x00},
	{0x3b02, 0x00},
	{0x3b03, 0x00},
	{0x3b04, 0x00},
	{0x3b05, 0x00},
	{0x3e07, 0x20},
	{0x4000, 0x08},
	{0x4001, 0x04},
	{0x4002, 0x45},
	{0x4004, 0x08},
	{0x4005, 0x18},
	{0x4006, 0x20},
	{0x4008, 0x24},
	{0x4009, 0x10},
	{0x400c, 0x00},
	{0x400d, 0x00},
	{0x4058, 0x00},
	{0x404e, 0x37},
	{0x404f, 0x8f},
	{0x4058, 0x00},
	{0x4101, 0xb2},
	{0x4303, 0x00},
	{0x4304, 0x08},
	{0x4307, 0x30},
	{0x4311, 0x04},
	{0x4315, 0x01},
	{0x4511, 0x05},
	{0x4512, 0x01},
	{0x4800, 0x20}, /* dis-continuous */
	{0x4806, 0x00},
	{0x4816, 0x52},
	{0x481f, 0x30},
	{0x4826, 0x32},
	{0x4831, 0x6a},
	{0x4d00, 0x04},
	{0x4d01, 0x71},
	{0x4d02, 0xfd},
	{0x4d03, 0xf5},
	{0x4d04, 0x0c},
	{0x4d05, 0xcc},
	{0x4837, 0x0a},
	{0x5000, 0x06},
	{0x5001, 0x01},
	{0x5002, 0x80},
	{0x5003, 0x20},
	{0x5046, 0x0a},
	{0x5013, 0x00},
	{0x5046, 0x0a},
	{0x5780, 0x1c},
	{0x5786, 0x20},
	{0x5787, 0x10},
	{0x5788, 0x18},
	{0x578a, 0x04},
	{0x578b, 0x02},
	{0x578c, 0x02},
	{0x578e, 0x06},
	{0x578f, 0x02},
	{0x5790, 0x02},
	{0x5791, 0xff},
	{0x5842, 0x01},
	{0x5843, 0x2b},
	{0x5844, 0x01},
	{0x5845, 0x92},
	{0x5846, 0x01},
	{0x5847, 0x8f},
	{0x5848, 0x01},
	{0x5849, 0x0c},
	{0x5e00, 0x00},
	{0x5e10, 0x0c},
	{OV5647_TABLE_END, 0x0000}
};

static const ov5647_reg mode_1280x720_60fps[] = {
	{OV5647_TABLE_WAIT_MS, OV5647_WAIT_MS},
	{0x0100, 0x00},/* Including sw reset */
	{0x3001, 0x0a},
	{0x3002, 0x80},
	{0x3006, 0x00},
	{0x3011, 0x21},
	{0x3012, 0x09},
	{0x3013, 0x10},
	{0x3014, 0x00},
	{0x3015, 0x08},
	{0x3016, 0xf0},
	{0x3017, 0xf0},
	{0x3018, 0xf0},
	{0x301b, 0xb4},
	{0x301d, 0x02},
	{0x3021, 0x00},
	{0x3022, 0x01},
	{0x3028, 0x44},
	{0x3098, 0x03},
	{0x3099, 0x1e},
	{0x309a, 0x02},
	{0x309b, 0x01},
	{0x309c, 0x00},
	{0x30a0, 0xd2},
	{0x30a2, 0x01},
	{0x30b2, 0x00},
	{0x30b3, 0x68},
	{0x30b4, 0x03},
	{0x30b5, 0x04},
	{0x30b6, 0x01},
	{0x3104, 0x21},
	{0x3106, 0x00},
	{0x3406, 0x01},
	{0x3500, 0x00},
	{0x3501, 0x2e},
	{0x3502, 0x80},
	{0x3503, 0x07},
	{0x3504, 0x00},
	{0x3505, 0x00},
	{0x3506, 0x00},
	{0x3507, 0x02},
	{0x3508, 0x00},
	{0x3509, 0x10},
	{0x350a, 0x00},
	{0x350b, 0x40},
	{0x3601, 0x0a},
	{0x3602, 0x38},
	{0x3612, 0x80},
	{0x3620, 0x54},
	{0x3621, 0xc7},
	{0x3622, 0x0f},
	{0x3625, 0x10},
	{0x3630, 0x55},
	{0x3631, 0xf4},
	{0x3632, 0x00},
	{0x3633, 0x34},
	{0x3634, 0x02},
	{0x364d, 0x0d},
	{0x364f, 0xdd},
	{0x3660, 0x04},
	{0x3662, 0x10},
	{0x3663, 0xf1},
	{0x3665, 0x00},
	{0x3666, 0x20},
	{0x3667, 0x00},
	{0x366a, 0x80},
	{0x3680, 0xe0},
	{0x3681, 0x00},
	{0x3700, 0x42},
	{0x3701, 0x14},
	{0x3702, 0xa0},
	{0x3703, 0xd8},
	{0x3704, 0x78},
	{0x3705, 0x02},
	{0x3708, 0xe6},
	{0x3709, 0xc7},
	{0x370a, 0x00},
	{0x370b, 0x20},
	{0x370c, 0x0c},
	{0x370d, 0x11},
	{0x370e, 0x00},
	{0x370f, 0x40},
	{0x3710, 0x00},
	{0x371a, 0x1c},
	{0x371b, 0x05},
	{0x371c, 0x01},
	{0x371e, 0xa1},
	{0x371f, 0x0c},
	{0x3721, 0x00},
	{0x3724, 0x10},
	{0x3726, 0x00},
	{0x372a, 0x01},
	{0x3730, 0x10},
	{0x3738, 0x22},
	{0x3739, 0xe5},
	{0x373a, 0x50},
	{0x373b, 0x02},
	{0x373c, 0x41},
	{0x373f, 0x02},
	{0x3740, 0x42},
	{0x3741, 0x02},
	{0x3742, 0x18},
	{0x3743, 0x01},
	{0x3744, 0x02},
	{0x3747, 0x10},
	{0x374c, 0x04},
	{0x3751, 0xf0},
	{0x3752, 0x00},
	{0x3753, 0x00},
	{0x3754, 0xc0},
	{0x3755, 0x00},
	{0x3756, 0x1a},
	{0x3758, 0x00},
	{0x3759, 0x0f},
	{0x376b, 0x44},
	{0x375c, 0x04},
	{0x3774, 0x10},
	{0x3776, 0x00},
	{0x377f, 0x08},
	{0x3780, 0x22},
	{0x3781, 0x0c},
	{0x3784, 0x2c},
	{0x3785, 0x1e},
	{0x378f, 0xf5},
	{0x3791, 0xb0},
	{0x3795, 0x00},
	{0x3796, 0x64},
	{0x3797, 0x11},
	{0x3798, 0x30},
	{0x3799, 0x41},
	{0x379a, 0x07},
	{0x379b, 0xb0},
	{0x379c, 0x0c},
	{0x37c5, 0x00},
	{0x37c6, 0x00},
	{0x37c7, 0x00},
	{0x37c9, 0x00},
	{0x37ca, 0x00},
	{0x37cb, 0x00},
	{0x37de, 0x00},
	{0x37df, 0x00},
	{0x3800, 0x00},
	{0x3801, 0x00},
	{0x3802, 0x00},
	{0x3803, 0xf4},
	{0x3804, 0x0a},
	{0x3805, 0x3f},
	{0x3806, 0x06},
	{0x3807, 0xab},
	{0x3808, 0x05},
	{0x3809, 0x00},
	{0x380a, 0x02},
	{0x380b, 0xd0},
	{0x380c, 0x06},
	{0x380d, 0xd8},
	{0x380e, 0x02},
	{0x380f, 0xf8},
	{0x3810, 0x00},
	{0x3811, 0x02},
	{0x3812, 0x00},
	{0x3813, 0x02},
	{0x3814, 0x31},
	{0x3815, 0x31},
	{0x3820, 0x04},
	{0x3821, 0x1f},
	{0x3823, 0x00},
	{0x3824, 0x00},
	{0x3825, 0x00},
	{0x3826, 0x00},
	{0x3827, 0x00},
	{0x382a, 0x04},
	{0x3a04, 0x06},
	{0x3a05, 0x14},
	{0x3a06, 0x00},
	{0x3a07, 0xfe},
	{0x3b00, 0x00},
	{0x3b02, 0x00},
	{0x3b03, 0x00},
	{0x3b04, 0x00},
	{0x3b05, 0x00},
	{0x3e07, 0x20},
	{0x4000, 0x08},
	{0x4001, 0x04},
	{0x4002, 0x45},
	{0x4004, 0x08},
	{0x4005, 0x18},
	{0x4006, 0x20},
	{0x4008, 0x24},
	{0x4009, 0x10},
	{0x400c, 0x00},
	{0x400d, 0x00},
	{0x4058, 0x00},
	{0x404e, 0x37},
	{0x404f, 0x8f},
	{0x4058, 0x00},
	{0x4101, 0xb2},
	{0x4303, 0x00},
	{0x4304, 0x08},
	{0x4307, 0x30},
	{0x4311, 0x04},
	{0x4315, 0x01},
	{0x4511, 0x05},
	{0x4512, 0x00},
	{0x4800, 0x20}, /* dis-continuous */
	{0x4806, 0x00},
	{0x4816, 0x52},
	{0x481f, 0x30},
	{0x4826, 0x32},
	{0x4831, 0x6a},
	{0x4d00, 0x04},
	{0x4d01, 0x71},
	{0x4d02, 0xfd},
	{0x4d03, 0xf5},
	{0x4d04, 0x0c},
	{0x4d05, 0xcc},
	{0x4837, 0x0a},
	{0x5000, 0x06},
	{0x5001, 0x01},
	{0x5002, 0x00},
	{0x5003, 0x20},
	{0x5046, 0x0a},
	{0x5013, 0x00},
	{0x5046, 0x0a},
	{0x5780, 0x1c},
	{0x5786, 0x20},
	{0x5787, 0x10},
	{0x5788, 0x18},
	{0x578a, 0x04},
	{0x578b, 0x02},
	{0x578c, 0x02},
	{0x578e, 0x06},
	{0x578f, 0x02},
	{0x5790, 0x02},
	{0x5791, 0xff},
	{0x5842, 0x01},
	{0x5843, 0x2b},
	{0x5844, 0x01},
	{0x5845, 0x92},
	{0x5846, 0x01},
	{0x5847, 0x8f},
	{0x5848, 0x01},
	{0x5849, 0x0c},
	{0x5e00, 0x00},
	{0x5e10, 0x0c},
	{OV5647_TABLE_END, 0x0000}
};

static const ov5647_reg mode_1920x1080_HDR_30fps[] = {
	{OV5647_TABLE_WAIT_MS, OV5647_WAIT_MS},
	{0x0100, 0x00},/* Including sw reset */
	{0x0103, 0x01},
	{0x3001, 0x0a},
	{0x3002, 0x80},
	{0x3006, 0x00},
	{0x3011, 0x21},
	{0x3012, 0x09},
	{0x3013, 0x10},
	{0x3014, 0x00},
	{0x3015, 0x08},
	{0x3016, 0xf0},
	{0x3017, 0xf0},
	{0x3018, 0xf0},
	{0x301b, 0xb4},
	{0x301d, 0x02},
	{0x3021, 0x00},
	{0x3022, 0x01},
	{0x3028, 0x44},
	{0x3098, 0x03},
	{0x3099, 0x1e},
	{0x309a, 0x02},
	{0x309b, 0x01},
	{0x309c, 0x00},
	{0x30a0, 0xd2},
	{0x30a2, 0x01},
	{0x30b2, 0x00},
	{0x30b3, 0x68},
	{0x30b4, 0x03},
	{0x30b5, 0x04},
	{0x30b6, 0x01},
	{0x3104, 0x21},
	{0x3106, 0x00},
	{0x3406, 0x01},
	{0x3500, 0x00},
	{0x3501, 0x72},
	{0x3502, 0x00},
	{0x3503, 0x07},
	{0x3504, 0x00},
	{0x3505, 0x00},
	{0x3506, 0x00},
	{0x3507, 0x01},
	{0x3508, 0x80},
	{0x3509, 0x10},
	{0x350a, 0x00},
	{0x350b, 0x40},
	{0x3601, 0x0a},
	{0x3602, 0x38},
	{0x3612, 0x80},
	{0x3620, 0x54},
	{0x3621, 0xc7},
	{0x3622, 0x0f},
	{0x3625, 0x10},
	{0x3630, 0x55},
	{0x3631, 0xf4},
	{0x3632, 0x00},
	{0x3633, 0x34},
	{0x3634, 0x02},
	{0x364d, 0x0d},
	{0x364f, 0xdd},
	{0x3660, 0x04},
	{0x3662, 0x10},
	{0x3663, 0xf1},
	{0x3665, 0x00},
	{0x3666, 0x20},
	{0x3667, 0x00},
	{0x366a, 0x80},
	{0x3680, 0xe0},
	{0x3681, 0x00},
	{0x3700, 0x42},
	{0x3701, 0x14},
	{0x3702, 0xa0},
	{0x3703, 0xd8},
	{0x3704, 0x78},
	{0x3705, 0x02},
	{0x3708, 0xe2},
	{0x3709, 0xc3},
	{0x370a, 0x00},
	{0x370b, 0x20},
	{0x370c, 0x0c},
	{0x370d, 0x11},
	{0x370e, 0x00},
	{0x370f, 0x40},
	{0x3710, 0x00},
	{0x371a, 0x1c},
	{0x371b, 0x05},
	{0x371c, 0x01},
	{0x371e, 0xa1},
	{0x371f, 0x0c},
	{0x3721, 0x00},
	{0x3724, 0x10},
	{0x3726, 0x00},
	{0x372a, 0x01},
	{0x3730, 0x10},
	{0x3738, 0x22},
	{0x3739, 0xe5},
	{0x373a, 0x50},
	{0x373b, 0x02},
	{0x373c, 0x41},
	{0x373f, 0x02},
	{0x3740, 0x42},
	{0x3741, 0x02},
	{0x3742, 0x18},
	{0x3743, 0x01},
	{0x3744, 0x02},
	{0x3747, 0x10},
	{0x374c, 0x04},
	{0x3751, 0xf0},
	{0x3752, 0x00},
	{0x3753, 0x00},
	{0x3754, 0xc0},
	{0x3755, 0x00},
	{0x3756, 0x1a},
	{0x3758, 0x00},
	{0x3759, 0x0f},
	{0x376b, 0x44},
	{0x375c, 0x04},
	{0x3774, 0x10},
	{0x3776, 0x00},
	{0x377f, 0x08},
	{0x3780, 0x22},
	{0x3781, 0x0c},
	{0x3784, 0x2c},
	{0x3785, 0x1e},
	{0x378f, 0xf5},
	{0x3791, 0xb0},
	{0x3795, 0x00},
	{0x3796, 0x64},
	{0x3797, 0x11},
	{0x3798, 0x30},
	{0x3799, 0x41},
	{0x379a, 0x07},
	{0x379b, 0xb0},
	{0x379c, 0x0c},
	{0x37c5, 0x00},
	{0x37c6, 0x00},
	{0x37c7, 0x00},
	{0x37c9, 0x00},
	{0x37ca, 0x00},
	{0x37cb, 0x00},
	{0x37de, 0x00},
	{0x37df, 0x00},
	{0x3800, 0x01},
	{0x3801, 0x70},
	{0x3802, 0x01},
	{0x3803, 0xbc},
	{0x3804, 0x09},
	{0x3805, 0x0f},
	{0x3806, 0x05},
	{0x3807, 0xff},
	{0x3808, 0x07},
	{0x3809, 0x80},
	{0x380a, 0x04},
	{0x380b, 0x38},
	{0x380c, 0x0b},
	{0x380d, 0x40},
	{0x380e, 0x07},
	{0x380f, 0x3a},
	{0x3810, 0x00},
	{0x3811, 0x02},
	{0x3812, 0x00},
	{0x3813, 0x02},
	{0x3814, 0x11},
	{0x3815, 0x11},
	{0x3820, 0x00},
	{0x3821, 0x9e},
	{0x3823, 0x00},
	{0x3824, 0x00},
	{0x3825, 0x00},
	{0x3826, 0x00},
	{0x3827, 0x00},
	{0x382a, 0x04},
	{0x3a04, 0x09},
	{0x3a05, 0xa9},
	{0x3a06, 0x00},
	{0x3a07, 0xfe},
	{0x3b00, 0x00},
	{0x3b02, 0x00},
	{0x3b03, 0x00},
	{0x3b04, 0x00},
	{0x3b05, 0x00},
	{0x3e07, 0x20},
	{0x4000, 0x08},
	{0x4001, 0x04},
	{0x4002, 0x45},
	{0x4004, 0x08},
	{0x4005, 0x18},
	{0x4006, 0x20},
	{0x4008, 0x24},
	{0x4009, 0x10},
	{0x400c, 0x00},
	{0x400d, 0x00},
	{0x4058, 0x00},
	{0x404e, 0x37},
	{0x404f, 0x8f},
	{0x4058, 0x00},
	{0x4101, 0xb2},
	{0x4303, 0x00},
	{0x4304, 0x08},
	{0x4307, 0x30},
	{0x4311, 0x04},
	{0x4315, 0x01},
	{0x4511, 0x05},
	{0x4512, 0x01},
	{0x4800, 0x20}, /* dis-continuous */
	{0x4806, 0x00},
	{0x4816, 0x52},
	{0x481f, 0x30},
	{0x4826, 0x32},
	{0x4831, 0x6a},
	{0x4d00, 0x04},
	{0x4d01, 0x71},
	{0x4d02, 0xfd},
	{0x4d03, 0xf5},
	{0x4d04, 0x0c},
	{0x4d05, 0xcc},
	{0x4837, 0x0a},
	{0x5000, 0x06},
	{0x5001, 0x01},
	{0x5002, 0x00},
	{0x5003, 0x20},
	{0x5046, 0x0a},
	{0x5013, 0x00},
	{0x5046, 0x0a},
	{0x5780, 0x1c},
	{0x5786, 0x20},
	{0x5787, 0x10},
	{0x5788, 0x18},
	{0x578a, 0x04},
	{0x578b, 0x02},
	{0x578c, 0x02},
	{0x578e, 0x06},
	{0x578f, 0x02},
	{0x5790, 0x02},
	{0x5791, 0xff},
	{0x5842, 0x01},
	{0x5843, 0x2b},
	{0x5844, 0x01},
	{0x5845, 0x92},
	{0x5846, 0x01},
	{0x5847, 0x8f},
	{0x5848, 0x01},
	{0x5849, 0x0c},
	{0x5e00, 0x00},
	{0x5e10, 0x0c},
	{OV5647_TABLE_END, 0x0000}
};

static const ov5647_reg mode_1280x720_HDR_60fps[] = {
	{OV5647_TABLE_WAIT_MS, OV5647_WAIT_MS},
	{0x0100, 0x00},/* Including sw reset */
	{0x0103, 0x01},
	{0x3001, 0x0a},
	{0x3002, 0x80},
	{0x3006, 0x00},
	{0x3011, 0x21},
	{0x3012, 0x09},
	{0x3013, 0x10},
	{0x3014, 0x00},
	{0x3015, 0x08},
	{0x3016, 0xf0},
	{0x3017, 0xf0},
	{0x3018, 0xf0},
	{0x301b, 0xb4},
	{0x301d, 0x02},
	{0x3021, 0x00},
	{0x3022, 0x01},
	{0x3028, 0x44},
	{0x3098, 0x03},
	{0x3099, 0x1e},
	{0x309a, 0x02},
	{0x309b, 0x01},
	{0x309c, 0x00},
	{0x30a0, 0xd2},
	{0x30a2, 0x01},
	{0x30b2, 0x00},
	{0x30b3, 0x68},
	{0x30b4, 0x03},
	{0x30b5, 0x04},
	{0x30b6, 0x01},
	{0x3104, 0x21},
	{0x3106, 0x00},
	{0x3406, 0x01},
	{0x3500, 0x00},
	{0x3501, 0x39},
	{0x3502, 0x00},
	{0x3503, 0x07},
	{0x3504, 0x00},
	{0x3505, 0x00},
	{0x3506, 0x00},
	{0x3507, 0x01},
	{0x3508, 0x80},
	{0x3509, 0x10},
	{0x350a, 0x00},
	{0x350b, 0x40},
	{0x3601, 0x0a},
	{0x3602, 0x38},
	{0x3612, 0x80},
	{0x3620, 0x54},
	{0x3621, 0xc7},
	{0x3622, 0x0f},
	{0x3625, 0x10},
	{0x3630, 0x55},
	{0x3631, 0xf4},
	{0x3632, 0x00},
	{0x3633, 0x34},
	{0x3634, 0x02},
	{0x364d, 0x0d},
	{0x364f, 0xdd},
	{0x3660, 0x04},
	{0x3662, 0x10},
	{0x3663, 0xf1},
	{0x3665, 0x00},
	{0x3666, 0x20},
	{0x3667, 0x00},
	{0x366a, 0x80},
	{0x3680, 0xe0},
	{0x3681, 0x00},
	{0x3700, 0x42},
	{0x3701, 0x14},
	{0x3702, 0xa0},
	{0x3703, 0xd8},
	{0x3704, 0x78},
	{0x3705, 0x02},
	{0x3708, 0xe2},
	{0x3709, 0xc3},
	{0x370a, 0x00},
	{0x370b, 0x20},
	{0x370c, 0x0c},
	{0x370d, 0x11},
	{0x370e, 0x00},
	{0x370f, 0x40},
	{0x3710, 0x00},
	{0x371a, 0x1c},
	{0x371b, 0x05},
	{0x371c, 0x01},
	{0x371e, 0xa1},
	{0x371f, 0x0c},
	{0x3721, 0x00},
	{0x3724, 0x10},
	{0x3726, 0x00},
	{0x372a, 0x01},
	{0x3730, 0x10},
	{0x3738, 0x22},
	{0x3739, 0xe5},
	{0x373a, 0x50},
	{0x373b, 0x02},
	{0x373c, 0x41},
	{0x373f, 0x02},
	{0x3740, 0x42},
	{0x3741, 0x02},
	{0x3742, 0x18},
	{0x3743, 0x01},
	{0x3744, 0x02},
	{0x3747, 0x10},
	{0x374c, 0x04},
	{0x3751, 0xf0},
	{0x3752, 0x00},
	{0x3753, 0x00},
	{0x3754, 0xc0},
	{0x3755, 0x00},
	{0x3756, 0x1a},
	{0x3758, 0x00},
	{0x3759, 0x0f},
	{0x376b, 0x44},
	{0x375c, 0x04},
	{0x3774, 0x10},
	{0x3776, 0x00},
	{0x377f, 0x08},
	{0x3780, 0x22},
	{0x3781, 0x0c},
	{0x3784, 0x2c},
	{0x3785, 0x1e},
	{0x378f, 0xf5},
	{0x3791, 0xb0},
	{0x3795, 0x00},
	{0x3796, 0x64},
	{0x3797, 0x11},
	{0x3798, 0x30},
	{0x3799, 0x41},
	{0x379a, 0x07},
	{0x379b, 0xb0},
	{0x379c, 0x0c},
	{0x37c5, 0x00},
	{0x37c6, 0x00},
	{0x37c7, 0x00},
	{0x37c9, 0x00},
	{0x37ca, 0x00},
	{0x37cb, 0x00},
	{0x37de, 0x00},
	{0x37df, 0x00},
	{0x3800, 0x02},
	{0x3801, 0xa8},
	{0x3802, 0x02},
	{0x3803, 0x68},
	{0x3804, 0x07},
	{0x3805, 0xb7},
	{0x3806, 0x05},
	{0x3807, 0x3b},
	{0x3808, 0x05},
	{0x3809, 0x00},
	{0x380a, 0x02},
	{0x380b, 0xd0},
	{0x380c, 0x0b},
	{0x380d, 0x40},
	{0x380e, 0x03},
	{0x380f, 0x9e},
	{0x3810, 0x00},
	{0x3811, 0x02},
	{0x3812, 0x00},
	{0x3813, 0x02},
	{0x3814, 0x11},
	{0x3815, 0x11},
	{0x3820, 0x00},
	{0x3821, 0x9e},
	{0x3823, 0x00},
	{0x3824, 0x00},
	{0x3825, 0x00},
	{0x3826, 0x00},
	{0x3827, 0x00},
	{0x382a, 0x04},
	{0x3a04, 0x09},
	{0x3a05, 0xa9},
	{0x3a06, 0x00},
	{0x3a07, 0xfe},
	{0x3b00, 0x00},
	{0x3b02, 0x00},
	{0x3b03, 0x00},
	{0x3b04, 0x00},
	{0x3b05, 0x00},
	{0x3e07, 0x20},
	{0x4000, 0x08},
	{0x4001, 0x04},
	{0x4002, 0x45},
	{0x4004, 0x08},
	{0x4005, 0x18},
	{0x4006, 0x20},
	{0x4008, 0x24},
	{0x4009, 0x10},
	{0x400c, 0x00},
	{0x400d, 0x00},
	{0x4058, 0x00},
	{0x404e, 0x37},
	{0x404f, 0x8f},
	{0x4058, 0x00},
	{0x4101, 0xb2},
	{0x4303, 0x00},
	{0x4304, 0x08},
	{0x4307, 0x30},
	{0x4311, 0x04},
	{0x4315, 0x01},
	{0x4511, 0x05},
	{0x4512, 0x01},
	{0x4800, 0x20}, /* dis-continuous */
	{0x4806, 0x00},
	{0x4816, 0x52},
	{0x481f, 0x30},
	{0x4826, 0x32},
	{0x4831, 0x6a},
	{0x4d00, 0x04},
	{0x4d01, 0x71},
	{0x4d02, 0xfd},
	{0x4d03, 0xf5},
	{0x4d04, 0x0c},
	{0x4d05, 0xcc},
	{0x4837, 0x0a},
	{0x5000, 0x06},
	{0x5001, 0x01},
	{0x5002, 0x00},
	{0x5003, 0x20},
	{0x5046, 0x0a},
	{0x5013, 0x00},
	{0x5046, 0x0a},
	{0x5780, 0x1c},
	{0x5786, 0x20},
	{0x5787, 0x10},
	{0x5788, 0x18},
	{0x578a, 0x04},
	{0x578b, 0x02},
	{0x578c, 0x02},
	{0x578e, 0x06},
	{0x578f, 0x02},
	{0x5790, 0x02},
	{0x5791, 0xff},
	{0x5842, 0x01},
	{0x5843, 0x2b},
	{0x5844, 0x01},
	{0x5845, 0x92},
	{0x5846, 0x01},
	{0x5847, 0x8f},
	{0x5848, 0x01},
	{0x5849, 0x0c},
	{0x5e00, 0x00},
	{0x5e10, 0x0c},
	{OV5647_TABLE_END, 0x0000}
};

static const ov5647_reg mode_2592x1944_one_lane_15fps[] = {
	{0x0100, 0x00},/* Including sw reset */
	{0x0103, 0x01},
	{0x3001, 0x0a},
	{0x3002, 0x80},
	{0x3006, 0x00},
	{0x3011, 0x11},
	{0x3012, 0x09},
	{0x3013, 0x10},
	{0x3014, 0x00},
	{0x3015, 0x28},
	{0x3016, 0xf0},
	{0x3017, 0xf0},
	{0x3018, 0xf0},
	{0x301b, 0xb4},
	{0x301d, 0x02},
	{0x3021, 0x00},
	{0x3022, 0x01},
	{0x3028, 0x44},
	{0x3098, 0x03},
	{0x3099, 0x1e},
	{0x309a, 0x05},
	{0x309b, 0x01},
	{0x309c, 0x00},
	{0x30a0, 0xd2},
	{0x30a2, 0x01},
	{0x30b2, 0x00},
	{0x30b3, 0x64},
	{0x30b4, 0x03},
	{0x30b5, 0x04},
	{0x30b6, 0x01},
	{0x3104, 0x21},
	{0x3106, 0x00},
	{0x3400, 0x04},
	{0x3401, 0x00},
	{0x3402, 0x04},
	{0x3403, 0x00},
	{0x3404, 0x04},
	{0x3405, 0x00},
	{0x3406, 0x01},
	{0x3500, 0x00},
	{0x3501, 0x7b},
	{0x3502, 0x00},
	{0x3503, 0x07},
	{0x3504, 0x00},
	{0x3505, 0x00},
	{0x3506, 0x00},
	{0x3507, 0x02},
	{0x3508, 0x00},
	{0x3509, 0x10},
	{0x350a, 0x00},
	{0x350b, 0x20},
	{0x3600, 0xbc},
	{0x3601, 0x0a},
	{0x3602, 0x38},
	{0x3612, 0x80},
	{0x3620, 0x44},
	{0x3621, 0xb5},
	{0x3622, 0x0c},
	{0x3625, 0x10},
	{0x3630, 0x55},
	{0x3631, 0xf4},
	{0x3632, 0x00},
	{0x3633, 0x34},
	{0x3634, 0x02},
	{0x364d, 0x0d},
	{0x364f, 0xdd},
	{0x3660, 0x04},
	{0x3662, 0x10},
	{0x3663, 0xf1},
	{0x3665, 0x00},
	{0x3666, 0x20},
	{0x3667, 0x00},
	{0x366a, 0x80},
	{0x3680, 0xe0},
	{0x3681, 0x00},
	{0x3700, 0x42},
	{0x3701, 0x14},
	{0x3702, 0xa0},
	{0x3703, 0xd8},
	{0x3704, 0x78},
	{0x3705, 0x02},
	{0x3708, 0xe2},
	{0x3709, 0xc3},
	{0x370a, 0x00},
	{0x370b, 0x20},
	{0x370c, 0x0c},
	{0x370d, 0x11},
	{0x370e, 0x00},
	{0x370f, 0x40},
	{0x3710, 0x00},
	{0x371a, 0x1c},
	{0x371b, 0x05},
	{0x371c, 0x01},
	{0x371e, 0xa1},
	{0x371f, 0x0c},
	{0x3721, 0x00},
	{0x3724, 0x10},
	{0x3726, 0x00},
	{0x372a, 0x01},
	{0x3730, 0x10},
	{0x3738, 0x22},
	{0x3739, 0xe5},
	{0x373a, 0x50},
	{0x373b, 0x02},
	{0x373c, 0x41},
	{0x373f, 0x02},
	{0x3740, 0x42},
	{0x3741, 0x02},
	{0x3742, 0x18},
	{0x3743, 0x01},
	{0x3744, 0x02},
	{0x3747, 0x10},
	{0x374c, 0x04},
	{0x3751, 0xf0},
	{0x3752, 0x00},
	{0x3753, 0x00},
	{0x3754, 0xc0},
	{0x3755, 0x00},
	{0x3756, 0x1a},
	{0x3758, 0x00},
	{0x3759, 0x0f},
	{0x376b, 0x44},
	{0x375c, 0x04},
	{0x3774, 0x10},
	{0x3776, 0x00},
	{0x377f, 0x08},
	{0x3780, 0x22},
	{0x3781, 0x0c},
	{0x3784, 0x2c},
	{0x3785, 0x1e},
	{0x378f, 0xf5},
	{0x3791, 0xb0},
	{0x3795, 0x00},
	{0x3796, 0x64},
	{0x3797, 0x11},
	{0x3798, 0x30},
	{0x3799, 0x41},
	{0x379a, 0x07},
	{0x379b, 0xb0},
	{0x379c, 0x0c},
	{0x37c5, 0x00},
	{0x37c6, 0x00},
	{0x37c7, 0x00},
	{0x37c9, 0x00},
	{0x37ca, 0x00},
	{0x37cb, 0x00},
	{0x37de, 0x00},
	{0x37df, 0x00},
	{0x3800, 0x00},
	{0x3801, 0x00},
	{0x3802, 0x00},
	{0x3803, 0x00},
	{0x3804, 0x0a},
	{0x3805, 0x3f},
	{0x3806, 0x07},
	{0x3807, 0xa3},
	{0x3808, 0x0a},
	{0x3809, 0x20},
	{0x380a, 0x07},
	{0x380b, 0x98},
	{0x380c, 0x0a},
	{0x380d, 0x80},
	{0x380e, 0x07},
	{0x380f, 0xc0},
	{0x3810, 0x00},
	{0x3811, 0x02},
	{0x3812, 0x00},
	{0x3813, 0x02},
	{0x3814, 0x11},
	{0x3815, 0x11},
	{0x3820, 0x00},
	{0x3821, 0x1e},
	{0x3823, 0x00},
	{0x3824, 0x00},
	{0x3825, 0x00},
	{0x3826, 0x00},
	{0x3827, 0x00},
	{0x382a, 0x04},
	{0x3a04, 0x06},
	{0x3a05, 0x14},
	{0x3a06, 0x00},
	{0x3a07, 0xfe},
	{0x3b00, 0x00},
	{0x3b02, 0x00},
	{0x3b03, 0x00},
	{0x3b04, 0x00},
	{0x3b05, 0x00},
	{0x3e07, 0x20},
	{0x4000, 0x08},
	{0x4001, 0x04},
	{0x4002, 0x45},
	{0x4004, 0x08},
	{0x4005, 0x18},
	{0x4006, 0x20},
	{0x4008, 0x24},
	{0x4009, 0x10},
	{0x400c, 0x00},
	{0x400d, 0x00},
	{0x4058, 0x00},
	{0x404e, 0x37},
	{0x404f, 0x8f},
	{0x4058, 0x00},
	{0x4101, 0xb2},
	{0x4303, 0x00},
	{0x4304, 0x08},
	{0x4307, 0x30},
	{0x4311, 0x04},
	{0x4315, 0x01},
	{0x4511, 0x05},
	{0x4512, 0x01},
	{0x4806, 0x00},
	{0x4816, 0x52},
	{0x481f, 0x30},
	{0x4826, 0x2c},
	{0x4831, 0x64},
	{0x4d00, 0x04},
	{0x4d01, 0x71},
	{0x4d02, 0xfd},
	{0x4d03, 0xf5},
	{0x4d04, 0x0c},
	{0x4d05, 0xcc},
	{0x4837, 0x0a},
	{0x5000, 0x06},
	{0x5001, 0x01},
	{0x5002, 0x00},
	{0x5003, 0x20},
	{0x5046, 0x0a},
	{0x5013, 0x00},
	{0x5046, 0x0a},
	{0x5780, 0xfc},
	{0x5781, 0x13},
	{0x5782, 0x03},
	{0x5786, 0x20},
	{0x5787, 0x40},
	{0x5788, 0x08},
	{0x5789, 0x08},
	{0x578a, 0x02},
	{0x578b, 0x01},
	{0x578c, 0x01},
	{0x578d, 0x0c},
	{0x578e, 0x02},
	{0x578f, 0x01},
	{0x5790, 0x01},
	{0x5791, 0xff},
	{0x5842, 0x01},
	{0x5843, 0x2b},
	{0x5844, 0x01},
	{0x5845, 0x92},
	{0x5846, 0x01},
	{0x5847, 0x8f},
	{0x5848, 0x01},
	{0x5849, 0x0c},
	{0x5e00, 0x00},
	{0x5e10, 0x0c},
	{0x0100, 0x01},
	{0x3810, 0x00},
	{0x3811, 0x10},
	{0x3812, 0x00},
	{0x3813, 0x06},
	{OV5647_TABLE_END, 0x0000}
};

static const ov5647_reg mode_640x480[] = {
	{OV5647_TABLE_WAIT_MS, OV5647_WAIT_MS},
	{0x0103, 0x01},
	{0x3001, 0x0a},
	{0x3002, 0x80},
	{0x3006, 0x00},
	{0x3011, 0x21},
	{0x3012, 0x09},
	{0x3013, 0x10},
	{0x3014, 0x00},
	{0x3015, 0x08},
	{0x3016, 0xf0},
	{0x3017, 0xf0},
	{0x3018, 0xf0},
	{0x301b, 0xb4},
	{0x301d, 0x02},
	{0x3021, 0x00},
	{0x3022, 0x01},
	{0x3028, 0x44},
	{0x3098, 0x03},
	{0x3099, 0x1e},
	{0x309a, 0x0b},
	{0x309b, 0x01},
	{0x309c, 0x00},
	{0x30a0, 0xd2},
	{0x30a2, 0x01},
	{0x30b2, 0x00},
	{0x30b3, 0x64},
	{0x30b4, 0x03},
	{0x30b5, 0x04},
	{0x30b6, 0x04},
	{0x3104, 0x21},
	{0x3106, 0x00},
	{0x3400, 0x04},
	{0x3401, 0x00},
	{0x3402, 0x04},
	{0x3403, 0x00},
	{0x3404, 0x04},
	{0x3405, 0x00},
	{0x3406, 0x01},
	{0x3500, 0x00},
	{0x3501, 0x1f},
	{0x3502, 0x10},
	{0x3503, 0x07},
	{0x3504, 0x00},
	{0x3505, 0x00},
	{0x3506, 0x00},
	{0x3507, 0x02},
	{0x3508, 0x00},
	{0x3509, 0x10},
	{0x350a, 0x00},
	{0x350b, 0xF8},
	{0x3600, 0xbc},
	{0x3601, 0x0a},
	{0x3602, 0x38},
	{0x3612, 0x80},
	{0x3620, 0x44},
	{0x3621, 0xb5},
	{0x3622, 0x0c},
	{0x3625, 0x10},
	{0x3630, 0x55},
	{0x3631, 0xf4},
	{0x3632, 0x00},
	{0x3633, 0x34},
	{0x3634, 0x02},
	{0x364d, 0x0d},
	{0x364f, 0xdd},
	{0x3660, 0x04},
	{0x3662, 0x10},
	{0x3663, 0xf1},
	{0x3665, 0x00},
	{0x3666, 0x20},
	{0x3667, 0x00},
	{0x366a, 0x80},
	{0x3680, 0xe0},
	{0x3681, 0x00},
	{0x3700, 0x42},
	{0x3701, 0x14},
	{0x3702, 0xa0},
	{0x3703, 0xd8},
	{0x3704, 0x78},
	{0x3705, 0x02},
	{0x3708, 0xeb},
	{0x3709, 0xc3},
	{0x370a, 0x00},
	{0x370b, 0x20},
	{0x370c, 0x0c},
	{0x370d, 0x11},
	{0x370e, 0x00},
	{0x370f, 0x40},
	{0x3710, 0x00},
	{0x371a, 0x1c},
	{0x371b, 0x05},
	{0x371c, 0x01},
	{0x371e, 0xa1},
	{0x371f, 0x0c},
	{0x3721, 0x00},
	{0x3724, 0x10},
	{0x3726, 0x00},
	{0x372a, 0x01},
	{0x3730, 0x10},
	{0x3738, 0x22},
	{0x3739, 0xe5},
	{0x373a, 0x50},
	{0x373b, 0x02},
	{0x373c, 0x41},
	{0x373f, 0x02},
	{0x3740, 0x42},
	{0x3741, 0x02},
	{0x3742, 0x18},
	{0x3743, 0x01},
	{0x3744, 0x02},
	{0x3747, 0x10},
	{0x374c, 0x04},
	{0x3751, 0xf0},
	{0x3752, 0x00},
	{0x3753, 0x00},
	{0x3754, 0xc0},
	{0x3755, 0x00},
	{0x3756, 0x1a},
	{0x3758, 0x00},
	{0x3759, 0x0f},
	{0x376b, 0x44},
	{0x375c, 0x04},
	{0x3774, 0x10},
	{0x3776, 0x00},
	{0x377f, 0x08},
	{0x3780, 0x22},
	{0x3781, 0x0c},
	{0x3784, 0x2c},
	{0x3785, 0x1e},
	{0x378f, 0xf5},
	{0x3791, 0xb0},
	{0x3795, 0x00},
	{0x3796, 0x64},
	{0x3797, 0x11},
	{0x3798, 0x30},
	{0x3799, 0x41},
	{0x379a, 0x07},
	{0x379b, 0xb0},
	{0x379c, 0x0c},
	{0x37c5, 0x00},
	{0x37c6, 0x00},
	{0x37c7, 0x00},
	{0x37c9, 0x00},
	{0x37ca, 0x00},
	{0x37cb, 0x00},
	{0x37de, 0x00},
	{0x37df, 0x00},
	{0x3800, 0x00},
	{0x3801, 0x00},
	{0x3802, 0x00},
	{0x3803, 0x04},
	{0x3804, 0x0a},
	{0x3805, 0x3f},
	{0x3806, 0x07},
	{0x3807, 0x9b},
	{0x3808, 0x02},
	{0x3809, 0x80},
	{0x380a, 0x01},
	{0x380b, 0xe0},
	{0x380c, 0x0a},
	{0x380d, 0x20},
	{0x380e, 0x02},
	{0x380f, 0x02},
	{0x3810, 0x00},
	{0x3811, 0x0e},
	{0x3812, 0x00},
	{0x3813, 0x02},
	{0x3814, 0x71},
	{0x3815, 0x71},
	{0x3820, 0x01},
	{0x3821, 0x1f},
	{0x3823, 0x00},
	{0x3824, 0x00},
	{0x3825, 0x00},
	{0x3826, 0x00},
	{0x3827, 0x00},
	{0x382a, 0x04},
	{0x3a04, 0x06},
	{0x3a05, 0x14},
	{0x3a06, 0x00},
	{0x3a07, 0xfe},
	{0x3b00, 0x00},
	{0x3b02, 0x00},
	{0x3b03, 0x00},
	{0x3b04, 0x00},
	{0x3b05, 0x00},
	{0x3e07, 0x20},
	{0x4000, 0x08},
	{0x4001, 0x04},
	{0x4002, 0x45},
	{0x4004, 0x08},
	{0x4005, 0x18},
	{0x4006, 0x20},
	{0x4008, 0x24},
	{0x4009, 0x10},
	{0x400c, 0x00},
	{0x400d, 0x00},
	{0x4058, 0x00},
	{0x404e, 0x37},
	{0x404f, 0x8f},
	{0x4058, 0x00},
	{0x4101, 0xb2},
	{0x4303, 0x00},
	{0x4304, 0x08},
	{0x4307, 0x30},
	{0x4311, 0x04},
	{0x4315, 0x01},
	{0x4511, 0x05},
	{0x4512, 0x01},
	{0x4806, 0x00},
	{0x4816, 0x52},
	{0x481f, 0x30},
	{0x4826, 0x2c},
	{0x4831, 0x64},
	{0x4d00, 0x04},
	{0x4d01, 0x71},
	{0x4d02, 0xfd},
	{0x4d03, 0xf5},
	{0x4d04, 0x0c},
	{0x4d05, 0xcc},
	{0x4837, 0x28},
	{0x5000, 0x06},
	{0x5001, 0x01},
	{0x5002, 0x00},
	{0x5003, 0x20},
	{0x5046, 0x0a},
	{0x5013, 0x00},
	{0x5046, 0x0a},
	{0x5780, 0xfc},
	{0x5781, 0x13},
	{0x5782, 0x03},
	{0x5786, 0x20},
	{0x5787, 0x40},
	{0x5788, 0x08},
	{0x5789, 0x08},
	{0x578a, 0x02},
	{0x578b, 0x01},
	{0x578c, 0x01},
	{0x578d, 0x0c},
	{0x578e, 0x02},
	{0x578f, 0x01},
	{0x5790, 0x01},
	{0x5791, 0xff},
	{0x5842, 0x01},
	{0x5843, 0x2b},
	{0x5844, 0x01},
	{0x5845, 0x92},
	{0x5846, 0x01},
	{0x5847, 0x8f},
	{0x5848, 0x01},
	{0x5849, 0x0c},
	{0x5e00, 0x00},
	{0x5e10, 0x0c},
	{OV5647_TABLE_END, 0x0000},
};

enum {
	OV5647_MODE_2592X1944,
	OV5647_MODE_1280X720_60FPS,
	OV5647_MODE_640X480,
	OV5647_MODE_1920X1080,
	OV5647_MODE_1920X1080_HDR,
	OV5647_MODE_2592x1944_15FPS,

	OV5647_MODE_START_STREAM,
	OV5647_MODE_STOP_STREAM,
	OV5647_MODE_TEST_PATTERN
};

static const ov5647_reg *mode_table[] = {
	[OV5647_MODE_2592X1944]			= mode_2592x1944,
	[OV5647_MODE_1280X720_60FPS]		= mode_1280x720_60fps,
    [OV5647_MODE_640X480]			= mode_640x480,
	[OV5647_MODE_1920X1080]			= mode_1920x1080,
	[OV5647_MODE_1920X1080_HDR]		= mode_1920x1080_HDR_30fps,
	[OV5647_MODE_2592x1944_15FPS]		= mode_2592x1944_one_lane_15fps,

	[OV5647_MODE_START_STREAM]		= ov5647_start,
	[OV5647_MODE_STOP_STREAM]		= ov5647_stop,
	[OV5647_MODE_TEST_PATTERN]		= tp_colorbars,
};

static const int ov5647_15fps[] = {
	15,
};

static const int ov5647_24fps[] = {
	24,
};

static const int ov5647_30fps[] = {
	30,
};

static const int ov5647_60fps[] = {
	60,
};

static const struct camera_common_frmfmt ov5647_frmfmt[] = {
	{{2592, 1944},	ov5647_30fps,	1, 0,	OV5647_MODE_2592X1944},
	{{1280, 720},	ov5647_60fps,	1, 0,	OV5647_MODE_1280X720_60FPS},
#if ENABLE_EXTRA_MODES
	{{640, 480},	ov5647_30fps,   1, 0,	OV5647_MODE_640X480},
	{{1920, 1080},	ov5647_30fps,	1, 0,	OV5647_MODE_1920X1080},
	{{1920, 1080},	ov5647_30fps,	1, 1,	OV5647_MODE_1920X1080_HDR},
	{{2592, 1944},	ov5647_15fps,	1, 1,	OV5647_MODE_2592x1944_15FPS},
#endif
};
#endif  /* __OV5647_TABLES__ */

