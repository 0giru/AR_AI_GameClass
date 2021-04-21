#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//int main() {
//	char str[100];
//	char buf;
//
//	int strlen;
//
//	printf("출력할 문자열 입력\n");
//	gets(str);
//
//	strlen = sizeof(str) / sizeof(char);
//
//	while (1) {
//		system("cls");
//		buf = str[0];
//		for (int i = 0; i < strlen; i++) {
//			str[i] = str[i + 1];
//			if (str[i] == '\0') {
//				str[i] = buf;
//				break;
//			}
//		}
//		printf("%s", str);
//		Sleep(100);
//	}
//	return 0;
//}


//strlen = sizeof(str) / sizeof(char);

//while (1) {
//	system("cls");
//	buf = *(str + 0);
//	for (int i = 0; i < strlen; i++) {
//		*(str + i) = *(str + i + 1);
//		if (*(str + i) == '\0') {
//			*(str + i) = buf;
//			break;
//		}
//	}
//	printf("%s", str);
//	Sleep(100);
//}
//
//	return 0;
//	}

//int main() {
//	int arr[6] = {1, 2, 3, 4, 5, 6};
//	int *front;
//	int *back;
//	int strlen;
//	int buf;
//
//	strlen = sizeof(arr) / sizeof(int);
//
//	front = arr;
//	back = arr + strlen - 1;
//
//	//출력 루프
//	for (int i = 0; i < strlen; i++) {
//		printf("%d", arr[i]);
//		if (i == strlen - 1) {
//			printf("\n");
//		}
//	}
//
//	//스왑 루프
//	while (front < back) {
//		buf = *front;
//		*front = *back;
//		*back = buf;
//		front++;
//		back--;
//	}
//
//	//출력 루프
//	for (int i = 0; i < strlen; i++) {
//		printf("%d", arr[i]);
//		if (i == strlen - 1) {
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

// 함수에 배열을 인자로 넘길 경우에는 포인터로 넘겨주어야 한다(배열 명만)
// 배열 입출력을 하려면 배열 요소의 개수도 필요하다.

//void input_arr(double *pa, int size);
//void print_arr(double *pa, int size);
//double find_max(double *pa, int size);
//
//int main() {
//	double arr[5];
//	double max;
//	int size = sizeof(arr) / sizeof(double);
//
//	input_arr(arr, size);
//	max = find_max(arr, size);
//	print_arr(arr, size);
//	printf("배열의 최댓값 : %.1lf\n", max);
//
//	return 0;
//}
//
//void input_arr(double *pa, int size) {
//	int i;
//	
//	printf("%d개의 실수값 입력 : ", size);
//	for (i = 0; i < size; i++) {
//		scanf("%lf", pa + i);
//	}
//}
//
//void print_arr(double *pa, int size) {
//	printf("입력한 배열 : \n");
//	for (int i = 0; i < size; i++) {
//		printf("%.1lf ", *(pa+i));
//	}
//	printf("\n");
//}
//
//double find_max(double *pa, int size) {
//	double max;
//	int i;
//
//	max = pa[0];
//	for (i = 1; i < size; i++) {
//		if (pa[i] > max) {
//			max = pa[i];
//		}
//	}
//	return max;
//}

void input_nums(int *lotto_nums, int size);
void print_nums(int *lotto_nums, int size);
void sort(int *lotto_nums, int size);

int main() {
	int lotto_nums[6];
	int size = sizeof(lotto_nums) / sizeof(int);

	printf("번호 입력 (1~45)\n");
	input_nums(lotto_nums, size);
	sort(lotto_nums, size);
	print_nums(lotto_nums, size);

	return 0;
}

void input_nums(int *lotto_nums, int size) {
	int count = 0;

	while (1) {
		if (count == size) {
			break;
		}
		scanf("%d", lotto_nums + count);
		for (int j = 0; j < count; j++) {
			if (*(lotto_nums + j) == *(lotto_nums + count)) {
				printf("같은 번호가 있습니다.\n");
				count--;
				break;
			}
		}
		count++;
	}
}

void print_nums(int *lotto_nums, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *(lotto_nums + i));
	}
}

void sort(int *lotto_nums, int size) {
	int buf;
	int idx;

	for (int j = 0; j < size; j++) {
		int min = 46;
		//최솟값 골라내기
		for (int i = j; i < size; i++) {
			if (*(lotto_nums + i) < min) {
				min = *(lotto_nums + i);
				idx = i;
			}
		}
		buf = *(lotto_nums + j);
		*(lotto_nums + j) = min;
		*(lotto_nums + idx) = buf;
	}
}