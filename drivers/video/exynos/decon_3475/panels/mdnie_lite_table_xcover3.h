#ifndef __MDNIE_TABLE_H__
#define __MDNIE_TABLE_H__

/* 2015.11.05 */

static struct mdnie_scr_info scr_info = {
	.index = 2,
	.cr = 28, //scr Bb
	.wr = 27, //scr Wr
	.wg = 25, //scr Wg
	.wb = 23 //scr Wb
};

static inline int get_hbm_index(int idx)
{
	int i = 0;
	int idx_list[] = {
		20000	/* idx < 20000: HBM_OFF */
				/* idx >= 20000: HBM_ON */
	};

	while (i < ARRAY_SIZE(idx_list)) {
		if (idx < idx_list[i])
			break;
		i++;
	}

	return i;
}

static unsigned char LEVEL_UNLOCK[] = { /* turn off mdnie */
	0xB9,
	0xF1, 0x08, 0x00
};

static unsigned char LEVEL_LOCK[] = { /* turn off mdnie */
	0xB9,
	0x00, 0x00, 0x00
};

static unsigned char BYPASS_1[] = {
	0x20,
	0x00,
};

static unsigned char BYPASS_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x22, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x00, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3
	0x00,
	0x00, //cc b2
	0x00,
	0x00, //cc b1
	0x00,
	0x00, //cc g3
	0x00,
	0x04, //cc g2
	0x00,
	0x00, //cc g1
	0x00,
	0x00, //cc r3
	0x00,
	0x00, //cc r2
	0x00,
	0x04, //cc r1
	0x00,
};

static unsigned char NEGATIVE_1[] = {
	0x20,
	0x00,
};

static unsigned char NEGATIVE_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x32, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0xff, //scr Kb
	0x00, //scr Wb
	0xff, //scr Kg
	0x00, //scr Wg
	0xff, //scr Kr
	0x00, //scr Wr
	0x00, //scr Bb
	0xff, //scr Yb
	0xff, //scr Bg
	0x00, //scr Yg
	0xff, //scr Br
	0x00, //scr Yr
	0xff, //scr Gb
	0x00, //scr Mb
	0x00, //scr Gg
	0xff, //scr Mg
	0xff, //scr Gr
	0x00, //scr Mr
	0xff, //scr Rb
	0x00, //scr Cb
	0xff, //scr Rg
	0x00, //scr Cg
	0x00, //scr Rr
	0xff, //scr Cr
	0x00, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3
	0x00,
	0x00, //cc b2
	0x00,
	0x00, //cc b1
	0x00,
	0x00, //cc g3
	0x00,
	0x04, //cc g2
	0x00,
	0x00, //cc g1
	0x00,
	0x00, //cc r3
	0x00,
	0x00, //cc r2
	0x00,
	0x04, //cc r1
	0x00,
};

static unsigned char COLOR_BLIND_1[] = {
	0x20,
	0x00,
};

static unsigned char COLOR_BLIND_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x32, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x00, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3
	0x00,
	0x00, //cc b2
	0x00,
	0x00, //cc b1
	0x00,
	0x00, //cc g3
	0x00,
	0x04, //cc g2
	0x00,
	0x00, //cc g1
	0x00,
	0x00, //cc r3
	0x00,
	0x00, //cc r2
	0x00,
	0x04, //cc r1
	0x00,
};

static unsigned char GRAYSCALE_1[] = {
	0x20,
	0x00,
};

static unsigned char GRAYSCALE_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x32, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0x1d, //scr Bb
	0xe2, //scr Yb
	0x1d, //scr Bg
	0xe2, //scr Yg
	0x1d, //scr Br
	0xe2, //scr Yr
	0x96, //scr Gb
	0x69, //scr Mb
	0x96, //scr Gg
	0x69, //scr Mg
	0x96, //scr Gr
	0x69, //scr Mr
	0x4c, //scr Rb
	0xb3, //scr Cb
	0x4c, //scr Rg
	0xb3, //scr Cg
	0x4c, //scr Rr
	0xb3, //scr Cr
	0x00, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3
	0x00,
	0x00, //cc b2
	0x00,
	0x00, //cc b1
	0x00,
	0x00, //cc g3
	0x00,
	0x04, //cc g2
	0x00,
	0x00, //cc g1
	0x00,
	0x00, //cc r3
	0x00,
	0x00, //cc r2
	0x00,
	0x04, //cc r1
	0x00,
};

static unsigned char GRAYSCALE_NEGATIVE_1[] = {
	0x20,
	0x00,
};

