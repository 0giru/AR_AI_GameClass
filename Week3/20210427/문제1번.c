#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���� 1.
int main() {
	char name[10];
	int age = 0;

	printf("�̸��� �Է��ϼ���. : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("���̸� �Է��ϼ���. : ");
	scanf("%d", &age);

	printf("%s ���� ���̴� %d �� �Դϴ�.", name, age);

	return 0;
}