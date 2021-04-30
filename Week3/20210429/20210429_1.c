#include<stdio.h>

//int main() {
//	FILE *fp;
//
//	fp = fopen("data\\a.txt","w");
//
//	if (fp == NULL) {
//		printf("파일이 열리지 않았습니다\n");
//		return 1;
//	}
//	printf("파일이 열렸습니다.");
//	fclose(fp);
//
//	return 0;
//}

//int main() {
//	FILE *fp;
//	int ch;
//
//	fp = fopen("\data\\a.txt", "w");
//
//	if (fp == NULL) {
//		printf("파일이 열리지 않았습니다.\n");
//		return 1;
//	}
//
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF) {
//			break;
//		}
//		putchar(ch);
//	}
//	fclose(fp);
//
//	return 0;
//}

//int main() {
//	FILE *fp;
//	char str[] = "babananana";
//	int i;
//
//	fp = fopen("b1.txt", "wb");
//	if (fp == NULL) {
//		printf("flail\n");
//		return 1;
//	}
//	printf("success");
//	i = 0;
//	while (str[i] != '\0') {
//		fputc(str[i], fp);
//		i++;
//	}
//	fputc('\n', fp);
//	fclose(fp);
//
//	return 0;
//}

//int main() {
//	FILE *fp;
//	int arr[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
//	int i, res;
//
//	fp = fopen("a.txt", "wb");
//	for (i = 0; i < 10; i++) {
//		fputc(arr[i], fp);
//	}
//	fclose(fp);
//
//	fp = fopen("a.txt", "rt");
//	while (1) {
//		res = fgetc(fp);
//		if (res == EOF) {
//			break;
//		}
//		printf("%4d", res);
//	}
//	fclose(fp);
//
//	return 0;
//}

//int main() {
//	FILE *fp;
//	char str[20];
//
//	fp = fopen("a.txt", "a+");
//	if (fp == NULL) {
//		printf("failed");
//		return 1;
//	}
//
//	while (1) {
//		printf("과일 이름 : ");
//		scanf("%s", str);
//		if (strcmp(str, "end") == 0) {
//			break;
//		}
//		else if (strcmp(str, "list") == 0) {
//			fseek(fp, 0, SEEK_SET);
//			while (1) {
//				fgets(str, sizeof(str), fp);
//				if (feof(fp)) {
//					break;
//				}
//				printf("%s", str);
//			}
//		}
//		else {
//			fprintf(fp, "%s\n", str);
//		}
//	}
//	fclose(fp);
//
//	return 0;
//}

//#define max 10
//#include<string.h>
//
//void check(char* word) {
//	if (word[strlen(word) - 1] == '\n') {
//		word[strlen(word) - 1] = '\0';
//	}
//	else {
//		return;
//	}
//}
//
//int main() {
//	FILE *fpa;
//	FILE *fpb;
//	FILE *fpc;
//	char word[20];
//	char temp1[20];
//	char temp2[20];
//	int count = 0;
//	int flag = 0;
//
//	fpa = fopen("a.txt", "r");
//	fpb = fopen("b.txt", "r");
//	if (fpb == NULL) {
//		printf("b.txt open failed");
//	}
//	
//	fpc = fopen("c.txt", "a+");
//	if (fpc == NULL) {
//		printf("c.txt open failed");
//	}
//
//	while (1) {
//		//b.txt의 문자 받아오기
//		fgets(temp2, sizeof(temp2), fpb);
//		if (feof(fpb)) {
//			break;
//		}
//		check(temp2);
//
//		fseek(fpa, 0, SEEK_SET);
//		while (1) {
//			flag = 0;
//			//a.txt의 문자 받아오기
//			fgets(temp1, sizeof(temp1), fpa);
//			if (feof(fpa)) {
//				break;
//			}
//			check(temp1);
//			if (strcmp(temp1, temp2) == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) {
//			fprintf(fpc, "%s\n", temp2);
//		}
//		
//	}
//	return 0;
//}

//int main() {
//	FILE* fp;
//	FILE* fp2;
//	int num2;
//	char arr[20];
//
//	fp = fopen("99.txt", "w");
//
//	for (int i = 2; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			fprintf(fp, "%d * %d = %d\n", i, j, i * j);
//		}
//	}
//
//	fclose(fp);
//
//	printf("출력을 원하는 구구단은?\n");
//	scanf("%d", &num2);
//
//	fp2 = fopen("99.txt", "r");
//
//	while (1) {
//		fgets(arr, sizeof(arr), fp2);
//		if (feof(fp2)) {
//			break;
//		}
//		arr[strlen(arr) - 1] = '\0';
//
//		if (arr[0] == num2 + '0') {
//			printf("%d단\n", num2);
//			printf("===========\n");
//			printf("%s\n", arr);
//			for (int i = 0; i < 8; i++) {
//				fgets(arr, sizeof(arr), fp2);
//				arr[strlen(arr) - 1] = '\0';
//				printf("%s\n", arr);
//			}
//		}
//	}
//	return 0;
//}

//#include<string.h>
//
//int main() {
//	FILE* fp;
//	FILE* fp2;
//	int num;
//	int size;
//	char arr[20];
//
//	fp = fopen("99.txt", "w");
//
//	for (int i = 2; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			fprintf(fp, "%2d * %2d = %2d\n", i, j, i * j);
//		}
//	}
//
//	fclose(fp);
//
//	fp2 = fopen("99.txt", "r");
//
//	printf("출력을 원하는 구구단은?\n");
//	scanf("%d", &num);
//
//	fgets(arr, sizeof(arr), fp2);
//	size = strlen(arr);
//	fseek(fp2, (size + 1) * 9 * (num - 2), SEEK_SET);
//	
//	printf("%d단\n", num);
//	printf("============\n");
//	for (int i = 0; i < 9; i++) {
//		fgets(arr, sizeof(arr), fp2);
//		arr[strlen(arr) - 1] = '\0';
//		printf("%s\n", arr);
//	}
//
//	return 0;
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	FILE* from;
	FILE* to;
	char name1[100];
	char name2[100];
	char buf[4];
	double curfseek = 0;
	double totsize = 0;

	printf("복사할 파일명 입력(확장자 포함) : ");
	fgets(name1, sizeof(name1), stdin);
	name1[strlen(name1) - 1] = '\0';

	from = fopen(name1, "rb+");

	fseek(from, 0, SEEK_END);
	totsize = ftell(from);
	printf("총 크기 : %.1lf 바이트\n\n", totsize);

	printf("복사 후 생성될 파일명 입력(확장자 포함) : ");
	fgets(name2, sizeof(name2), stdin);
	name2[strlen(name2) - 1] = '\0';

	to = fopen(name2, "wb+");

	fseek(from, 0, SEEK_SET);
	while (1) {
		fread(buf, sizeof(char), sizeof(buf), from);
		if (feof(from) == 0) {
			fwrite(buf, sizeof(char), sizeof(buf), to);
			fseek(from, 0, SEEK_CUR);
			curfseek = ftell(from);
			printf("%.1lf\n", (curfseek / totsize) * 100);
		}
		else {
			double temp = totsize - curfseek;
			fseek(from, -temp, SEEK_END);

			//버퍼의 크기보다 작은 데이터가 남은 경우
			char* ptr = (char*)malloc(sizeof(char));
			for (int i = 0; i < (int)temp; i++) {
				fread(ptr, sizeof(char), 1, from);
				fwrite(ptr, sizeof(char), 1, to);
			}
			free(ptr);
			break;
		}
	}
	fclose(from);
	fclose(to);

	return 0;
}