static unsigned char GRAYSCALE_NEGATIVE_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x32, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0xff, //scr Kb
	0x00, //scr Wb
	0xff, //scr Kg
	0x00, //scr Wg
	0xff, //scr Kr
	0x00, //scr Wr
	0xe2, //scr Bb
	0x1d, //scr Yb
	0xe2, //scr Bg
	0x1d, //scr Yg
	0xe2, //scr Br
	0x1d, //scr Yr
	0x69, //scr Gb
	0x96, //scr Mb
	0x69, //scr Gg
	0x96, //scr Mg
	0x69, //scr Gr
	0x96, //scr Mr
	0xb3, //scr Rb
	0x4c, //scr Cb
	0xb3, //scr Rg
	0x4c, //scr Cg
	0xb3, //scr Rr
	0x4c, //scr Cr
	0x00, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3
	0x00,
	0x00, //cc b2
	0x00,
	0x00, //cc b1
	0x00,
	0x00, //cc g3
	0x00,
	0x04, //cc g2
	0x00,
	0x00, //cc g1
	0x00,
	0x00, //cc r3
	0x00,
	0x00, //cc r2
	0x00,
	0x04, //cc r1
	0x00,
};

/*
static char DSI0_NEGATIVE_MDNIE_OFF_CMDS[] = {
	0x20,
	0x00,
};
*/
static unsigned char UI_1[] = {
	0x20,
	0x00,
};

static unsigned char UI_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x23, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x02, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04, //cc r1
	0x8f,
};

static unsigned char VIDEO_1[] = {
	0x20,
	0x00,
};

static unsigned char VIDEO_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x23, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x03, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x08, //curve23 a
	0xbf, //curve23 b
	0x20, //curve22 a
	0x0f, //curve22 b
	0xa6, //curve21 a
	0x16, //curve21 b
	0xa6, //curve20 a
	0x16, //curve20 b
	0xa6, //curve19 a
	0x16, //curve19 b
	0xa6, //curve18 a
	0x16, //curve18 b
	0xa6, //curve17 a
	0x16, //curve17 b
	0xa0, //curve16 a
	0x0a, //curve16 b
	0xa0, //curve15 a
	0x0a, //curve15 b
	0xa0, //curve14 a
	0x0a, //curve14 b
	0xa0, //curve13 a
	0x0a, //curve13 b
	0x9e, //curve12 a
	0x07, //curve12 b
	0x9e, //curve11 a
	0x07, //curve11 b
	0x9e, //curve10 a
	0x07, //curve10 b
	0x9e, //curve 9 a
	0x07, //curve 9 b
	0x9a, //curve 8 a
	0x03, //curve 8 b
	0x9a, //curve 7 a
	0x03, //curve 7 b
	0x9a, //curve 6 a
	0x03, //curve 6 b
	0x9a, //curve 5 a
	0x03, //curve 5 b
	0x14, //curve 4 a
	0x00, //curve 4 b
	0x14, //curve 3 a
	0x00, //curve 3 b
	0x14, //curve 2 a
	0x00, //curve 2 b
	0x14, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04, //cc r1
	0x8f,
};

