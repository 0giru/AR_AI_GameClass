#include<stdio.h>

int main() {
	printf("%d\n", 12); // 십진수 12 정수로 출력
	printf("%d\n", 014); // 8진수 014 정수로 출력, 8진수는 숫자 앞에 0을 써줌
	printf("%d\n\n", 0xc); // 16진수 0xc 정수로 출력

	printf("%o\n", 12); // 8진수로 출력
	printf("%x\n", 12); // 16진수 소문자로 출력
	printf("%X\n", 12); // 16진수 대문자로 출력
}