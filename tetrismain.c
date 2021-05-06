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
#define ENTER 13

int Score = 0;

int arr[32][31] = {
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 2},
	{2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2, 100, 2},
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

char Title[20][120] = {
	"######################################################################################################################",
	"######################################################################################################################",
	"####                ###                ###                ###                ###                ###                ###",
	"##########  ##########  ########################  ##########  ############  ##########  ##########  ##################",
	"#########  ##########  ########################  ##########  ############  ##########  ##########  ###################",
	"########  ##########  ########################  ##########  ############  ##########  ##########  ####################",
	"#######  ##########                ##########  ##########                ##########  ##########                #######",
	"######  ##########  ########################  ##########  #########  #############  ########################  ########",
	"#####  ##########  ########################  ##########  ##########  ############  ########################  #########",
	"####  ##########  ########################  ##########  ###########  ###########  ########################  ##########",
	"###  ##########                ##########  ##########  ############  ###                ###                ###########",
	"######################################################################################################################",
	"######################################################################################################################",
	"                                                                                                                      ",
	"                                                                                                                      ",
	"                                           게임 시작                                                                  ",
	"                                                                                                                      ",
	"                                             종료                                                                     "
};

void PrintTitle() {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 120; j++) {
			gotoxy(20 + j, 10 + i);
			printf("%c", Title[i][j]);
		}
	}
}