/*
static char VIDEO_WARM_1[] = {
	//start
	0xE6,
	0x5A,//password 5A
	0x00,//mask 000
	0x00,//data_width
	0x33,//scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00,//roi_ctrl
	0x00,//roi1 y end
	0x00,
	0x00,//roi1 y start
	0x00,
	0x00,//roi1 x end
	0x00,
	0x00,//roi1 x start
	0x00,
	0x00,//roi0 y end
	0x00,
	0x00,//roi0 y start
	0x00,
	0x00,//roi0 x end
	0x00,
	0x00,//roi0 x start
	0x00,
	0x00,//scr Kb
	0xe0,//scr Wb
	0x00,//scr Kg
	0xf1,//scr Wg
	0x00,//scr Kr
	0xff,//scr Wr
	0xFF,//scr Bb
	0x00,//scr Yb
	0x00,//scr Bg
	0xFF,//scr Yg
	0x00,//scr Br
	0xFF,//scr Yr
	0x00,//scr Gb
	0xFF,//scr Mb
	0xFF,//scr Gg
	0x00,//scr Mg
	0x00,//scr Gr
	0xFF,//scr Mr
	0x00,//scr Rb
	0xFF,//scr Cb
	0x00,//scr Rg
	0xFF,//scr Cg
	0xFF,//scr Rr
	0x00,//scr Cr
	0x06,//sharpen_set cc_en gamma_en 00 0 0
	0x20,//curve24 a
	0x00,//curve24 b
	0x20,//curve23 a
	0x00,//curve23 b
	0x20,//curve22 a
	0x00,//curve22 b
	0x20,//curve21 a
	0x00,//curve21 b
	0x20,//curve20 a
	0x00,//curve20 b
	0x20,//curve19 a
	0x00,//curve19 b
	0x20,//curve18 a
	0x00,//curve18 b
	0x20,//curve17 a
	0x00,//curve17 b
	0x20,//curve16 a
	0x00,//curve16 b
	0x20,//curve15 a
	0x00,//curve15 b
	0x20,//curve14 a
	0x00,//curve14 b
	0x20,//curve13 a
	0x00,//curve13 b
	0x20,//curve12 a
	0x00,//curve12 b
	0x20,//curve11 a
	0x00,//curve11 b
	0x20,//curve10 a
	0x00,//curve10 b
	0x20,//curve 9 a
	0x00,//curve 9 b
	0x20,//curve 8 a
	0x00,//curve 8 b
	0x20,//curve 7 a
	0x00,//curve 7 b
	0x20,//curve 6 a
	0x00,//curve 6 b
	0x20,//curve 5 a
	0x00,//curve 5 b
	0x20,//curve 4 a
	0x00,//curve 4 b
	0x20,//curve 3 a
	0x00,//curve 3 b
	0x20,//curve 2 a
	0x00,//curve 2 b
	0x20,//curve 1 a
	0x00,//curve 1 b
	0x05,//cc b3 0.3
	0x10,
	0x1f,//cc b2
	0x4c,
	0x1f,//cc b1
	0xa4,
	0x1f,//cc g3
	0xdd,
	0x04,//cc g2
	0x7f,
	0x1f,//cc g1
	0xa4,
	0x1f,//cc r3
	0xdd,
	0x1f,//cc r2
	0x4c,
	0x04,//cc r1
	0xd7,
};

static char VIDEO_COLD_1[] = {
	//start
	0xE6,
	0x5A,//password 5A
	0x00,//mask 000
	0x00,//data_width
	0x33,//scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00,//roi_ctrl
	0x00,//roi1 y end
	0x00,
	0x00,//roi1 y start
	0x00,
	0x00,//roi1 x end
	0x00,
	0x00,//roi1 x start
	0x00,
	0x00,//roi0 y end
	0x00,
	0x00,//roi0 y start
	0x00,
	0x00,//roi0 x end
	0x00,
	0x00,//roi0 x start
	0x00,
	0x00,//scr Kb
	0xff,//scr Wb
	0x00,//scr Kg
	0xe9,//scr Wg
	0x00,//scr Kr
	0xe2,//scr Wr
	0xFF,//scr Bb
	0x00,//scr Yb
	0x00,//scr Bg
	0xFF,//scr Yg
	0x00,//scr Br
	0xFF,//scr Yr
	0x00,//scr Gb
	0xFF,//scr Mb
	0xFF,//scr Gg
	0x00,//scr Mg
	0x00,//scr Gr
	0xFF,//scr Mr
	0x00,//scr Rb
	0xFF,//scr Cb
	0x00,//scr Rg
	0xFF,//scr Cg
	0xFF,//scr Rr
	0x00,//scr Cr
	0x06,//sharpen_set cc_en gamma_en 00 0 0
	0x20,//curve24 a
	0x00,//curve24 b
	0x20,//curve23 a
	0x00,//curve23 b
	0x20,//curve22 a
	0x00,//curve22 b
	0x20,//curve21 a
	0x00,//curve21 b
	0x20,//curve20 a
	0x00,//curve20 b
	0x20,//curve19 a
	0x00,//curve19 b
	0x20,//curve18 a
	0x00,//curve18 b
	0x20,//curve17 a
	0x00,//curve17 b
	0x20,//curve16 a
	0x00,//curve16 b
	0x20,//curve15 a
	0x00,//curve15 b
	0x20,//curve14 a
	0x00,//curve14 b
	0x20,//curve13 a
	0x00,//curve13 b
	0x20,//curve12 a
	0x00,//curve12 b
	0x20,//curve11 a
	0x00,//curve11 b
	0x20,//curve10 a
	0x00,//curve10 b
	0x20,//curve 9 a
	0x00,//curve 9 b
	0x20,//curve 8 a
	0x00,//curve 8 b
	0x20,//curve 7 a
	0x00,//curve 7 b
	0x20,//curve 6 a
	0x00,//curve 6 b
	0x20,//curve 5 a
	0x00,//curve 5 b
	0x20,//curve 4 a
	0x00,//curve 4 b
	0x20,//curve 3 a
	0x00,//curve 3 b
	0x20,//curve 2 a
	0x00,//curve 2 b
	0x20,//curve 1 a
	0x00,//curve 1 b
	0x05,//cc b3 0.3
	0x10,
	0x1f,//cc b2
	0x4c,
	0x1f,//cc b1
	0xa4,
	0x1f,//cc g3
	0xdd,
	0x04,//cc g2
	0x7f,
	0x1f,//cc g1
	0xa4,
	0x1f,//cc r3
	0xdd,
	0x1f,//cc r2
	0x4c,
	0x04,//cc r1
	0xd7,
};
*/

