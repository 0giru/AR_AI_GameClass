#include<stdio.h>

//int max3(int a, int b, int c) {
//	int max = a;
//	if (b > max) {
//		max = b;
//	}
//	if (c > max) {
//		max = c;
//	}
//	return max;
//}
//
//int min3(int a, int b, int c) {
//	int min = a;
//	if (b < min) {
//		min = b;
//	}
//	if (c < min) {
//		min = c;
//	}
//	return min;
//}
//
//int getMiddle(int a, int b, int c) {
//	int temp1 = max3(a, b, c);
//	int temp2 = min3(a, b, c);
//
//	if (temp1 == temp2) {
//		return temp1;
//	}
//	else {
//		if (a < temp1) {
//			return a;
//		}
//		else if (b < temp1) {
//			return b;
//		}
//		else return c;
//	}
//}
//

//int gaussianSum(int n, int m) {
//	if (n < 0 || m < 0) {
//		return -1;
//	}
//	int result = (m + n) * (m - n + 1) / 2;
//	return result;
//}

void spira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j >= 1; j--) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * i -1 ; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
}

void nrpira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i - 1; j > 0 ; j--) {
			printf(" ");
		}
		for (int j = (n - i + 1) * 2 - 1; j >= 1; j--) {
			printf("%d", i);
		}
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);

	spira(n);
	nrpira(n);

	return 0;
}

