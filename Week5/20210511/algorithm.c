#include <stdio.h>

//int main() {
//	int a, b, c;
//	int max;
//
//	printf("�� ������ �ִ��� ���մϴ�\n");
//	printf("a�� �� : "); scanf("%d", &a);
//	printf("b�� �� : "); scanf("%d", &b);
//	printf("c�� �� : "); scanf("%d", &c);
//	max = a;
//	if (b > max) {
//		max = b;
//	}
//	if (c > max) {
//		max = c;
//	}
//	printf("�ִ��� %d �Դϴ�.", max);
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