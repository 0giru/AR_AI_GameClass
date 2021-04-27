#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int arr[10] = { 0 };
	int quot = 131;
	int rest = 0;

	for (int i = 0; ; i++) {
		rest = quot % 2;
		quot = quot / 2;

		if (quot < 2) {
			arr[i] = rest;
			arr[i + 1] = quot;
			break;
		}
		arr[i] = rest;
	}

	printf("10진수 131은 이진수로 ");
	for (int i = 9; i >= 0; i--) {
		if (arr[i] == 1) {
			for (int j = i; j >= 0; j--) {
				printf("%d", arr[j]);
			}
			break;
		}
	}
	printf("입니다.");

	return 0;
}