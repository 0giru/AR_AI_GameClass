#include<stdio.h>

int main() {
	int a, b;
	a = 22;
	{
		int a;
		int c;
		a = 11;
		c = 99;
		printf("%d\n", a);
	}
	printf("%d\n", a);

	return 0;
}