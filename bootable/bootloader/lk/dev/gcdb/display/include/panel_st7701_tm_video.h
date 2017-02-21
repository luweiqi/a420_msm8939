/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_ST7701_TM_VIDEO_H_

#define _PANEL_ST7701_TM_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config st7701_tm_video_panel_data = {
  //"qcom,mdss_dsi_st7701_tm_video", "dsi:0:", "qcom,mdss-dsi-panel",
  "qcom,mdss_dsi_st7701_tm_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution st7701_tm_video_panel_res = {
  480, 800, 40, 40, 10, 0, 16, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info st7701_tm_video_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/

/********************************************************************************
*       ic=nt35512; glass=tm; module=tm; size=3.97; wvga; 480x800         *
*********************************************************************************/
static char st7701_tm_cmd1[] = {0x03,0x00,0x29,0xC0,0x02,0x11,0x00,0xff};
static char st7701_tm_cmd2[] = {0x06,0x00,0x29,0xC0,0xFF,0x77,0x01,0x00,0x00,0x10,0xff,0xff};
static char st7701_tm_cmd3[] = {0x03,0x00,0x29,0xC0,0xC0,0x63,0x00,0xff};
static char st7701_tm_cmd4[] = {0x03,0x00,0x29,0xC0,0xC1,0x16,0x02,0xff};
static char st7701_tm_cmd5[] = {0x03,0x00,0x29,0xC0,0xC2,0x37,0x08,0xff};
static char st7701_tm_cmd6[] = {0x11,0x00,0x29,0xC0,0xB0,0x00,0x16,0x1E,0x0E,0x11,0x06,0x10,0x09,0x09,0x2B,0x06,0x13,0x10,0x2A,0x31,0x1F,0xff,0xff,0xff};
static char st7701_tm_cmd7[] = {0x11,0x00,0x29,0xC0,0xB1,0x00,0x16,0x1E,0x0D,0x11,0x06,0x10,0x07,0x08,0x2C,0x07,0x15,0x14,0x2B,0x30,0x1F,0xff,0xff,0xff};
static char st7701_tm_cmd8[] = {0x06,0x00,0x29,0xC0,0xFF,0x77,0x01,0x00,0x00,0x11,0xff,0xff};
static char st7701_tm_cmd9[] = {0x02,0x00,0x29,0xC0,0xB0,0x3D,0xff,0xff};
static char st7701_tm_cmd10[] = {0x02,0x00,0x29,0xC0,0xB1,0x70,0xff,0xff};
static char st7701_tm_cmd11[] = {0x02,0x00,0x29,0xC0,0xB2,0x07,0xff,0xff};
static char st7701_tm_cmd12[] = {0x02,0x00,0x29,0xC0,0xB3,0x80,0xff,0xff};
static char st7701_tm_cmd13[] = {0x02,0x00,0x29,0xC0,0xB5,0x47,0xff,0xff};
static char st7701_tm_cmd14[] = {0x02,0x00,0x29,0xC0,0xB7,0x85,0xff,0xff};
static char st7701_tm_cmd15[] = {0x02,0x00,0x29,0xC0,0xB8,0x20,0xff,0xff};
static char st7701_tm_cmd16[] = {0x02,0x00,0x29,0xC0,0xC1,0x78,0xff,0xff};
static char st7701_tm_cmd17[] = {0x02,0x00,0x29,0xC0,0xC2,0x7F,0xff,0xff};
static char st7701_tm_cmd18[] = {0x02,0x00,0x29,0xC0,0xD0,0x88,0xff,0xff};
static char st7701_tm_cmd19[] = {0x04,0x00,0x29,0xC0,0xE0,0x00,0x00,0x02};
static char st7701_tm_cmd20[] = {0x0c,0x00,0x29,0xC0,0xE1,0x08,0x00,0x0A,0x00,0x09,0x00,0x0B,0x00,0x00,0x44,0x44};
static char st7701_tm_cmd21[] = {0x0e,0x00,0x29,0xC0,0xE2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff};
static char st7701_tm_cmd22[] = {0x05,0x00,0x29,0xC0,0xE3,0x00,0x00,0x33,0x33,0xff,0xff,0xff};
static char st7701_tm_cmd23[] = {0x03,0x00,0x29,0xC0,0xE4,0x22,0x22,0xff};
static char st7701_tm_cmd24[] = {0x11,0x00,0x29,0xC0,0xE5,0x11,0x40,0xA0,0xA0,0x0D,0x40,0xA0,0xA0,0x13,0x40,0xA0,0xA0,0x0F,0x40,0xA0,0xA0,0xff,0xff,0xff};
static char st7701_tm_cmd25[] = {0x05,0x00,0x29,0xC0,0xE6,0x00,0x00,0x33,0x33,0xff,0xff,0xff};
static char st7701_tm_cmd26[] = {0x03,0x00,0x29,0xC0,0xE7,0x22,0x22,0xff};
static char st7701_tm_cmd27[] = {0x11,0x00,0x29,0xC0,0xE8,0x10,0x40,0xA0,0xA0,0x0C,0x40,0xA0,0xA0,0x12,0x40,0xA0,0xA0,0x0E,0x40,0xA0,0xA0,0xff,0xff,0xff};
static char st7701_tm_cmd28[] = {0x08,0x00,0x29,0xC0,0xEB,0x02,0x00,0xE4,0xE4,0x11,0x00,0x00};
static char st7701_tm_cmd29[] = {0x11,0x00,0x29,0xC0,0xED,0xAB,0xFF,0x75,0x64,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x10,0x46,0x57,0xFF,0xBA,0xff,0xff,0xff};
static char st7701_tm_cmd30[] = {0x06,0x00,0x29,0xC0,0xFF,0x77,0x01,0x00,0x00,0x00,0xff,0xff};

