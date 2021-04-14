#include<stdio.h>

int main() {
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	// long은 int가 2바이트로 구성된 컴파일러에서 사용

	long long lln = 123451234512345;

	printf("short 출력 %d\n", sh);
	printf("int 출력 %d\n", in);
	printf("long 출력 %ld\n", ln);
	printf("longlong 출력 %lld\n", lln);
}