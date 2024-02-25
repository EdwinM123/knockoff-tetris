#ifndef _IO_
#define _IO_

#ifndef LINUX
#define SDL_MAIN_HANDLED 
#include <SDL2/SDL.h>
#else 
#include <SDL/SDL.h>
#include "SDL/SDL_GfxPrimitives/sdl_gfxprimitives.h"
#endif 
#pragma comment (lib, "SDL/lib/SDL.lib")
#pragma comment (lib, "SDL/SDL_GfxPrimitives/SDL_GfxPrimitives_Static.lib")

enum color {BLACK, RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW, WHITE, COLOR_MAX};

class IO {
    public: 
        IO();
        void DrawRectangle( int pX1, int pY1, int pX2, int pY2, enum color pC);
        void ClearScreen();
        int GetScreenHeight();
        int InitGraph();
        int PollKey();
        int GetKey();
        int IsKeyDown(int pKey);
        void UpdateScreen();
};

#endif 