void InitGame() {
	int input;
	int flag = 0;

	PrintTitle();
	gotoxy(60, 25);
	printf("▶");

	while (1) {
		if (_kbhit()) {
			input = _getch();
			if (input == 224) {
				input = _getch();
				if (input == DOWN) {
					if (flag == 0) {
						flag = 1;
						gotoxy(60, 25);
						printf("  ");
						gotoxy(60, 27);
						printf("▶");
					}
				}
				else if (input == UP) {
					if (flag == 1) {
						flag = 0;
						gotoxy(60, 25);
						printf("▶");
						gotoxy(60, 27);
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
	for (int i = 0; i < 32; i++) {
		for (int j = 0; j < 31; j++) {
			if (arr[i][j] == 0) {
				gotoxy(6 + j, 6 + i);
				printf("  ");
			}
			else if (arr[i][j] == 2) {
				gotoxy(6 + j, 6 + i);
				textcolor(7);
				printf("▩");
			}
			else if (arr[i][j] == 1) {
				gotoxy(6 + j, 6 + i);
				textcolor(1);
				printf("■");
			}
			else if (arr[i][j] == 4) {
				gotoxy(6 + j, 6 + i);
				textcolor(4);
				printf("■");
			}
			else if (arr[i][j] == 5) {
				gotoxy(6 + j, 6 + i);
				textcolor(5);
				printf("■");
			}
			else if (arr[i][j] == 6) {
				gotoxy(6 + j, 6 + i);
				textcolor(6);
				printf("■");
			}
			else if (arr[i][j] == 8) {
				gotoxy(6 + j, 6 + i);
				textcolor(3);
				printf("■");
			}
			else if (arr[i][j] == 10) {
				gotoxy(6 + j, 6 + i);
				textcolor(10);
				printf("■");
			}
			else if (arr[i][j] == 11) {
				gotoxy(6 + j, 6 + i);
				textcolor(11);
				printf("■");
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
				if (blockindex == 0) {
					textcolor(1);
					printf("■");
				}
				else if (blockindex == 1) {
					textcolor(4);
					printf("■");
				}
				else if (blockindex == 2) {
					textcolor(5);
					printf("■");
				}
				else if (blockindex == 3) {
					textcolor(6);
					printf("■");
				}
				else if (blockindex == 4) {
					textcolor(3);
					printf("■");
				}
				else if (blockindex == 5) {
					textcolor(10);
					printf("■");
				}
				else if (blockindex == 6) {
					textcolor(11);
					printf("■");
				}
			}
		}
	}
}

void EraseBlock(int curx, int cury, int rotate, int blockindex) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (block[blockindex][rotate][i][j] != 0) {
				gotoxy(curx + 2 * j, cury + i - 4);
				printf("  ");
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
					EraseBlock(curx, cury, nRotate % 4, blockindex);
					PrintBlock(curx, cury += 1, nRotate % 4, blockindex);
				}
				else if (temp == RIGHT) {
					if (curx == 28) {
						continue;
					}
					EraseBlock(curx, cury, nRotate % 4, blockindex);
					PrintBlock(curx += 2, cury, nRotate % 4, blockindex);
				}
				else if (temp == LEFT) {
					if (blockindex == 0 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 0 && (nRotate % 4) % 2 == 1) {
						if (curx == 6) {
							continue;
						}
					}

					if (blockindex == 1 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 1 && (nRotate % 4) % 2 == 1) {
						if (curx == 6) {
							continue;
						}
					}

					if (blockindex == 2) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 3 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 3 && (nRotate % 4) % 2 == 1) {
						if (curx == 6) {
							continue;
						}
					}

					if (blockindex == 4 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 4 && (nRotate % 4) % 2 == 1) {
						if (curx == 6) {
							continue;
						}
					}

					if (blockindex == 5 && (nRotate % 4) % 2 == 0) {
						if (curx == 2) {
							continue;
						}
					}
					else if (blockindex == 5 && (nRotate % 4) % 2 == 1) {
						if (curx == 8) {
							continue;
						}
					}

					if (blockindex == 6 && (nRotate % 4) % 2 == 0) {
						if (curx == 6) {
							continue;
						}
					}
					else if (blockindex == 6 && (nRotate % 4) % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}
					EraseBlock(curx, cury, nRotate % 4, blockindex);
					PrintBlock(curx -= 2, cury, nRotate % 4, blockindex);
				}
				else if (temp == UP) {
					if (blockindex == 0 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 0 && (nRotate % 4) % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 1 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 1 && (nRotate % 4) % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 3 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 3 && (nRotate % 4) % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 4 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 4 && (nRotate % 4) % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}

					if (blockindex == 5 && (nRotate % 4) % 2 == 0) {
						if (curx <= 6) {
							continue;
						}
					}

					if (blockindex == 6 && (nRotate % 4) % 2 == 0) {
						if (curx == 4) {
							continue;
						}
					}
					else if (blockindex == 6 && (nRotate % 4) % 2 == 1) {
						if (curx == 4) {
							continue;
						}
					}
					EraseBlock(curx, cury, nRotate % 4, blockindex);
					nRotate += 1;
					PrintBlock(curx, cury, nRotate % 4, blockindex);
				}
			}
		}
		else {
			count += 1;
			if (count % 10000 == 0) {
				count = 0;
				EraseBlock(curx, cury, nRotate % 4, blockindex);
				PrintBlock(curx, cury += 1, nRotate % 4, blockindex);
			}
		}
	}
	EraseBlock(curx, cury, nRotate, blockindex);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (block[blockindex][nRotate % 4][i][j] == 1) {
				if (blockindex == 0) {
					arr[cury - 11 + i][curx - 6 + j * 2] = 1;
					arr[cury - 11 + i][curx - 6 + j * 2 - 1] = 101;
				}
				else if (blockindex == 1) {
					arr[cury - 11 + i][curx - 6 + j * 2] = 4;
					arr[cury - 11 + i][curx - 6 + j * 2 - 1] = 101;
				}
				else if (blockindex == 2) {
					arr[cury - 11 + i][curx - 6 + j * 2] = 5;
					arr[cury - 11 + i][curx - 6 + j * 2 - 1] = 101;
				}
				else if (blockindex == 3) {
					arr[cury - 11 + i][curx - 6 + j * 2] = 6;
					arr[cury - 11 + i][curx - 6 + j * 2 - 1] = 101;
				}
				else if (blockindex == 4) {
					arr[cury - 11 + i][curx - 6 + j * 2] = 8;
					arr[cury - 11 + i][curx - 6 + j * 2 - 1] = 101;
				}
				else if (blockindex == 5) {
					arr[cury - 11 + i][curx - 6 + j * 2] = 10;
					arr[cury - 11 + i][curx - 6 + j * 2 - 1] = 101;
				}
				else if (blockindex == 6) {
					arr[cury - 11 + i][curx - 6 + j * 2] = 11;
					arr[cury - 11 + i][curx - 6 + j * 2 - 1] = 101;
				}

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
int ClearLine(int (*arr)[31]) {
	int count = 0;

	for (int i = 30; i >= 0; i--) {
		for (int j = 1; j < 30; j++) {
			if (arr[i][j] != 0) {
				count++;
			}
		}
		if (count == 29) {
			for (int j = 1; j < 30; j++) {
				arr[i][j] = 0;
			}
			return i;
		}
		else {
			count = 0;
		}
	}
	return -1;
}

void DownLine(int (*arr)[31], int index) {
	for (int i = index; i >= 1; i--) {
		for (int j = 1; j < 30; j++) {
			arr[i][j] = arr[i - 1][j];
		}
	}
}

void Explain(int Score) {
	gotoxy(40, 10);
	printf("SCORE : %2d", Score);
	gotoxy(40, 12);
	printf("▲ : Rotate ");
	gotoxy(40, 14);
	printf("▼ : fall ");
	gotoxy(40, 16);
	printf("◀ : Left ");
	gotoxy(40, 18);
	printf("▶ : Right ");
}

void PlayGame() {
	int initx = 18;
	int inity = 5;
	int blockindex;
	int clear;

	blockindex = 3;

	srand((unsigned int)time(NULL));

	system("cls");
	PrintMap();

	while (1) {
		Explain(Score);
		blockindex = rand() % 7;
		PrintBlock(initx, inity, 0, blockindex);
		MoveBlock(initx, inity, 0, blockindex);
		while (1) {
			clear = ClearLine(arr);
			if (clear < 0) {
				break;
			}
			DownLine(arr, clear);
			Score += 10;
		}
		PrintMap();
	}
}

int main() {
	CursorView();
	SetConsoleSize();
	InitGame();
	PlayGame();

	return 0;
}
