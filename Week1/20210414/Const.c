// const�� lvalue�� ������ �� ���� �Ѵ�.

#include<stdio.h>

int main() {
	const int income = 0;
	double tax;

	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;

	printf("tax is %.1lf\n", tax);

	return 0;
	}

// �����, �ĺ���
// ex) int age;
// int : �����, age : �ĺ���
// �ĺ��ڴ� ���� �빮�ڿ� �ҹ���, ����, ����ٷ� �����
// ���ڷ� ������ �� ����.
// ������ �ĺ��ڷ� �̿��� �� ����.