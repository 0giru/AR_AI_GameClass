#include <stdio.h>
#include <string.h>

void convert(char *arr, char *container, int size);

int main() {
	char word1[10];
	char word2[10];
	char word3[10];

	char temp1[10];
	char temp2[10];
	char temp3[10];

	int len1;
	int len2;
	int len3;

	printf("세 단어 입력 : ");
	scanf("%s", word1);
	scanf("%s", word2);
	scanf("%s", word3);

	len1 = sizeof(word1) / sizeof(char);
	len2 = sizeof(word2) / sizeof(char);
	len3 = sizeof(word3) / sizeof(char);

	convert(word1, temp1, len1);
	convert(word2, temp2, len1);
	convert(word3, temp3, len1);

	if (strcmp(temp1, temp2) < 0) {
		if (strcmp(temp1, temp3) < 0) {
			if (strcmp(temp2, temp3)) {
				printf("%s, %s, %s\n", word1, word2, word3);
			}
			else {
				printf("%s, %s, %s\n", word1, word3, word2);
			}
		}
		else {
			printf("%s, %s, %s\n", word3, word1, word2);
		}
	}
	else {
		if (strcmp(temp2, temp3) < 0 ) {
			if (strcmp(temp1, temp3) < 0) {
				printf("%s, %s, %s\n", word2, word1, word3);
			}
			else {
				printf("%s, %s, %s\n", word2, word3, word1);
			}
		}
		else {
			printf("%s, %s, %s\n", word3, word2, word1);
		}
	}

	return 0;
}

void convert(char *arr, char *container, int size) {
	for (int i = 0; i < size; i++) {
		if (*(arr + i) < 97) {
			*(container + i) = *(arr + i) - 32;
		}
		else {
			*(container + i) = *(arr + i);
		}
	}
}