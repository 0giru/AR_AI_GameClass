#include <stdio.h>

////putchar
//int main() {
//	int ch;
//
//	ch = getchar();
//
//	printf("�Է��� ���� : ");
//	putchar(ch);
//	putchar('\n');
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	while (1) {
//		int ch = getchar();
//		if (ch == -1) {
//			break;
//		}
//		printf("%d\n", i++);
//	}
//}

// printf, scanf ��� int���� ��ȯ�Ѵ�.
// �� �Լ� ��� Ctrl + Z�� �Է��ϸ� -1�� ��ȯ�Ѵ�.

//int main() {
//	int i = 0;
//	while (1) {
//		int ch = getchar();
//		if (ch == EOF) {
//			break;
//		}
//		printf("%d\n", i++);
//	}
//}

////getchar�� �̿��� ���ڿ� �Է�
//int main() {
//	char str[7];
//
//	my_gets(str, sizeof(str));
//	printf("�Է��� ���ڿ� : %s", str);
//
//	return 0;
//}
//
//void my_gets(char *str, int size) {
//	int ch;
//	int i = 0;
//
//	ch = getchar();
//	while ((ch!='\n') && (i < size -1)) {
//		str[i] = ch;
//		i++;
//		ch = getchar();
//	}
//	str[i] = '\0'
//}

//�Է� ������ ���� �����
//int main() {
//	int num, grade;
//
//	printf("�й� �Է� : ");
//	scanf("%d", &num);
//	getchar();
//	printf("���� �Է� : ");
//	grade = getchar();
//	printf("�й� : %d, ���� : %c", num, grade);
//
//	return 0;
//}

//int main() {
//	char ch;
//	int i;
//
//	for (int i = 0; i < 3; i++) {
//		scanf("%c", &ch);
//		printf("%c", ch);
//	}
//}

int main() {
	
	int ch;
	int count;
	int result = 0;

	while (1) {
		printf("�ܾ� �Է� : (�ִ� 100��)\n");
		count = 0;
		while (1) {
			ch = getchar();
			count++;
			if (ch == '\n') {
				if (count - 1 > result) {
					result = count - 1;
				}
				break;
			}
			if (ch == EOF) {
				printf("���� �� �ܾ��� ���� : %d", result);
				break;
			}
		}
	}

	return 0;
}