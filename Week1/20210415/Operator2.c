#include <stdio.h>

int main() {
	////type casting
	//int a = 10;
	//double d = 99.9;

	//a = (int)d;
	/*===========================================================================*/
	//int a = 20, b = 3;
	//double res;

	//res = ((double)a) / ((double)b);
	//printf("a = %d, b = %d\n", a, b);
	//printf("a / b�� ��� : %.1lf\n", res);

	//a = (int)res;
	//printf("(int) %.1lf�� ��� : %d\n", res, a);
	/*===========================================================================*/
	//sizeof
	//int a = 10;
	//double b = 3.4;

	//printf("int�� ������ ũ�� : %d\n", sizeof(a));
	//printf("double�� ������ ũ�� : %d\n", sizeof(b));
	//printf("������ ����� ũ�� : %d\n", sizeof(10));
	//printf("������ �ᱣ���� ũ�� : %d\n", sizeof(1.5+3.4));
	//printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
	/*===========================================================================*/
	//���մ��Կ�����
	// += -= *= /= %=

	//int a = 10, b = 20;
	//int res = 2;

	//a += 20;
	//res *= b + 10; //res *= (b+10)

	//printf("a = %d, b = %d\n", a, b);
	//printf("res = %d\n", res);
	/*===========================================================================*/
	////�޸� ������
	//int a = 10, b = 20;
	//int res;

	////���ʺ��� �����ʱ��� ������� �����ؼ� �������� �����
	//res = (++a, ++b);

	//printf("a:%d, b:%d\n", a, b);
	//printf("res:%d\n", res);
	/*===========================================================================*/
	//���� ������
	//int a = 10, b = 20, res;

	//res = (a > b) ? a : b;
	//printf("ū �� : %d\n", res);
	//===================================================================================

	//int a, b, c;
	//int temp;

	//scanf("%d%d%d", &a, &b, &c);

	//// ����(����)������
	//temp = (a > b) ? a : b;
	//temp = (c > temp) ? c : temp;

	//printf("%d", temp);
	/*===========================================================================*/
	////��Ʈ ������
	//int a = 10;
	//int b = 12;

	//printf("a & b : %d\n", a & b);
	//printf("a ^ b : %d\n", a ^ b);
	//printf("a | b : %d\n", a | b);
	//printf("~a : %d\n", ~a);
	//printf("a << 1 : %d\n", a << 1);
	//printf("a >> 2 : %d\n", a >> 2);
	/*===========================================================================*/
	//int res;

	//res = (sizeof(long) > sizeof(short)) ? 1 : 0;
	//(res == 1) ? (printf("long")) : (printf("short"));

	//int seats = 70;
	//int audience = 65;
	//double rate;

	//rate = (double)audience / (double)seats * 100;
	//printf("%.1lf", rate);
	/*===========================================================================*/
	double weight;
	double height;
	double BMI;
	
	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf%lf", &weight, &height);

	height /= (double)100;

	BMI = (weight) / ((height) * (height));

	(BMI >= (double)20 && BMI < (double)25) ? (printf("ǥ���Դϴ�.")) : (printf("ü�� ������ �ʿ��մϴ�."));

	return 0;
}