static unsigned char CAMERA_1[] = {
	0x20,
	0x00,
};

static unsigned char CAMERA_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x23, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x02, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04, //cc r1
	0x8f,
};

static unsigned char GALLERY_1[] = {
	0x20,
	0x00,
};

static unsigned char GALLERY_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x23, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x02, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04, //cc r1
	0x8f,
};

static unsigned char VT_1[] = {
	0x20,
	0x00,
};

static unsigned char VT_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x23, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x02, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04, //cc r1
	0x8f,
};

static unsigned char BROWSER_1[] = {
	0x20,
	0x00,
};

static unsigned char BROWSER_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x23, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x02, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04, //cc r1
	0x8f,
};

static unsigned char EBOOK_1[] = {
	0x20,
	0x00,
};

static unsigned char EBOOK_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xD6, //scr Wb
	0x00, //scr Kg
	0xF5, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x02, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04, //cc r1
	0x8f,
};

static unsigned char EMAIL_1[] = {
	0x20,
	0x00,
};

static unsigned char EMAIL_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xde, //scr Wb
	0x00, //scr Kg
	0xf1, //scr Wg
	0x00, //scr Kr
	0xff, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x02, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x20, //curve23 a
	0x00, //curve23 b
	0x20, //curve22 a
	0x00, //curve22 b
	0x20, //curve21 a
	0x00, //curve21 b
	0x20, //curve20 a
	0x00, //curve20 b
	0x20, //curve19 a
	0x00, //curve19 b
	0x20, //curve18 a
	0x00, //curve18 b
	0x20, //curve17 a
	0x00, //curve17 b
	0x20, //curve16 a
	0x00, //curve16 b
	0x20, //curve15 a
	0x00, //curve15 b
	0x20, //curve14 a
	0x00, //curve14 b
	0x20, //curve13 a
	0x00, //curve13 b
	0x20, //curve12 a
	0x00, //curve12 b
	0x20, //curve11 a
	0x00, //curve11 b
	0x20, //curve10 a
	0x00, //curve10 b
	0x20, //curve 9 a
	0x00, //curve 9 b
	0x20, //curve 8 a
	0x00, //curve 8 b
	0x20, //curve 7 a
	0x00, //curve 7 b
	0x20, //curve 6 a
	0x00, //curve 6 b
	0x20, //curve 5 a
	0x00, //curve 5 b
	0x20, //curve 4 a
	0x00, //curve 4 b
	0x20, //curve 3 a
	0x00, //curve 3 b
	0x20, //curve 2 a
	0x00, //curve 2 b
	0x20, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04,//cc r1
	0x8f,
};

static unsigned char LOCAL_CE_1[] = {
	0x20,
	0x00,
};

