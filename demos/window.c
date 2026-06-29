#include "../include/tgui.h"
#include <unistd.h>

TGUI_PIXEL_COLOR TGUI_WIN_INITIAL_COLOR = TGUI_PIXEL_COLOR_BG_BWHITE;

int main() {
	tguiInit(TGUI_FLAG_NONE);

	tguiSetAttr(TGUI_ATTR_PXA_FILL_CHAR, 'x');
	tguiSetAttr(TGUI_ATTR_PXA_BG_COLOR, TGUI_PIXEL_COLOR_BG_BBLACK);
	
	tguiSetAttr(TGUI_ATTR_WIN_HAS_BORDER, TGUI_FALSE);

	TGUI_WIN* win;
	win = tguiCreateWindow(100, 60, TGUI_WIN_BLANK);
	
	tguiSetAttr(TGUI_ATTR_PXA_CHAR_COLOR, TGUI_PIXEL_COLOR_BG_BBLUE);
	tguiClear();
	
	int i = 0;
	while (i < 100000) {
		tguiRender(win);
		i++;
	}

	tguiClear();
	return 1;
}
