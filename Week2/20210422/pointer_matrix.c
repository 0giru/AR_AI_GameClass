#include<stdio.h>
//# define max 100
//int main() {
//
//	int Arr[max][max] = {0};
//	int temp[max][max] = {0};
//	int row;
//	int col;
//	int count;
//
//	printf("행 수 입력 : ");
//	scanf("%d", &row);
//	printf("열 수 입력 : ");
//	scanf("%d", &col);
//	printf("\n");
//
//	count = 1;
//	//Arr 채우기
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			Arr[i][j] = count;
//			count++;
//		}
//	}
//
//	//temp 채우기
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < max; j++) {
//			temp[i][j] = Arr[j][i];
//		}
//	}
//
//	//Arr 출력
//	printf("A 배열 : \n");
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			printf("%d", Arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n");
//
//	printf("B 배열 : \n");
//
//	printf("\n");
//	for (int i = 0; i < col; i++) {
//		for (int j = row-1; j >= 0; j--) {
//			printf("%d", temp[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int arr[101][101];
//int visited[101][101];
//
//	// 우 하 좌 상
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { 1, 0, -1, 0 };
//int n;
//
//void move(int x, int y);
//
//int main() {
//
//
//	printf("n 입력 : ");
//	scanf("%d", &n);
//	arr[0][0] = 1;
//	visited[0][0] = 1;
//
//	move(0, 0);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}
//// dir 0 : 우
//// dir 1 : 하
//// dir 2 : 좌
//// dir 3 : 상
//void move(int x, int y, int dir) {
//	int nx;
//	int ny;
//	
//	nx = x + dx[dir % 4];
//	ny = x + dy[dir % 4];
//
//	if (visited[nx][ny] == 1) {
//		move(x, y, dir + 1);
//	}
//	if (nx < 0 || ny < 0) {
//		move(x, y, dir + 1);
//	}
//	if (nx >= n || ny >= n) {
//		move(x, y, dir + 1);
//	}
//
//	arr[nx][ny] = arr[x][y] + 1;
//	visited[nx][ny] = 1;
//	move(nx, ny, dir);
//
//
//}

//포인터 배열
/*

int *pa;
int *pb;
int *pc;

-> int *parr[3]

*/
//int main() {
//	char *pary[5];
//	int i;
//
//	pary[0] = "dog";
//	pary[1] = "elephant";
//	pary[2] = "horse";
//	pary[3] = "tiger";
//	pary[4] = "lion";
//
//	for (i = 0; i < 5; i++) {
//		printf("%s\n", pary[i]);
//	}
//
//	return 0;
//}

int arr[101][101];

//우상 우 하 좌하
int dx[4] = { -1, 0, 1, 1 };
int dy[4] = { 1, 1, 0, -1 };
int n;

void move(int x, int y, int pdir);
void move_sub(int nx, int ny, int x, int y, int ndir);

int main() {
	printf("배열의 크기 입력 : ");
	scanf("%d", &n);

	arr[0][0] = 1;

	//(0, 0)으로는 우상으로 들어간 것으로 취급
	move(0, 0, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("%\n");
	}
	return 0;
}

void move(int x, int y, int pdir) {
	int nx;
	int ny;
	int ndir;

	//끝에 도착하면 종료
	if (x == n-1 && y == n-1) {
		return;
	}

	//이전으로부터 우상으로 들어왔을 때
	if (pdir == 0) {
		//우로가거나
		if (x == 0 && y != n-1) {
			ndir = 1;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//내려간다
		else if (y == n-1) {
			ndir = 2;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//직진한다
		else {
			ndir = 0;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
	}
	//이전으로부터 우로 들어왔을 때
	else if (pdir == 1) {
		//좌하로 가거나
		if (x == 0) {
			ndir = 3;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//우상으로 간다
		else if (x == n-1) {
			ndir = 0;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
	}
	//이전으로부터 하로 들어왔을 때
	else if (pdir == 2) {
		//우상으로 가거나
		if (y == 0) {
			ndir = 0;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//좌하로 간다
		else if (y == n-1) {
			ndir = 3;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
	}
	//이전으로부터 좌하로 들어왔을 때
	else if (pdir == 3) {
		//우로간다
		if (x == n-1) {
			ndir = 1;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//하로가거나
		else if (y == 0) {
			ndir = 2;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//직진하거나
		else {
			ndir = 3;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
	}
}

void move_sub(int nx, int ny, int x, int y, int ndir) {
	nx = x + dx[ndir];
	ny = y + dy[ndir];
	arr[nx][ny] = arr[x][y] + 1;
	move(nx, ny, ndir);
}