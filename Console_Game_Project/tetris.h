#ifndef _TETRIS_H_
#define _TETRIS_H_

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<mmsystem.h>
#pragma comment(lib,"Winmm.lib")

#define width 40
#define depth 80

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define ENTER 13

void SetConsoleSize();
void gotoxy(int x, int y);
void CursorView();
void textcolor(int color_number);
void PrintTitle();
void InitGame();
void PrintMap();
void PrintBlock(int x, int y, int rotate, int blockindex);
void EraseBlock(int curx, int cury, int rotate, int blockindex);
void MoveBlock(int curx, int cury, int rotate, int blockindex);
void DownLine(int(*arr)[31], int index);
void Explain(int Score);
void PlayGame();
int Build(int curx, int cury, int blockindex, int rotate);
int ClearLine(int(*arr)[31]);

#endif
