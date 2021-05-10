#include "tetris.h"

int main() {
	PlaySound(TEXT("tetris.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	InitGame();
	PlayGame();

	return 0;
}
