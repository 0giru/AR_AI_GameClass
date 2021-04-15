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
	//printf("a / b의 결과 : %.1lf\n", res);

	//a = (int)res;
	//printf("(int) %.1lf의 결과 : %d\n", res, a);
	/*===========================================================================*/
	//sizeof
	//int a = 10;
	//double b = 3.4;

	//printf("int형 변수의 크기 : %d\n", sizeof(a));
	//printf("double형 변수의 크기 : %d\n", sizeof(b));
	//printf("정수형 상수의 크기 : %d\n", sizeof(10));
	//printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5+3.4));
	//printf("char 자료형의 크기 : %d\n", sizeof(char));
	/*===========================================================================*/
	//복합대입연산자
	// += -= *= /= %=

	//int a = 10, b = 20;
	//int res = 2;

	//a += 20;
	//res *= b + 10; //res *= (b+10)

	//printf("a = %d, b = %d\n", a, b);
	//printf("res = %d\n", res);
	/*===========================================================================*/
	////콤마 연산자
	//int a = 10, b = 20;
	//int res;

	////왼쪽부터 오른쪽까지 순서대로 연산해서 마지막이 결과값
	//res = (++a, ++b);

	//printf("a:%d, b:%d\n", a, b);
	//printf("res:%d\n", res);
	/*===========================================================================*/
	//조건 연산자
	//int a = 10, b = 20, res;

	//res = (a > b) ? a : b;
	//printf("큰 값 : %d\n", res);
	//===================================================================================

	//int a, b, c;
	//int temp;

	//scanf("%d%d%d", &a, &b, &c);

	//// 조건(삼항)연산자
	//temp = (a > b) ? a : b;
	//temp = (c > temp) ? c : temp;

	//printf("%d", temp);
	/*===========================================================================*/
	////비트 연산자
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
	
	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%lf%lf", &weight, &height);

	height /= (double)100;

	BMI = (weight) / ((height) * (height));

	(BMI >= (double)20 && BMI < (double)25) ? (printf("표준입니다.")) : (printf("체중 관리가 필요합니다."));

	return 0;
}