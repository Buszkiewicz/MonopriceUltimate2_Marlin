/**
* Copyright (C) 2019 WEEDO3D
* Author: perron@163.com
*/

#include <avr/pgmspace.h>

#ifdef BRAND_MP
#define CUSTOM_BOOTSCREEN_TIMEOUT   2000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  112
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 38

	const unsigned char custom_start_bmp[532] PROGMEM =
	{
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0xFF,0xFC,0x07,0xFF,0xE0,0x3F,0xFF,0x80,0xFF,0xE0,0x00,0x00,
		0x00,0x00,0xFF,0xFC,0x07,0xFF,0xE0,0x3F,0xFF,0x80,0xFF,0xF8,0x00,0x00,
		0x00,0x00,0xFF,0xFC,0x07,0xFF,0xE0,0x3F,0xFF,0x80,0xFF,0xFC,0x00,0x00,
		0x00,0x00,0xFF,0xFC,0x07,0xFF,0xE0,0x3F,0xFF,0x80,0xFF,0xFC,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x7C,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x3C,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x3C,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x3C,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x7C,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xFF,0xFC,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xFF,0xF8,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xFF,0xE0,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xFF,0x80,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x00,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x00,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x00,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x00,0x00,0x00,
		0x00,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0xF0,0x00,0x00,0x00,
		0x00,0x00,0xFF,0xFC,0x07,0xFF,0xE0,0x3F,0xFF,0x80,0xF0,0x00,0x00,0x00,
		0x00,0x00,0xFF,0xFC,0x07,0xFF,0xE0,0x3F,0xFF,0x80,0xF0,0x00,0x00,0x00,
		0x00,0x00,0xFF,0xFC,0x07,0xFF,0xE0,0x3F,0xFF,0x80,0xF0,0x00,0x00,0x00,
		0x00,0x00,0xFF,0xFC,0x07,0xFF,0xE0,0x3F,0xFF,0x80,0xF0,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};
#endif



