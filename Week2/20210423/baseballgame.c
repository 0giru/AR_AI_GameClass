#include <stdio.h>
#include <stdlib.h>

int com[3];
int user[3];

void Random(int *arr);
void Random(int* arr);

int main() {
	int strk;
	int ball;
	int outcount = 0;
	int flag = 0;

	srand((unsigned int)time(NULL));

	Random(com);

	////��ǻ�� ���� Ȯ��
	//printf("��ǻ�� : ");
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", *(com + i));
	//}
	//printf("\n\n");

	//�� ����
	while (1) {
		strk = 0;
		ball = 0;

		//����� ���� �Է�
		for (int i = 0; i < 3; i++) {
			scanf("%d", (user + i));
		}

		if (Duplicated(user) < 0) {
			printf("�Է� �ߺ�, ���ڸ� �ٽ� �Է��ϼ���\n\n");
			continue;
		}
		else {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (*(user + i) == *(com + j)) {
						if (i == j) {
							strk++;
							break;
						}
						else {
							ball++;
							break;
						}
					}
					else {
						outcount++;
					}
				}
			}
			if (outcount == 9) {
				printf("out\n");
				break;
			}
			else {
				if (strk == 3) {
					printf("����\n");
					break;
				}
				printf("%dS %dB\n\n", strk, ball);
				outcount = 0;
				continue;
			}
		}
	}
	return 0;
}

void Random(int* arr) {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;


	while (1) {
		num1 = (rand() % 9) + 1;
		if (num1 == num2 || num1 == num3) {
			continue;
		}
		else {
			break;
		}
	}
	while (1) {
		num2 = (rand() % 9) + 1;
		if (num2 == num1 || num2 == num3) {
			continue;
		}
		else {
			break;
		}
	}
	while (1) {
		num3 = (rand() % 9) + 1;
		if (num3 == num1 || num3 == num1) {
			continue;
		}
		else {
			break;
		}
	}

	*(arr + 0) = num1;
	*(arr + 1) = num2;
	*(arr + 2) = num3;
}
int Duplicated(int* arr) {

	//����� ���� �ߺ� �˻�
	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 3; j++) {
			if (*(arr + i) == *(arr + j)) {
				return -1;
			}
		}
	}
	return 0;
}