#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int* sPtr;
	int n;
	int target;
	int result[2];
	int flag = 0;

	printf("원소의 개수 입력 : ");
	scanf("%d", &n);

	sPtr = (int*)malloc(sizeof(int) * (n + 1));
	
	printf("원소 입력 : ");
	for (int i = 0; i < n; i++) {
		scanf("%d", sPtr + i);
	}

	printf("타겟 입력 : ");
	scanf("%d", &target);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(sPtr + i) + *(sPtr + j) == target) {
				flag = 1;
				result[0] = i;
				result[1] = j;
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}
	if (flag == 0) {
		printf("[]");
		return 0;
	}
	printf("[%d, %d]", result[0], result[1]);
	return 0;
}