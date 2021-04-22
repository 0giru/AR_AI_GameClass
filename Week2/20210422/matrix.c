#include <stdio.h>

int main() {
	char mark[5][5] = {0};
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j || i == 4-j) {
				mark[i][j] = 'X';
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j ) {
				mark[i][j] = 'X';
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c ", mark[i][j]);
			}
		printf("\n");
		}
	return 0;
	}
