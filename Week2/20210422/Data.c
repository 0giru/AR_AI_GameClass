#include<stdio.h>

//void assign10(void);
//void assign20(void);
//
//int a;
//
//int main() {
//	printf("�Լ� ȣ�� �� a �� : %d\n", a);
//
//	assign10();
//	assign20();
//
//	printf("�Լ� ȣ�� �� a�� : %d\n", a);
//
//	return 0;
//}
//
//void assign10() {
//	a = 10;
//}
//
//void assign20() {
//	int a;
//
//	a = 20;
//}

////static ���� �̿��� �� ����
//void auto_func();
//void static_func();
//
//int main() {
//	int i;
//
//	printf("auto ������ ����� �Լ�\n");
//	for (int i = 0; i < 3; i++) {
//		auto_func();
//	}
//
//	printf("static ������ ����� �Լ�\n");
//	for (int i = 0; i < 3; i++) {
//		static_func();
//	}
//
//	return 0;
//}
//
//void auto_func() {
//	auto int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//
//void static_func() {
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}

//register ������ �̿�
//register ������ cpu�� �������Ϳ� ������ �����Ѵ�.
//�ݺ����� ����ϴ� ������ ���� ��� Ƚ���� ���� �� ����ϸ� ����

/*
1. ���� ������ �������� ������ ������ �� ����.
2. �������� ������ �ּҸ� ���� �� ����. <- �޸𸮿� �ִ� ���� �ƴϹǷ�
3. ���������� ��� ���δ� �����Ϸ� ����. �츮�� �����ص� �����Ϸ� �Ǵ����� �����Ѵ�.
*/

// call by value
// call by reference

//int main() {
//	int score[3][4];
//	int total;
//	double avg;
//
//	for (int i = 0; i < 3; i++) {
//		printf("4���� ���� �Է�\n");
//		for (int j = 0; j < 4; j++) {
//			scanf("%d", &score[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		total = 0;
//		for (int j = 0; j < 4; j++) {
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("����  : %d, ��� : %.2lf\n", total, avg);
//	}
//
//	return 0;
//}
