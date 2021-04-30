#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include"functions.h"

#define _CRT_NONSTDC_NO_WARNINGS
#define false 0

void gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int main() {
	int curX = 60;
	int curY = 23;
	system("mode con cols=160 lines=40");
	CursorView(false);

	//시작화면 출력
	while (1) {
		printMain();
		gotoxy(curX, curY); // 게임 시작 위치
		printf("▶");
		if (_kbhit()) {
			int temp;
			temp = _getch();
			//종료에서 엔터 입력 시 종료
			if (temp == 13 && curY == 25) {
				return 0;
			}
			else if (temp == 13 && curY == 23) {
				break;
			}
			if (temp == 224) {
				temp = _getch();
				if (temp == 80 || temp == 72) {
					if (curY == 25) {
						curY -= 2;
						printf("▶");
					}
					else {
						curY += 2;
						printf("▶");
					}
					
				}
			}
		}
	}

	//게임 진행화면 출력
	while (1) {
		printBowl();
	}

	return 0;
}

