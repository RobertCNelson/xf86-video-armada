/*
 * Vivante GPU Acceleration Xorg driver
 *
 * Written by Russell King, 2012, derived in part from the
 * Intel xorg X server driver.
 */
#ifndef VIVANTE_DRI2_H
#define VIVANTE_DRI2_H

Bool etnaviv_dri2_ScreenInit(ScreenPtr pScreen, int drm_fd);
void etnaviv_dri2_CloseScreen(CLOSE_SCREEN_ARGS_DECL);
void etnaviv_dri2_vblank(int fd, unsigned frame, unsigned tv_sec,
	unsigned tv_usec, void *event);

#endif