static char st7701_tm_video_on_exit_sleep[] = {
	0x11,0x00,0x05,0x80};

static char st7701_tm_video_on_display_on[] = {
	0x29,0x00,0x05,0x80};


static struct mipi_dsi_cmd st7701_tm_video_on_command[] = {
	{ARRAY_SIZE(st7701_tm_cmd1), st7701_tm_cmd1, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd2), st7701_tm_cmd2, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd3), st7701_tm_cmd3, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd4), st7701_tm_cmd4, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd5), st7701_tm_cmd5, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd6), st7701_tm_cmd6, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd7), st7701_tm_cmd7, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd8), st7701_tm_cmd8, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd9), st7701_tm_cmd9, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd10), st7701_tm_cmd10, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd11), st7701_tm_cmd11, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd12), st7701_tm_cmd12, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd13), st7701_tm_cmd13, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd14), st7701_tm_cmd14, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd15), st7701_tm_cmd15, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd16), st7701_tm_cmd16, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd17), st7701_tm_cmd17, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd18), st7701_tm_cmd18, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd19), st7701_tm_cmd19, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd20), st7701_tm_cmd20, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd21), st7701_tm_cmd21, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd22), st7701_tm_cmd22, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd23), st7701_tm_cmd23, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd24), st7701_tm_cmd24, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd25), st7701_tm_cmd25, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd26), st7701_tm_cmd26, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd27), st7701_tm_cmd27, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd28), st7701_tm_cmd28, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd29), st7701_tm_cmd29, 0x00},
	{ARRAY_SIZE(st7701_tm_cmd30), st7701_tm_cmd30, 0x00},

	{ARRAY_SIZE(st7701_tm_video_on_exit_sleep), st7701_tm_video_on_exit_sleep, 0x78},
	{ARRAY_SIZE(st7701_tm_video_on_display_on), st7701_tm_video_on_display_on, 0x32},


};

static char st7701_tm_videooff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char st7701_tm_videooff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd st7701_tm_video_off_command[] = {
{ 0x4 , st7701_tm_videooff_cmd0},
{ 0x4 , st7701_tm_videooff_cmd1}
};
#define st7701_tm_VIDEO_OFF_COMMAND 2


static struct command_state st7701_tm_video_state = {
	0, 0
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info st7701_tm_video_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info st7701_tm_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration st7701_tm_video_lane_config = {
  2, 0, 1, 1, 0, 0
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t st7701_tm_video_timings[] = {
	//0x6B, 0x14, 0x0C, 0x00, 0x36, 0x3A, 0x12, 0x18, 0x11, 0x03, 0x04, 0x00
	//0x8B, 0x1f, 0x14, 0x00, 0x45, 0x4A, 0x19, 0x23, 0x23, 0x03, 0x04, 0x00
	0x2B, 0x14, 0x0c, 0x00, 0x36, 0x38, 0x12, 0x18, 0x11, 0x03, 0x04, 0x00
};

static struct panel_timing st7701_tm_video_timing_info = {
	0, 4, 0x04, 0x1d
};

/*---------------------------------------------------------------------------*/
/* Panel Reset Sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence st7701_tm_video_reset_seq = {
  { 1, 0, 1, }, { 10, 20, 120, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight st7701_tm_video_backlight = {
  0, 1, 255, 0, 1, 0
};


#endif /*_PANEL_ST7701_tm_VIDEO_H_*/

