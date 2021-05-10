#ifndef _TETRIS_H_
#define _TETRIS_H_

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<mmsystem.h>
#pragma comment(lib,"Winmm.lib")

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define ENTER 13

void CursorView();
void SetConsoleSize1();
void SetConsoleSize2();
void gotoxy(int x, int y);
void textcolor(int color_number);

void InitGame();
void PrintTitle();

void PlayGame();
void PrintMap();
void Explain(int Score, int curblockindex, int nxtblockindex);
void PrintBlock(int x, int y, int rotate, int blockindex);
void EraseBlock(int curx, int cury, int rotate, int blockindex);
void MoveBlock(int curx, int cury, int rotate, int blockindex);
int Build(int curx, int cury, int blockindex, int rotate);
int ClearLine(int(*arr)[31]);
void DownLine(int(*arr)[31], int index);


#endif
