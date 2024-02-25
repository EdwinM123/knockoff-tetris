#include "Game.h"
#include 
#ifndef LINUX 
#include <windows.h>
#endif

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    IO mIO;
    int mScreenHeight = mIO.GetScreenHeight();
    Pieces mPieces;
    Board mBoard(&mPieces, mScreenHeight);
    Game mGame(&mBoard, &mPieces, &mIO, mScreenHeight);
    unsigned long mTime1=SDL_GetTicks();

    while (!mIO.IsKeyDown(SDLK_ESCAPE)){
        mIO.ClearScreen();
        mGame.DrawScene();
        mIO.UpdateScreen();
    }
}