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
//	malloc �Լ��� ����
//
//	void* malloc(unsigned int size);
//	*/
//
//	if (pi == NULL) {
//		printf("�޸� ����\n");
//		exit(1);
//	}
//	pd = (double *)malloc(sizeof(double));
//
//	*pi = 10;
//	*pd = 3.4;
//
//	printf("���������� ��� : %d\n", *pi);
//	printf("�Ǽ������� ��� : %.1lf\n", *pd);
//
//	free(pi);
//	free(pd);
//
//	/*
//	free �Լ��� ����
//
//	void free(void *p);
//	*/
//
//	return 0;
//}

////���� �Ҵ��� ������ �迭ó�� �̿��ϱ�
//int main() {
//	int* pi;
//	int sum = 0;
//
//	pi = (int*)malloc(5 * sizeof(int));
//	if (pi == NULL) {
//		exit(1);
//	}
//	printf("�ټ����� ���̸� �Է��ϼ���\n");
//
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", pi + i);
//		sum += *(pi + i);
//	}
//	printf("��� ���� : %.1lf", (double)sum / (double)5 );
//	free(pi);
//
//	return 0;
//}

////�޸� ������ 0���� �ʱ�ȭ �Ҵ��ϴ� calloc
////�Ҵ�� �޸� ������ ũ�⸦ �����ϴ� realloc
//int main() {
//	//calloc �Լ� ����
//	//void* calloc(unsigned int, unsigned int);
//	int* pi;
//	int size = 5;
//	int count = 0;
//	int num;
//
//	pi = (int*)calloc(size, sizeof(int));
//	while (1) {
//		printf("����� �Է��ϼ��� => ");
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

	printf("���ڿ��� �ִ� ũ�⸦ �Է��ϼ���.\n");
	scanf("%d", &arrsize);
	getchar();

	arrPtr = (char*)malloc((arrsize + 1) * sizeof(char));

	fgets(arrPtr, sizeof(arrsize), stdin);
	arrPtr[sizeof(arrPtr) - 1] = "\0";

	printf("%s\n", arrPtr);

	return 0;
}