#include<stdio.h>

int main() {
	printf("%d\n", 12); // ������ 12 ������ ���
	printf("%d\n", 014); // 8���� 014 ������ ���, 8������ ���� �տ� 0�� ����
	printf("%d\n\n", 0xc); // 16���� 0xc ������ ���

	printf("%o\n", 12); // 8������ ���
	printf("%x\n", 12); // 16���� �ҹ��ڷ� ���
	printf("%X\n", 12); // 16���� �빮�ڷ� ���
}