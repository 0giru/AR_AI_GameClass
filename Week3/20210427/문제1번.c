#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//문제 1.
int main() {
	char name[10];
	int age = 0;

	printf("이름을 입력하세요. : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("나이를 입력하세요. : ");
	scanf("%d", &age);

	printf("%s 님의 나이는 %d 살 입니다.", name, age);

	return 0;
}