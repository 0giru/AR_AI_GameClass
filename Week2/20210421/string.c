#include <stdio.h>
#include <string.h>

//int main() {
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char *ps1 = "banana";
//	char *ps2 = str2;
//
//	//strcpy(destination, source)
//	//destination에는 배열의 이름이나, 배열 첫번째 인자의 포인터를 사용
//	//
//	printf("최초 문자열 : %s\n", str1);
//	strcpy(str1, str2);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("바뀐 문자열 : %s\n", str1);
//
//	return 0;
//}

//문자열 상수끼리는 strcpy를 쓰지 않는 것이 좋다
// ex) strcpy("dongwoo", "338");

//원하는 만큼 잘라서 복사하는 strncpy() 함수
//int main() {
//	char str[20] = "mango tree";
//
//	strncpy(str, "apple-pie", 5);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//문자열을 붙이는 strcat() 함수는 메모리를 침범할 수 있다.
//strcat() 함수는 배열을 초기화 해주어야 한다.

//문자열을 비교하는 strcmp, strncmp 함수
//ID, 패스워드 비교 혹은 욕설 필터 제작에 자주 쓰인다고 함.

//mystrcpy 함수

//char *my_strcpy(char *pd, char *ps);
//char *my_strcat(char *pd, char *ps);
//int my_strcmp(char *pa, char *pb);
//int my_strlen(char *ps);
//
//int main() {
//	char str[80] = "strawberry";
//
//	printf("바꾸기 전 문자열 : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("바꾼 후 문자열 : %s\n", str);
//	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
//
//	return 0;
//}

//char *my_strcpy(char *pd, char *ps) {
//	int ps_size = strlen(ps) + 1;
//
//	for (int i = 0; i < ps_size; i++) {
//		*(pd + i) = *(ps + i);
//	}
//
//	return pd;
//}
//
//char *my_strcpy(char *pd, char *ps) {
//	int ps_size = strlen(ps);
//
//	for (int i = 0; i < ps_size; i++) {
//		*(pd + i) = *(ps + i);
//	}
//	*(pd + ps_size) = '\0';
//
//	return pd;
//}
//
////strcat
//char *my_strcat(char* pd, char* ps) {
//	char *po = pd;
//
//	while (*pd != '\0') {
//		pd++;
//	}
//	while (*ps != '\0') {
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//	return po;
//}
//
////strlen
//int my_strlen(char *ps) {
//	int count = 0;
//	while (*ps != '\0') {
//		count++;
//		ps++;
//	}
//	return count;
//}
//
////strcmp
//int my_strcmp(char *pa, char *pb) {
//	while ((*pa == *pb) && (*pa != '\0')) {
//		pa++;
//		pb++;
//	}
//	if (*pa > *pb) {
//		return 1;
//	}
//	else if (*pa < *pb) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}

int main() {
	char szBuf[100] = {"I am a boy. I am happy"};
	char old[100];
	char New[100];
	char szBufBuf[100];
	char* toChange;
	char* afterToFind;

	int count = 0;
	int count2 = 0;
	int count3 = 0;

	//기존 문자열 출력
	printf("기존 문자열 : %s\n", szBuf);
	//찾을 문자열 검색
	printf("찾을 문자열 입력 : \n");

	fgets(old, sizeof(old), stdin);
    old[strlen(old) - 1] = '\0'; //fgets의 개행문자 삭제

	//바꿀 문자열의 시작 주소
	toChange = strstr(szBuf, old);


	//바꿀 문자열 이후의 문장을 szBufBuf 배열에 저장
	afterToFind = toChange + strlen(old); //바꿀 문자열 이후 남은 문자열의 시작 주소
	while (1) {
		if (*(afterToFind + count) == '\0') {
			*(szBufBuf + count) = '\0';
			break;
		}
		else {
			*(szBufBuf + count) = *(afterToFind + count);
		}
		count++;
	}

	//찾는 문자가 없을 경우 종료
	if (toChange == NULL) {
		printf("Cannot find '%s'", old);
		return -1;
	}
	//찾는 문자가 있을 경우 바꿀 문자열 입력
	else {
		printf("바꿀 문자열 입력 : \n");
        fgets(New, sizeof(New), stdin);
        New[strlen(New) - 1] = '\0';

		// 바꿀 문자열로 변경
		while (1) {
			if (*(New + count2) != '\0') {
				*(toChange + count2) = *(New + count2);
			}
			else {
				break;
			}
			count2++;
		}
	}
	
	//남은 문자열 붙여주기
	while (1) {
		if (*(szBufBuf + count3) == '\0') {
			break;
		}
		*(toChange + count2 + count3) = *(szBufBuf + count3);
		count3++;
	}

	printf("%s", szBuf);
}
