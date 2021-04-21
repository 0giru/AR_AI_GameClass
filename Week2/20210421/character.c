#include <stdio.h>

////putchar
//int main() {
//	int ch;
//
//	ch = getchar();
//
//	printf("입력한 문자 : ");
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

// printf, scanf 모두 int형을 반환한다.
// 두 함수 모두 Ctrl + Z를 입력하면 -1을 반환한다.

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

////getchar를 이용한 문자열 입력
//int main() {
//	char str[7];
//
//	my_gets(str, sizeof(str));
//	printf("입력한 문자열 : %s", str);
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

//입력 버퍼의 내용 지우기
//int main() {
//	int num, grade;
//
//	printf("학번 입력 : ");
//	scanf("%d", &num);
//	getchar();
//	printf("학점 입력 : ");
//	grade = getchar();
//	printf("학번 : %d, 학점 : %c", num, grade);
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
		printf("단어 입력 : (최대 100자)\n");
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
				printf("가장 긴 단어의 길이 : %d", result);
				break;
			}
		}
	}

	return 0;
}