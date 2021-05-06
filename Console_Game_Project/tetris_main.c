#include "tetris.h"

int main() {
	PlaySound(TEXT("C:\\Users\\dusrl\\source\\repos\\Project1\\Project1\\tetris.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	CursorView();
	SetConsoleSize();
	InitGame();
	PlayGame();

	return 0;
}
