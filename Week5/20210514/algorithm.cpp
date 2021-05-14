#include <stdio.h>

//int main() {
//	int num;
//	int i, j;
//
//	scanf("%d", &num);
//
//	for (i = 1; i < num; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j == i) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int arr[500];
//	int count = 1;
//	int num;
//	int flag = 0;
//
//	scanf("%d", &num);
//
//	arr[0] = 2;
//
//	for (int i = 3; i <= num; i++) {
//		for (int j = 0; j < count; j++) {
//			if (i % arr[j] == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1) {
//			flag = 0;
//			continue;
//		}
//		else {
//			arr[count] = i;
//			count += 1;
//		}
//	}
//
//	for (int i = 0; i < count; i++) {
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

//int isLeapYear(int year) {
//	if (year % 4 == 0) {
//		if (year % 400 == 0) {
//			if (year % 100 != 0) {
//				return 1;
//			}
//		}
//	}
//	return -1;
//}

#include<stdlib.h>

int main() {
	int num;
	int input;
	int toFind;
	int position;

	printf("입력 할 개수 : ");
	scanf("%d", &num);

	int *ptr = (int*)malloc(sizeof(int) * num);

	printf("입력 : \n");
	for (int i = 0; i < num; i++) {
		scanf("%d", &input);
		*(ptr + i) = input;
	}

	printf("탐색할 숫자 입력 : ");
	scanf("%d", &toFind);

	for (int i = 0; i < num; i++) {
		if (*(ptr + i) == toFind) {
			position = i;
		}
	}

	printf("  |");
	for (int i = 0; i < num; i++) {
		printf(" %d", i);
	}
	printf("\n---------------\n");
	for (int i = 1; i <= 2 * (position + 1); i++) {
		if (i % 2 == 1) {
			printf("  |");
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			printf("*\n");
		}
		else {
			printf("%d |", i / 2 - 1);
			for (int i = 0; i < num; i++) {
				printf(" %d", *(ptr + i));
			}
			printf("\n");
		}
	}

	printf("%d는 x[%d]에 존재합니다.", toFind, position);
}