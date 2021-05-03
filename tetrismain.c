#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define width 40
#define depth 80

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

int arr[32][31] = {
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};
int block[7][4][4][4] = {
			//번개 블럭
	{
		{
		{0, 0, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 1},
		{0, 0, 0, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 1},
		{0, 1, 1, 0}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 1},
		{0, 0, 0, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 1},
		{0, 1, 1, 0}
		}
	},
			//역번개 블럭
	{
		{
		{0, 0, 0, 0},
		{0, 0, 0, 1},
		{0, 0, 1, 1},
		{0, 0, 1, 0}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 1, 1, 0},
		{0, 0, 1, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 1},
		{0, 0, 1, 1},
		{0, 0, 1, 0}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 1, 1, 0},
		{0, 0, 1, 1}
		}
	},
			//네모블럭
	{
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 1},
		{0, 0, 1, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 1},
		{0, 0, 1, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 1},
		{0, 0, 1, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 1},
		{0, 0, 1, 1}
		}
	},
			//L블럭
	{
		{
		{0, 0, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 1, 1, 1},
		{0, 1, 0, 0}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 1, 1},
		{0, 0, 0, 1},
		{0, 0, 0, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 1},
		{0, 1, 1, 1}
		}
	},
			//역 L블럭
	{
		{
		{0, 0, 0, 0},
		{0, 0, 0, 1},
		{0, 0, 0, 1},
		{0, 0, 1, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 1, 0, 0},
		{0, 1, 1, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 1, 1},
		{0, 0, 1, 0},
		{0, 0, 1, 0}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 1, 1, 1},
		{0, 0, 0, 1}
		}
	},
			//직선블럭
	{
		{
		{0, 0, 0, 1},
		{0, 0, 0, 1},
		{0, 0, 0, 1},
		{0, 0, 0, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{1, 1, 1, 1}
		},
		{
		{0, 0, 0, 1},
		{0, 0, 0, 1},
		{0, 0, 0, 1},
		{0, 0, 0, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{1, 1, 1, 1}
		}
	},
			//T블럭
	{
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 1, 1, 1},
		{0, 0, 1, 0}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 1},
		{0, 0, 1, 1},
		{0, 0, 0, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 0},
		{0, 1, 1, 1}
		},
		{
		{0, 0, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 1},
		{0, 0, 1, 0}
		}
	},
	};

void SetConsoleSize() {
	system("mode con cols=160 lines=40");
}
void gotoxy(int x, int y){
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void CursorView() {
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //커서 굵기 (1 ~ 100)
	cursorInfo.bVisible = FALSE; //커서 Visible TRUE(보임) FALSE(숨김)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void textcolor(int color_number){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}
void PrintInit() {
	int num;

	num = rand();
	textcolor((num += 1) % 14 + 1);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("              ######################################################################################################################\n");
	printf("              ######################################################################################################################\n");
	printf("              ####                ###                ###                ###                ###                ###                ###\n");
	printf("              ##########  ##########  ########################  ##########  ############  ##########  ##########  ##################\n");
	printf("              #########  ##########  ########################  ##########  ############  ##########  ##########  ###################\n");
	printf("              ########  ##########  ########################  ##########  ############  ##########  ##########  ####################\n");
	printf("              #######  ##########                ##########  ##########                ##########  ##########                #######\n");
	printf("              ######  ##########  ########################  ##########  #########  #############  ########################  ########\n");
	printf("              #####  ##########  ########################  ##########  ##########  ############  ########################  #########\n");
	printf("              ####  ##########  ########################  ##########  ###########  ###########  ########################  ##########\n");
	printf("              ###  ##########                ##########  ##########  ############  ###                ###                ###########\n");
	printf("              ######################################################################################################################\n");
	printf("              ######################################################################################################################\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	textcolor(15);
	printf("                                                                게임시작                                                             \n");
	printf("\n");
	printf("                                                                  종료                                                               \n");

}
void PointMenu(x, y) {
	// default = 60, 23
	gotoxy(x, y);
	printf("▶");
}
void InitGame() {
	int input;
	int curx = 60;
	int cury = 23;

	while (1) {
		system("cls");
		PrintInit();
		PointMenu(curx, cury);
		Sleep(100);
		if (kbhit()) {
			input = getch();
			if (input == 224) {
				input = getch();
				if (input == 80) {
					if (cury == 25) {
						cury = 23;
					}
					else if (cury == 23) {
						cury = 25;
					}
					PointMenu(curx, cury);
				}
				else if (input == 72) {
					if (cury == 23) {
						cury = 25;
					}
					else if (cury == 25) {
						cury = 23;
					}
					PointMenu(curx, cury);
				}
			}
			else if (input == 13) {
				if (cury == 25) {
					break;
				}
				return;
			}
		}
	}
	exit(0);
}
void PrintMap() {
	int x;
	int y;

	for (int col = 0; col < 31; col++) {
		for (int row = 0; row < 32; row++) {\
			gotoxy(6 + col, 6 + row);
			if (col == 0 || col == 30) {
				printf("▩");
				x = col;
				y = row;
			}
			//else {
			//	printf("□");
			//}
		}
	}
	gotoxy(6, 6 + y);
	for (int i = 0; i < 16; i++) {
		printf("▩");
	}

}

void PrintBlock(int x, int y, int rotate, int blockindex1) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			gotoxy(x + 2 * i, y + j);
			if (block[blockindex1][rotate % 4][j][i] == 1) {
				printf("■");
			}
		}
	}
}

