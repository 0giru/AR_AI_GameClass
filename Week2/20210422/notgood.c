#include<stdio.h>

int arr[101][101];
int visited[101][101];

// ©Л го аб ╩С
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int n;

void move(int x, int y, int dir);

int main() {
	int count = 0;

	printf("n ют╥б : ");
	scanf("%d", &n);
	arr[0][0] = 1;
	visited[0][0] = 1;

	move(0, 0, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%2d", arr[i][j]);
		}
		printf("\n");
	}

}
// dir 0 : ©Л
// dir 1 : го
// dir 2 : аб
// dir 3 : ╩С
void move(int x, int y, int dir) {
	int nx;
	int ny;
	int count = 0;

	nx = x + dx[dir % 4];
	ny = y + dy[dir % 4];

	for (int i = 0; i < 4; i++) {
		int _nx = x + dx[i];
		int _ny = y + dy[i];
		if (visited[_nx][_ny] == 1) {
			count++;
			continue;
		}
	}
	if (count == 4) {
		return;
	}

	if (nx >= 0 && ny >= 0) {
		if (nx < n && ny < n) {
			if (visited[nx][ny] == 1) {
				move(x, y, dir + 1);
			}
			else {
				visited[nx][ny] = 1;
				arr[nx][ny] = arr[x][y] + 1;
				move(nx, ny, dir);
			}
		}
		else {
			move(x, y, dir + 1);
		}
	}
	else {
		move(x, y, dir + 1);
	}
}