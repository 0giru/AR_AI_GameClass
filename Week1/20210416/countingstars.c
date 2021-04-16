#include <stdio.h>

//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 1; i<=n; i++) {
//		for (int j = 0; j<i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = (n-1); i>=1; i--) {
//		for (int j = 0; j<i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = n - i; j >= 0; j--) {
//			printf(" ");
//		}
//		for (int j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf(" ");
//		}
//		for (int j = n - i; j >= 0; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if ((i == j) || (i + j == n-1)) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	printf("\n");
//}

int main() {
	int A;
	int Z;

	for (int i = 0; i<= 9; i++) {
		printf("A : %d | Z : %d\n", i, 9-i);
	}
}