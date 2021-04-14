// const는 lvalue를 수정할 수 없게 한다.

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

// 예약어, 식별자
// ex) int age;
// int : 예약어, age : 식별자
// 식별자는 영문 대문자와 소문자, 숫자, 언더바로 만든다
// 숫자로 시작할 수 없다.
// 예약어는 식별자로 이용할 수 없다.