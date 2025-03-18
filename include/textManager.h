#ifndef TEXTMANAGER_H
#define TEXTMANAGER_H

#include <raylib.h>

class TextManager
{
    private:
        Font font_VT323;

    public:
        TextManager();
        ~TextManager();

        void drawLeftText(const char* text, int fontSize, Color color, int paddingX, int paddingY);
        void drawRightText(const char* text, int fontSize, Color color, int paddingX, int paddingY);
        void drawCenterText(const char* text, int fontSize, Color color, int paddingX, int paddingY);
}; 

#endif