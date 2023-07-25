#include "home_ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

unsigned char pause_fill_png[] =
{
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xe0, 0x77, 0x3d, 0xf8, 0x00, 0x00, 0x00,
    0x01, 0x73, 0x52, 0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00,
    0x00, 0x04, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0x08, 0x7c, 0x08,
    0x64, 0x88, 0x00, 0x00, 0x00, 0x2c, 0x49, 0x44, 0x41, 0x54, 0x48, 0x89,
    0x63, 0x60, 0x18, 0x05, 0x23, 0x17, 0xf8, 0xf8, 0xf8, 0xfc, 0xf7, 0xf1,
    0xf1, 0xf9, 0x4f, 0xa9, 0x3a, 0x26, 0xea, 0x3a, 0x6b, 0xd4, 0x82, 0x51,
    0x0b, 0x46, 0x2d, 0x18, 0xb5, 0x60, 0x70, 0x5a, 0x30, 0x0a, 0x46, 0x00,
    0x00, 0x00, 0x65, 0x17, 0x07, 0xa7, 0x5f, 0x12, 0xde, 0x59, 0x00, 0x00,
    0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};


const lv_img_dsc_t ui_img_pause =
{
    .header.always_zero = 0,
    .header.w = 24,
    .header.h = 24,
    .data_size = sizeof(pause_fill_png),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = pause_fill_png
};
