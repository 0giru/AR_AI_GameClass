#include<stdio.h>

int main() {
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	// long�� int�� 2����Ʈ�� ������ �����Ϸ����� ���

	long long lln = 123451234512345;

	printf("short ��� %d\n", sh);
	printf("int ��� %d\n", in);
	printf("long ��� %ld\n", ln);
	printf("longlong ��� %lld\n", lln);
}