#include <stdio.h>

// �Լ��� �ּҸ� ������ �ִ� ������
// ȣ���ϴ� �Լ��� ���� �ּҸ� ������ �ִ�.
// �Լ��� �ּ� ������ �ٲپ� ȣ���� �� �ִ�.

//int sum(int, int);
//int mul(int, int);
//int sub(int, int);
//int div(int, int);
//
//int main() {
//	int(*fp)(int, int); //���� ������ int, ���ڷ� int �ΰ��� ������ ������
//	int res;
//
//	fp = sum;
//	res = fp(10, 10);
//	printf("result : %d\n", res);
//
//	fp = mul;
//	res = fp(10, 10);
//	printf("result : %d\n", res);
//
//	fp = sub;
//	res = fp(10, 10);
//	printf("result : %d\n", res);
//
//	fp = div;
//	if (fp(10, 0) < 0 ) {
//		printf("result : zero divide error\n");
//	}
//	else {
//		printf("result : %d\n", fp(10, 0));
//	}
//
//	return 0;
//}
//
//int sum(int a, int b) {
//	return (a + b);
//}
//
//int mul(int a, int b) {
//	return (a * b);
//}
//
//int sub(int a, int b) {
//	return (a - b);
//}
//
//int div(int a, int b) {
//	if (b != 0) {
//		return a / b;
//	}
//	else {
//		return -1;
//	}
//}

//// �ϴ� �ڷ����� ������ ���� �޸𸮸� ����Ű�� �Ŀ� ����ȯ���� �ڷ����� �������ش�.
//// �����͸� �Է��� ������ �ּҸ� ���� ������ ����� ������ �ڷ����� ǥ������� �Ѵ�.
//int main() {
//	int a = 10;
//	double b = 3.5;
//	void *vp; //void�� ������
//
//	vp = &a; //void�� �����Ϳ� int�� �������� �ּ� ����
//	printf("a : %d\n", *(int *)vp); //����ȯ �� �������� �� ���
//
//	vp = &b; //void�� �����Ϳ� double�� �������� �ּ� ����
//	printf("b : %.1lf\n", *(double *)vp); //����ȯ �� �������� �� ���
//
//	return 0;
//}

//#include <string.h>
//
//void swap(char* arr, void *par, void *par2);
//
//int main() {
//	int age1, age2;
//	double height1, height2;
//
//	printf("ù ��° ����� ���̿� Ű �Է� : \n");
//	scanf("%d %lf", &age1, &height1);
//
//	printf("�� ��° ����� ���̿� Ű �Է� : \n");
//	scanf("%d %lf", &age2, &height2);
//
//	swap("int", &age1, &age2);
//	swap("double", &height1, &height2);
//
//	printf("ù ��° ����� ���̿� Ű : %d %.1lf\n", age1, height1);
//	printf("�� ��° ����� ���̿� Ű : %d %.1lf\n", age2, height2);
//}
//
//void swap(char* arr, void *par1, void *par2) {
//	if (strcmp(arr, "int") == 0) {
//		int temp;
//		temp = *(int*)par1;
//		*(int*)par1 = *(int*)par2;
//		*(int*)par2 = temp;
//	}
//	else if (strcmp(arr, "double") == 0) {
//		double temp;
//		temp = *(double*)par1;
//		*(double*)par1 = *(double*)par2;
//		*(double*)par2 = temp;
//	}
//}

//int main() {
//	char *str1 = "hello";
//	char *str2 = "hello";
//
//	printf("%p\n", str1);
//	printf("%p\n", str2);
//
//	return 0;
//}
