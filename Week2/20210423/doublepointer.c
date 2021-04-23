#include <stdio.h>

//int main() {
//	int a = 10;
//	int *pi;
//	int **ppi;
//
//	pi = &a;
//	ppi = &pi;
//
//	printf("--------------------------------------------------\n");
//	printf("변수     변숫값     &연산     *연산     **연산\n");
//	printf("--------------------------------------------------\n");
//	printf("a%10d%10u\n", a, &a);
//	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
//	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
//	printf("--------------------------------------------------\n");
//
//	return 0;
//}

void swap_ptr(char **ppa, char **ppb);

int main() {
	
	char *pa = "SSSS";
	char *pb = "FFFF";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char **ppa, char **ppb) {
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

//int main() {
//	int ary[5];
//
//	printf("ary의 값 : %u\t", ary);
//	printf("	ary의 주소 : %u\n", &ary);
//	printf("ary + 1 : %u\t", ary + 1);
//	printf("	&ary + 1 : %u\n", &ary + 1);
//
//	return 0;
//}

//int main() {
//	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
//	int(*pa)[4];
//	int i, j;
//
//	pa = ary;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%5d", pa[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void swap(int *pa, int *pb);
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	printf("a : %d\n", a);
//	printf("b : %d\n", b);
//
//	swap(&a, &b);
//
//	printf("a : %d\n", a);
//	printf("b : %d\n", b);
//
//	return 0;
//}
//
//void swap(int *pa, int *pb) {
//	int temp = *pa;
//
//	*pa = *pb;
//	*pb = temp;
//}

//int main() {
//	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
//	int(*pa)[4];
//	int i, j;
//
//	pa = ary;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%5d", *(*(ary + i) + j));
//		}
//		printf("\n");
//	}
//}

//#define INF 999999999
//
//void MaxAndMin(int *MPtr, int *mPtr, int *arr);
//
//int main() {
//	int *maxPtr = NULL;
//	int *minPtr = NULL;
//	int arr[5];
//
//	printf("배열 값 입력\n");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", arr + i);
//	}
//
//	MaxAndMin(&maxPtr, &minPtr, arr);
//
//	printf("배열의 주소 : %p\n", arr);
//	printf("최댓값의 주소 : %p\n", maxPtr);
//	printf("최솟값의 주소 : %p\n", minPtr);
//
//	return 0;
//}
//
//void MaxAndMin(int **MPtr, int **mPtr, int *arr) {
//	int max = 0;
//	int maxidx = 0;
//	int min = INF;
//	int minidx = 0;
//
//	//최댓값 찾기
//	for (int i = 0; i < 5; i++) {
//		if (*(arr + i) > max) {
//			max = *(arr + i);
//			maxidx = i;
//		}
//	}
//	
//	*MPtr = arr + maxidx;
//
//	//최솟값 찾기
//	for (int i = 0; i < 5; i++) {
//		if (*(arr + i) < min) {
//			min = *(arr + i);
//			minidx = i;
//		}
//	}
//
//	*mPtr = arr + minidx;
//}