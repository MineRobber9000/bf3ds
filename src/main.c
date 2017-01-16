#include <3ds.h>
#include <stdio.h>

int main(int argc, char **argv) {
	gfxInitDefault();
	consoleInit(GFX_TOP,NULL);
	printf("Press Start to exit.");
	while (aptMainLoop()) {
		gspWaitForVBlank();
		hidScanInput();
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break;
		gfxFlushBuffers();
		gfxSwapBuffers();
	}
	gfxExit();
	return 0;
}