void MoveBlock(int curx, int cury, int rotate, int blockindex) {
	int temp;
	int tempx = 0;
	int tempy = 0;


	rotate %= 4;
	while (cury < 35) {
		if (kbhit()) {
			temp = getch();
			if (temp == 224) {
				temp = getch();

				if (temp == DOWN) {
					system("cls");
					PrintMap();
					PrintBlock(curx, cury += 1, rotate, blockindex);
				}
				else if (temp == RIGHT) {
					if (curx == 28) {
						continue;
					}
					system("cls");
					PrintMap();
					PrintBlock(curx += 2, cury, rotate, blockindex);
				}
				else if (temp == LEFT) {
					if (blockindex == 0 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 0 && rotate % 2 == 1) {
						if (curx == 6) {
							continue;
						}
					}

					if (blockindex == 1 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 1 && rotate % 2 == 1) {
						if (curx == 6) {
							continue;
						}
					}

					if (blockindex == 2) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 3 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 3 && rotate % 2 == 1) {
						if (curx == 6) {
							continue;
						}
					}

					if (blockindex == 4 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 4 && rotate % 2 == 1) {
						if (curx == 6) {
							continue;
						}
					}

					if (blockindex == 5 && rotate % 2 == 0) {
						if (curx == 2) {
							continue;
						}
					}
					else if (blockindex == 5 && rotate % 2 == 1) {
						if (curx == 8) {
							continue;
						}
					}

					if (blockindex == 6 && rotate % 2 == 0) {
						if (curx == 6) {
							continue;
						}
					}
					else if (blockindex == 6 && rotate % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					system("cls");
					PrintMap();
					PrintBlock(curx -= 2, cury, rotate, blockindex);
				}
				else if (temp == UP) {
					if (blockindex == 0 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 0 && rotate % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 1 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 1 && rotate % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 3 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 3 && rotate % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 4 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 4 && rotate % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 5 && rotate % 2 == 0) {
						if (curx <= 6) {
							continue;
						}
					}

					if (blockindex == 6 && rotate % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 6 && rotate % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					system("cls");
					PrintMap();
					PrintBlock(curx, cury, rotate += 1, blockindex);
				}
			}
		}
	}
}

//int Collision(int x, int y) {
//	if (arr[x][y] != 0) {
//		return -1;
//	}
//	return 1;
//}

void PlayGame() {
	int initx = 18;
	int inity = 5;
	int blockindex ;

	srand((unsigned int)time(NULL));

	while (1) {
		blockindex = rand() % 7;
		system("cls");
		PrintMap();
		PrintBlock(initx, inity, 0, blockindex);
		MoveBlock(initx, inity, 0, blockindex);
		/*for (int i = 0; i < 32; i++) {
			for (int j = 0; j < 31; j++) {
				if (arr[i][j] == 1) {
					gotoxy(6 + j, 6 + i);
					printf("＠");
				}
			}
		}*/
	}
}



int main() {
	CursorView(); //커서 지우기
	SetConsoleSize(); //콘솔 환경 설정
	InitGame(); //시작 화면 출력 및 메뉴 선택
	PlayGame();

	return 0;
}
