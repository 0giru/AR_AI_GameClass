#include<stdio.h>

//int sum(int x, int y);
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	int result = sum(a, b);
//
//	printf("%d", result);
//	return 0;
//}
//
//int sum(int x, int y) {
//	int temp = x + y;
//	return temp;
//}

//void abs();
//
//int n;
//
//int main() {
//	
//	abs();
//
//	return 0;
//}
//
//void abs() {
//	while (1) {
//		printf("\n���� �Է� : ");
//		scanf("%d", &n);
//
//		if (n == 0) {
//			return;
//		}
//		else {
//			if (n > 0) {
//				printf("���밪�� : %d �Դϴ�.\n", n);
//				printf("�����Ϸ��� 0�� �Է��ϼ���\n");
//			}
//			else if (n < 0) {
//				printf("���밪�� : %d �Դϴ�\n", -n);
//				printf("�����Ϸ��� 0�� �Է��ϼ���\n");
//			}
//		}
//	}
//}

//int result;
//
//int main() {
//
//	int n;
//
//	printf("���� �Է� : \n");
//	scanf("%d", &n);
//
//	sum(n);
//
//	printf("1���� %d������ ���� %d�Դϴ�.\n", n, result);
//
//	return 0;
//}
//
//int sum(int n) {
//	if (n == 0) {
//		return;
//	}
//
//	result += n;
//
//	sum(n-1);
//}

//int dp[1000001] = {0};
//
//int fibo(int n);
//
//int main() {
//
//	int n;
//	int result;
//
//	printf("�� �� �Է� : ");
//	scanf("%d", &n);
//
//	result = fibo(12*n);
//
//	printf("%d�� �� �����̴� %d �����Դϴ�.\n", n, result);
//
//	return 0;
//}
//
//int fibo(int n) {
//	if (n == 0 || n == 1) {
//		return 1;
//	}
//	if (dp[n] != 0) {
//		return dp[n];
//	}
//	else {
//		dp[n] = fibo(n-1) + fibo(n-2);
//		return dp[n];
//	}
//}
//
//int fibo(int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else if (n == 1) {
//		return 1;
//	}
//	else {
//		return fibo(n - 1) + fibo(n - 2);
//	}
//}
//
//int main() {
//
//}

int ALU(int menu);
void Devide(int menu);

int main() {

	int m;
	int result;

	while (1) {
		printf("�޴� ����\n");
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ������\n");
		printf("5. ����\n\n");
	
		scanf("%d", &m);

		if (m == 4) {
			Devide(m);
		}
		else if(m == 1 || m == 2 || m == 3 || m == 5) {
			result = ALU(m);
			if (result == -1) {
				break;
			}
			else {
				printf("%d\n\n", result);
			}
		}
		else {
			printf("Out of bound\n\n");
		}
	}
	return 0;
}

int ALU(int menu) {
	int n, m;

	if (menu == 1) {
		printf("�� �Է�\n");
		scanf("%d%d", &n, &m);
		return n + m;
	}
	else if (menu == 2) {
		printf("�� �Է�\n");
		scanf("%d%d", &n, &m);
		return n - m;
	}
	else if (menu == 3) {
		printf("�� �Է�\n");
		scanf("%d%d", &n, &m);
		return n * m;
	}
	else if (menu == 5) {
		return -1;
	}
}

void Devide(int menu) {
	double n, m;

	printf("�� �Է�\n");
	scanf("%lf%lf", &n, &m);
	if (m == 0) {
		printf("zero devide error\n\n");
		return;
	}
	else {
		printf("%.2lf\n\n", (n/m));
	}
}