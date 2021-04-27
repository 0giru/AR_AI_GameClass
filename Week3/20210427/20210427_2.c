#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main(int argc, char **argv) {
//	int i;
//
//	for (i = 0; i < argc; i++) {
//		printf("%s\n", argv[i]);
//	}
//	return 0;
//}

//int main() {
//	int row;
//	int col;
//	char* arrRow;
//	char* arrCol;
//
//  못푼거임

//	printf("행 개수를 입력하세요.\n");
//	scanf("%d", &row);
//	printf("열 개수를 입력하세요.\n");
//	scanf("%d", &col);
//
//	arrRow = (char*)malloc(sizeof(char) * (row + 1));
//	arrCol = (char*)malloc(sizeof(char) * (col + 1));
//
//	for (int i = 0; i < col; i++) {
//		printf("문자열을 입력하세요");
//		fgets()
//	}
//	return 0;
//}

//int checkPrime(int i);
//
//int main() {
//	int max;
//	int temp;
//	int count = 0;
//	int* sPtr = {0};
//
//	printf("양 수 입력 : ");
//	scanf("%d", &max);
//
//	temp = max / 5;
//
//	for (int j = 0; j < temp; j++) {
//		sPtr = (int*)malloc(sizeof(int) * (6));
//
//		for (int i = 0; i < 5; i++) {
//			if (count + 2 > max) {
//				*(sPtr + i) = '\0';
//				break;
//			}
//			if (checkPrime(count + 2) > 0) {
//				*(sPtr + i) = count + 2;
//				count += 1;
//			}
//			else if (checkPrime(count + 2) < 0) {
//				*(sPtr + i) = 88;
//				count += 1;
//			}
//		}
//		for (int i = 0; i < 5; i++) {
//			if (*(sPtr + i) == 88) {
//				printf("%3c", *(sPtr + i));
//			}
//			else if (*(sPtr + i) == '\0') {
//				break;
//			}
//			else {
//				printf("%3d", *(sPtr + i));
//			}
//		}
//		printf("\n");
//	}
//	free(sPtr);
//	return 0;
//}
//
//int checkPrime(int i) {
//	for (int j = 2; j < i; j++) {
//		if (i % j == 0) {
//			return -1;
//		}
//	}
//	return 1;
//}

//#include<string.h>
//
////문제 1.
//int main() {
//	char name[10];
//	int age = 0;
//
//	printf("이름을 입력하세요. : ");
//	fgets(name, sizeof(name), stdin);
//	name[strlen(name) - 1] = '\0';
//	printf("나이를 입력하세요. : ");
//	scanf("%d", &age);
//
//	printf("%s 님의 나이는 %d 살 입니다.", name, age);
//
//	return 0;
//}

////문제 2. 시침과 분침의 각도 구하기
//float Calc_Angle(int hour, int min, int sec);
//
//int main() {
//	int Hour = 0;
//	int Min = 0;
//	int Sec = 0;
//
//	printf("시, 분, 초 입력 : ");
//	scanf("%d %d %d", &Hour, &Min, &Sec);
//	if (Hour > 12) {
//		Hour -= 12;
//	}
//
//	printf("%.1lf", Calc_Angle(Hour, Min, Sec));
//
//	return 0;
//}
//
//float Calc_Angle(int hour, int min, int sec) {
//	float shour = 0;
//	float smin = 0;
//
//	shour = 30 * hour + min * 0.5;
//	smin = 30 * min / 5 + 0.1 * sec;
//
//	if (shour > smin) {
//		return shour - smin;
//	}
//	else {
//		return smin - shour;
//	}
//}

////문제 3.
//int main() {
//	int arr[10] = { 0 };
//	int quot = 131;
//	int rest = 0;
//
//	for (int i = 0; ; i++) {
//		rest = quot % 2;
//		quot = quot / 2;
//
//		if (quot < 2) {
//			arr[i] = rest;
//			arr[i + 1] = quot;
//			break;
//		}
//		arr[i] = rest;
//	}
//
//	printf("10진수 131은 이진수로 ");
//	for (int i = 9; i >= 0; i--) {
//		if (arr[i] == 1) {
//			for (int j = i; j >= 0; j--) {
//				printf("%d", arr[j]);
//			}
//			break;
//		}
//	}
//	printf("입니다.");
//
//	return 0;
//}

////문제 4.
//int main() {
//	int* sPtr;
//	int n;
//	int target;
//	int result[2];
//	int flag = 0;
//
//	printf("원소의 개수 입력 : ");
//	scanf("%d", &n);
//
//	sPtr = (int*)malloc(sizeof(int) * (n + 1));
//	
//	printf("원소 입력 : ");
//	for (int i = 0; i < n; i++) {
//		scanf("%d", sPtr + i);
//	}
//
//	printf("타겟 입력 : ");
//	scanf("%d", &target);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (*(sPtr + i) + *(sPtr + j) == target) {
//				flag = 1;
//				result[0] = i;
//				result[1] = j;
//				break;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	if (flag == 0) {
//		printf("[]");
//		return 0;
//	}
//	printf("[%d, %d]", result[0], result[1]);
//	return 0;
//}

//문제 5.
//int main() {
//	int mat[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	int result[3][3];
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			int sum = 0;
//			for (int k = 0; k < 3;k++) {
//				sum += mat[i][k];
//			}
//			for (int k = 0; k < 3; k++) {
//				sum += mat[k][j];
//			}
//			sum -= mat[i][j];
//			result[i][j] = sum;
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%3d", result[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}