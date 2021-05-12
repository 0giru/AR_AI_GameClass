#include <stdio.h>

//int main() {
//	int a, b, c;
//	int max;
//
//	printf("세 정수의 최댓값을 구합니다\n");
//	printf("a의 값 : "); scanf("%d", &a);
//	printf("b의 값 : "); scanf("%d", &b);
//	printf("c의 값 : "); scanf("%d", &c);
//	max = a;
//	if (b > max) {
//		max = b;
//	}
//	if (c > max) {
//		max = c;
//	}
//	printf("최댓값은 %d 입니다.", max);
//
//	return 0;
//}

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
//int main() {
//	printf("max3(%d, %d, %d) = %d\n", 3, 2, 1, max3(3, 2, 1));
//}

int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}

	return max;
}

int main() {
	printf("%d", max4(4, 6, 2, 1));

	return 0;
}