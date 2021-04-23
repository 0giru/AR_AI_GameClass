#include<stdio.h>
#include<stdlib.h>
#include<string.h>

////malloc, free
//int main() {
//	int* pi;
//	double* pd;
//
//	pi = (int *)malloc(sizeof(int));
//	/*
//	malloc 함수의 원형
//
//	void* malloc(unsigned int size);
//	*/
//
//	if (pi == NULL) {
//		printf("메모리 부족\n");
//		exit(1);
//	}
//	pd = (double *)malloc(sizeof(double));
//
//	*pi = 10;
//	*pd = 3.4;
//
//	printf("정수형으로 사용 : %d\n", *pi);
//	printf("실수형으로 사용 : %.1lf\n", *pd);
//
//	free(pi);
//	free(pd);
//
//	/*
//	free 함수의 원형
//
//	void free(void *p);
//	*/
//
//	return 0;
//}

////동적 할당한 공간을 배열처럼 이용하기
//int main() {
//	int* pi;
//	int sum = 0;
//
//	pi = (int*)malloc(5 * sizeof(int));
//	if (pi == NULL) {
//		exit(1);
//	}
//	printf("다섯명의 나이를 입력하세요\n");
//
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", pi + i);
//		sum += *(pi + i);
//	}
//	printf("평균 나이 : %.1lf", (double)sum / (double)5 );
//	free(pi);
//
//	return 0;
//}

////메모리 공간을 0으로 초기화 할당하는 calloc
////할당된 메모리 공간의 크기를 변경하는 realloc
//int main() {
//	//calloc 함수 원형
//	//void* calloc(unsigned int, unsigned int);
//	int* pi;
//	int size = 5;
//	int count = 0;
//	int num;
//
//	pi = (int*)calloc(size, sizeof(int));
//	while (1) {
//		printf("양수만 입력하세요 => ");
//		scanf("%d", &num);
//		if (num <= 0) {
//			break;
//		}
//		if (count == size) {
//			size += 5;
//			pi = (int*)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;
//	}
//		for (int i = 0; i < count; i++) {
//			printf("%5d", pi[i]);
//		}
//	free(pi);
//	return 0;
//}

int main() {
	int arrsize;
	char* arrPtr;

	printf("문자열의 최대 크기를 입력하세요.\n");
	scanf("%d", &arrsize);
	getchar();

	arrPtr = (char*)malloc((arrsize + 1) * sizeof(char));

	fgets(arrPtr, sizeof(arrsize), stdin);
	arrPtr[sizeof(arrPtr) - 1] = "\0";

	printf("%s\n", arrPtr);

	return 0;
}