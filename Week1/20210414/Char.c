#include <stdio.h>
#include <string.h>

int main() {
	char fruit[20] = "apple";
	// ���ڿ��� �������� NULL���ڰ� �ԷµǹǷ� ��ĭ �� ��� ��������.
	// ����Ϸ��� ���� ū ���ڿ����� ��ĭ �� ũ�� ��������
	
	printf("fruit : %s\n", fruit);

	strcpy(fruit, "banana");
	// strcpy�� ���ڿ��� �����Ѵ�.

	printf("fruit : %s\n", fruit);

	return 0;
}