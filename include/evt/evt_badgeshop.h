#pragma once

#include <dolphin/types.h>
#include <string.h>

typedef struct badgeshopw {
	u8 special_table[0x19]; //0x00
	u8 bargain_table[0x19]; //0x19
	u8 starmaniac_table[0x19]; //0x32
	u8 bottakuru_table[0x55]; //0x4B
	u8 bteresa_table[0x55]; //0xA0
	u32 field_0xF8; //0xF8
	u32 field_0xFC; //0xFC
	u32 field_0x100; //0x100
	u32 field_0x104; //0x104
	u32 field_0x108; //0x108
	u32 field_0x10C; //0x10C
	u32 field_0x110; //0x110
	u16 field_0x114; //0x114
	u16 field_0x116; //0x116
	u32 field_0x118; //0x118
	u32 field_0x11C; //0x11C
	u32 field_0x120; //0x120
} badgeshopw;

badgeshopw* bdsw;
badgeshopw badgeshopwork;

u32 badge_special_table[] = {
	0xFA, 0xF0, 0x144, 0x145, 0x129, 0x110, 0x111, 0x126, 0x102, 0
};

u32 badge_special_table_stage_1_clear[] = {
	0x12B, 0x12C, 0xF5, 0
};

u32 badge_special_table_stage_2_clear[] = {
	0x141, 0x12E, 0x10C, 0
};

u32 badge_special_table_stage_3_clear[] = {
	0xF4, 0xFD, 0x10D, 0
};

u32 badge_special_table_stage_4_clear[] = {
	0xF6, 0xFB, 0x114, 0
};

u32 badge_special_table_stage_5_clear[] = {
	0x103, 0x115, 0xFC, 0
};

u32 badge_special_table_stage_6_clear[] = {
	0x144, 0x145, 0x13F, 0
};

u32 badge_bottakuru100_table[] = {
	0x94, 0x95, 0x9A, 0x9B, 0x84, 0x81, 0
};

u32 badge_bteresa_table[] = {
	0x95, 0xAC, 0x102, 0x131, 0
};

u32 badge_bteresa_table_card_special[] = {
	0x9B, 0xF0, 0x116, 0x118, 0
};

u32 badge_bteresa_table_card_silver[] = {
	0x7F, 0xF7, 0x117, 0
};

u32 badge_bteresa_table_card_gold[] = {
	0xF9, 0x10C, 0xF3, 0xF1, 0x10D, 0
};

u32 badge_bteresa_table_card_platinum[] = {
	0xF8, 0x139, 0x96, 0x9C, 0
};

u32 badge_starmaniac_table[] = {
	0x13E, 0x140, 0x12D, 0x124, 0x126, 0x125, 0x13A, 0x137, 0x138, 0x135, 0x134, 0x119, 0x11A, 0x104, 0x105, 0
};

u32 badge_bottakuru_table[] = {
	0x82, 0x85, 0x86, 0x88, 0x8C, 0x96, 0x9C, 0x98, 0x120, 0x121, 0x122, 0x13D, 0x143, 0x10A, 0x136, 0x148, 0
};