#include "../include/textManager.h"

TextManager::TextManager()
{
    font_VT323 = LoadFont("../fonts/VT323-Regular");
}

TextManager::~TextManager()
{
    UnloadFont(font_VT323);
}

void TextManager::drawCenterText(const char* text, int fontSize, Color color, int paddingX, int paddingY)
{
    int textWidth = MeasureTextEx(font_VT323, text, fontSize, 2).x;
    int centerX = (GetScreenWidth() / 2) - (textWidth / 2) + paddingX;
    int centerY = (GetScreenHeight() / 2) - (fontSize / 2) + paddingY;

    Vector2 position = { (float)centerX, (float)centerY };
    DrawTextEx(font_VT323, text, position, fontSize, 2, color);
}

void TextManager::drawLeftText(const char* text, int fontSize, Color color, int paddingX, int paddingY)
{
    Vector2 position = { (float)paddingX, (float)(GetScreenHeight() / 2 - fontSize / 2) + paddingY };
    DrawTextEx(font_VT323, text, position, fontSize, 2, color);
}

void TextManager::drawRightText(const char* text, int fontSize, Color color, int paddingX, int paddingY)
{
    int textWidth = MeasureText(text, fontSize);
    int x = (GetScreenWidth() - textWidth) - paddingX;
    int y = (GetScreenHeight() / 2) - (fontSize / 2) + paddingY;
    DrawText(text, x, y, fontSize, color);
}