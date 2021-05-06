#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
//#include<conio.h>

#define width 40
#define depth 80

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

int arr[32][31] = {
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
	{2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
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
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void CursorView() {
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //커서 굵기 (1 ~ 100)
	cursorInfo.bVisible = FALSE; //커서 Visible TRUE(보임) FALSE(숨김)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void textcolor(int color_number) {
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

void InitGame() {
	int input;
	int flag = 0;
	int curx = 60;
	int cury = 23;

	PrintInit1();
	gotoxy(60, 23);
	printf("▶");

	while (1) {
		if (_kbhit()) {
			input = _getch();
			if (input == 224) {
				input = _getch();
				if (input == DOWN) {
					if (flag == 0) {
						flag = 1;
						gotoxy(60, 23);
						printf("  ");
						gotoxy(60, 25);
						printf("▶");
					}
				}
				else if (input == UP) {
					if (flag == 1) {
						flag = 0;
						gotoxy(60, 23);
						printf("▶");
						gotoxy(60, 25);
						printf("  ");
					}
				}
			}
			else if (input == ENTER) {
				if (flag == 1) {
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

	for (int i = 0; i < 32; i++) {
		for (int j = 0; j < 31; j++) {
			if (arr[i][j] == 1) {
				gotoxy(6 + j, 6 + i);
				printf("■");
			}
			else if (arr[i][j] == 2) {
				gotoxy(6 + j, 6 + i);
				printf("▩");
			}
		}
	}
}
void PrintBlock(int x, int y, int rotate, int blockindex) {
	int nRotate = rotate % 4;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			gotoxy(x + 2 * i, y + j - 4);
			if (block[blockindex][nRotate][j][i] == 1) {
				printf("■");
				//printf("%d %d", x + 2 * i, y + j);
			}
		}
	}
}
void MoveBlock(int curx, int cury, int rotate, int blockindex) {
	int temp;
	int count = 0;
	int nRotate = rotate;

	while (Build(curx, cury, blockindex, nRotate % 4) > 0) {
		if (_kbhit()) {
			temp = _getch();
			if (temp == 224) {
				temp = _getch();
				if (temp == DOWN) {
					system("cls");
					PrintMap();
					PrintBlock(curx, cury += 1, nRotate % 4, blockindex);
				}
				else if (temp == RIGHT) {
					if (curx == 28) {
						continue;
					}
					system("cls");
					PrintMap();
					PrintBlock(curx += 2, cury, nRotate % 4, blockindex);
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
					PrintBlock(curx -= 2, cury, nRotate % 4, blockindex);
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
					nRotate += 1;
					PrintBlock(curx, cury, nRotate % 4, blockindex);
				}
			}
		}
		else {
			count += 1;
			if (count % 2500 == 0) {
				count = 0;
				system("cls");
				PrintMap();
				PrintBlock(curx, cury += 1, nRotate % 4, blockindex);
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (block[blockindex][nRotate % 4][i][j] == 1) {
				arr[cury - 11 + i][curx - 6 + j * 2] = 1;
				arr[cury - 11 + i][curx - 6 + j * 2 - 1] = 3;
			}
		}
	}
}
int Build(int curx, int cury, int blockindex, int rotate) {
	//blockindex 0 rotate 0, 2
	if (blockindex == 0 && rotate % 2 == 0) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 8][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 0 rotate 1, 3
	if (blockindex == 0 && rotate % 2 == 1) {
		if (arr[cury - 8][curx] != 0 || arr[cury - 7][curx - 5] != 0) {
			return -1;
		}
		return 1;
	}

	//blockindex 1 rotate 0, 2
	if (blockindex == 1 && rotate % 2 == 0) {
		if (arr[cury - 8][curx] != 0 || arr[cury - 7][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 1 rotate 1, 3
	if (blockindex == 1 && rotate % 2 == 1) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 7][curx - 2] != 0 || arr[cury - 8][curx - 4] != 0) {
			return -1;
		}
		return 1;
	}

	//blockindex 2 rotate 0, 2
	if (blockindex == 2) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 7][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}

	//blockindex 3 rotate 0
	if (blockindex == 3 && rotate == 0) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 7][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 3 rotate 1
	if (blockindex == 3 && rotate == 1) {
		if (arr[cury - 7][curx - 4] != 0 || arr[cury - 8][curx - 2] != 0 || arr[cury - 8][curx] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 3 rotate 2
	if (blockindex == 3 && rotate == 2) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 9][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 3 rotate 3
	if (blockindex == 3 && rotate == 3) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 7][curx - 2] != 0 || arr[cury - 7][curx - 4] != 0) {
			return -1;
		}
		return 1;
	}

	//blockindex 4 rotate 0
	if (blockindex == 4 && rotate == 0) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 7][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 4 rotate 1
	if (blockindex == 4 && rotate == 1) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 7][curx - 2] != 0 || arr[cury - 7][curx - 4] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 4 rotate 2
	if (blockindex == 4 && rotate == 2) {
		if (arr[cury - 9][curx] != 0 || arr[cury - 7][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 4 rotate 3
	if (blockindex == 4 && rotate == 3) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 8][curx - 2] != 0 || arr[cury - 9][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}

	//blockindex 5 rotate 0, 2
	if (blockindex == 5 && rotate % 2 == 1) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 7][curx - 2] || arr[cury - 7][curx - 4] || arr[cury - 7][curx - 6]) {
			return -1;
		}
		return 1;
	}

	//blockindex 5 rotate 1, 3
	if (blockindex == 5 && rotate % 2 == 0) {
		if (arr[cury - 7][curx] != 0) {
			return -1;
		}
		return 1;
	}

	//blockindex 6 rotate 0
	if (blockindex == 6 && rotate == 0) {
		if (arr[cury - 7][curx - 2] != 0 || arr[cury - 8][curx] != 0 || arr[cury - 8][curx - 4] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 6 rotate 1
	if (blockindex == 6 && rotate == 1) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 8][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 6 rotate 2
	if (blockindex == 6 && rotate == 2) {
		if (arr[cury - 7][curx] != 0 || arr[cury - 7][curx - 2] != 0 || arr[cury - 7][curx - 4] != 0) {
			return -1;
		}
		return 1;
	}
	//blockindex 6 rotate 3
	if (blockindex == 6 && rotate == 3) {
		if (arr[cury - 8][curx] != 0 || arr[cury - 7][curx - 2] != 0) {
			return -1;
		}
		return 1;
	}
}
void PlayGame() {
	int initx = 18;
	int inity = 5;
	int blockindex;

	srand((unsigned int)time(NULL));

	while (1) {
		system("cls");
		blockindex = rand() % 7;
		//blockindex = 3;
		PrintMap();
		//PrintBlock(initx, inity, 0, blockindex);
		MoveBlock(initx, inity, 0, blockindex);
	}
}

int main() {
	CursorView(); //커서 지우기
	SetConsoleSize(); //콘솔 환경 설정
	InitGame(); //시작 화면 출력 및 메뉴 선택
	PlayGame();

	return 0;
}
