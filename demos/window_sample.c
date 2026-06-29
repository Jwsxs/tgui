#include "../include/tgui.h"

int main(void) {
    tguiInit(TGUI_FLAG_NONE);

    tguiSetAttr(TGUI_ATTR_CLEAR_COLOR, TGUI_PIXEL_RESET_COLOR);
    tguiSetAttr(TGUI_ATTR_PXA_COLOR, TGUI_PIXEL_COLOR_BG_BBLUE);
    tguiSetAttr(TGUI_ATTR_PXA_FILL_CHAR, '#');

    tguiClear();

    TGUI_WIN* win = tguiCreateWindow(20, 10, TGUI_WIN_FILLED);
    tguiRender(win);

    return 0;
}
