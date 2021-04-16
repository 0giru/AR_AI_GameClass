#include<stdio.h>

int main() {
	int n;
	int flag;
	int count = 0;

	printf("2 이상의 정수 입력 : ");
	scanf("%d", &n);

	for (int i = 2; i<n; i++) {
		flag = 0;

		for (int j = 2; j<i; j++) {
			if (i%j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("%2d ",i);
			count++;
			if (count == 5) {
				printf("\n");
				count = 0;
			}
		}
	}

	return 0;
}