static unsigned char LOCAL_CE_2[] = {
	//start
	0xE6,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x00, //scr Kb
	0xFF, //scr Wb
	0x00, //scr Kg
	0xFF, //scr Wg
	0x00, //scr Kr
	0xFF, //scr Wr
	0xFF, //scr Bb
	0x00, //scr Yb
	0x00, //scr Bg
	0xFF, //scr Yg
	0x00, //scr Br
	0xFF, //scr Yr
	0x00, //scr Gb
	0xFF, //scr Mb
	0xFF, //scr Gg
	0x00, //scr Mg
	0x00, //scr Gr
	0xFF, //scr Mr
	0x00, //scr Rb
	0xFF, //scr Cb
	0x00, //scr Rg
	0xFF, //scr Cg
	0xFF, //scr Rr
	0x00, //scr Cr
	0x03, //sharpen_set cc_en gamma_en 00 0 0
	0xff, //curve24 a
	0x00, //curve24 b
	0x17, //curve23 a
	0x48, //curve23 b
	0x18, //curve22 a
	0x40, //curve22 b
	0x1a, //curve21 a
	0x33, //curve21 b
	0x1b, //curve20 a
	0x2e, //curve20 b
	0x1e, //curve19 a
	0x23, //curve19 b
	0x22, //curve18 a
	0x19, //curve18 b
	0x22, //curve17 a
	0x19, //curve17 b
	0x22, //curve16 a
	0x19, //curve16 b
	0x22, //curve15 a
	0x19, //curve15 b
	0x22, //curve14 a
	0x19, //curve14 b
	0x22, //curve13 a
	0x19, //curve13 b
	0x28, //curve12 a
	0x10, //curve12 b
	0x28, //curve11 a
	0x10, //curve11 b
	0x28, //curve10 a
	0x10, //curve10 b
	0x28, //curve 9 a
	0x10, //curve 9 b
	0x28, //curve 8 a
	0x10, //curve 8 b
	0x32, //curve 7 a
	0x08, //curve 7 b
	0x32, //curve 6 a
	0x08, //curve 6 b
	0x32, //curve 5 a
	0x08, //curve 5 b
	0x32, //curve 4 a
	0x08, //curve 4 b
	0x32, //curve 3 a
	0x08, //curve 3 b
	0x48, //curve 2 a
	0x03, //curve 2 b
	0x7b, //curve 1 a
	0x00, //curve 1 b
	0x04, //cc b3 0.2
	0xb5,
	0x1f, //cc b2
	0x88,
	0x1f, //cc b1
	0xc3,
	0x1f, //cc g3
	0xe9,
	0x04, //cc g2
	0x54,
	0x1f, //cc g1
	0xc3,
	0x1f, //cc r3
	0xe9,
	0x1f, //cc r2
	0x88,
	0x04, //cc r1
	0x8f,
};



#define MDNIE_SET(id)	\
{							\
	.name		= #id,				\
	.update_flag	= {0, 1, 2, 0},			\
	.seq		= {				\
		{	.cmd = LEVEL_UNLOCK,	.len = ARRAY_SIZE(LEVEL_UNLOCK),	.sleep = 0,},	\
		{	.cmd = id##_1,		.len = ARRAY_SIZE(id##_1),		.sleep = 0,},	\
		{	.cmd = id##_2,		.len = ARRAY_SIZE(id##_2),		.sleep = 0,},	\
		{	.cmd = LEVEL_LOCK,	.len = ARRAY_SIZE(LEVEL_LOCK),	.sleep = 0,},	\
	}	\
}

static struct mdnie_table bypass_table[BYPASS_MAX] = {
	[BYPASS_ON] = MDNIE_SET(BYPASS)
};

static struct mdnie_table accessibility_table[ACCESSIBILITY_MAX] = {
	[NEGATIVE] = MDNIE_SET(NEGATIVE),
	MDNIE_SET(COLOR_BLIND),
	MDNIE_SET(UI),
	MDNIE_SET(GRAYSCALE),
	MDNIE_SET(GRAYSCALE_NEGATIVE)
};

static struct mdnie_table hbm_table[HBM_MAX] = {
	[HBM_ON] = MDNIE_SET(LOCAL_CE)
};

static struct mdnie_table main_table[SCENARIO_MAX][MODE_MAX] = {
	{
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
	}, {
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
	},
	[CAMERA_MODE] = {
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
	},
	[GALLERY_MODE] = {
		MDNIE_SET(GALLERY),
		MDNIE_SET(GALLERY),
		MDNIE_SET(GALLERY),
		MDNIE_SET(GALLERY),
		MDNIE_SET(GALLERY),
		MDNIE_SET(GALLERY),
	}, {
		MDNIE_SET(VT),
		MDNIE_SET(VT),
		MDNIE_SET(VT),
		MDNIE_SET(VT),
		MDNIE_SET(VT),
		MDNIE_SET(VT),
	}, {
		MDNIE_SET(BROWSER),
		MDNIE_SET(BROWSER),
		MDNIE_SET(BROWSER),
		MDNIE_SET(BROWSER),
		MDNIE_SET(BROWSER),
		MDNIE_SET(BROWSER),
	}, {
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(EMAIL),
		MDNIE_SET(EMAIL),
		MDNIE_SET(EMAIL),
		MDNIE_SET(EMAIL),
		MDNIE_SET(EMAIL),
		MDNIE_SET(EMAIL),
	}
};

#undef MDNIE_SET

static struct mdnie_tune tune_info = {
	.bypass_table = bypass_table,
	.accessibility_table = accessibility_table,
	.hbm_table = hbm_table,
	.main_table = main_table,

	.scr_info = &scr_info,
	.get_hbm_index = get_hbm_index,
};

#endif

