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
//	printf("�� �� �Է� : ");
//	scanf("%d", &row);
//	printf("�� �� �Է� : ");
//	scanf("%d", &col);
//	printf("\n");
//
//	count = 1;
//	//Arr ä���
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			Arr[i][j] = count;
//			count++;
//		}
//	}
//
//	//temp ä���
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < max; j++) {
//			temp[i][j] = Arr[j][i];
//		}
//	}
//
//	//Arr ���
//	printf("A �迭 : \n");
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			printf("%d", Arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n");
//
//	printf("B �迭 : \n");
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
//	// �� �� �� ��
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { 1, 0, -1, 0 };
//int n;
//
//void move(int x, int y);
//
//int main() {
//
//
//	printf("n �Է� : ");
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
//// dir 0 : ��
//// dir 1 : ��
//// dir 2 : ��
//// dir 3 : ��
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

//������ �迭
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

//��� �� �� ����
int dx[4] = { -1, 0, 1, 1 };
int dy[4] = { 1, 1, 0, -1 };
int n;

void move(int x, int y, int pdir);
void move_sub(int nx, int ny, int x, int y, int ndir);

int main() {
	printf("�迭�� ũ�� �Է� : ");
	scanf("%d", &n);

	arr[0][0] = 1;

	//(0, 0)���δ� ������� �� ������ ���
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

	//���� �����ϸ� ����
	if (x == n-1 && y == n-1) {
		return;
	}

	//�������κ��� ������� ������ ��
	if (pdir == 0) {
		//��ΰ��ų�
		if (x == 0 && y != n-1) {
			ndir = 1;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//��������
		else if (y == n-1) {
			ndir = 2;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//�����Ѵ�
		else {
			ndir = 0;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
	}
	//�������κ��� ��� ������ ��
	else if (pdir == 1) {
		//���Ϸ� ���ų�
		if (x == 0) {
			ndir = 3;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//������� ����
		else if (x == n-1) {
			ndir = 0;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
	}
	//�������κ��� �Ϸ� ������ ��
	else if (pdir == 2) {
		//������� ���ų�
		if (y == 0) {
			ndir = 0;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//���Ϸ� ����
		else if (y == n-1) {
			ndir = 3;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
	}
	//�������κ��� ���Ϸ� ������ ��
	else if (pdir == 3) {
		//��ΰ���
		if (x == n-1) {
			ndir = 1;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//�Ϸΰ��ų�
		else if (y == 0) {
			ndir = 2;
			move_sub(x + dx[ndir], y + dy[ndir], x, y, ndir);
		}
		//�����ϰų�
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