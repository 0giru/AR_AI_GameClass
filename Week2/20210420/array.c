#include <stdio.h>

/*int main() {
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];

	scanf("%d", &arr[3]);

	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);

	return 0;
}*/

//int main() {
//	int arr[5] = { 0, };
//
//	printf("");
//
//	return 0;
//}

//int main() {
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	//배열 요소의 개수를 확인하는 방법
//	count = sizeof(score) / sizeof(sizeof(score[0]));
//	//count = sizeof(score) / sizeof(sizeof(int));
//
//	return 0;
//}

//int main() {
//	int A[3] = { 1, 2, 3 };
//	int B[10];
//
//	int i;
//
//	for (int i = 0; i < 10; i++) {
//		int j = i % 3;
//		B[i] = A[j];
//	}
//
//	for (int i = 0; i<10;i++) {
//		printf("%d ",B[i]);
//	}
//
//	return 0;
//}

//int main() {
//	int arr[5];
//	int max;
//	int min;
//	int sum = 0;
//
//	//값 입력
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	//최댓값
//	max = arr[0];
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//
//	//최솟값
//	min = arr[0];
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//
//	//합
//	for (int i = 0; i < 5; i++) {
//		sum += arr[i];
//	}
//
//	//값 출력
//	printf("최댓값 : %d\n", max);
//	printf("최솟값 : %d\n", min);
//	printf("합 : %d\n", sum);
//
//	return 0;
//}

//int main() {
//	char str[10];
//
//	printf("최초 문자열 : %s\n", str);
//	printf("문자열 입력 : ");
//
//	//scanf에서 str에 &를 붙여주지 않는 이유는, str 자체가
//	//str 배열의 첫 번째 요소의 주소를 뜻하기 때문이다.
//	scanf("%s", str);
//	printf("입력 후 문자열 : %s\n", str);
//
//	return 0;
//}

//int main() {
//	// 문자열을 대입하는 strcpy 함수
//	// strcpy(저장될 배열 명, 저장할 문자 열)

//	char str1[80] = "cat";
//	char str2[80];
//
//	strcpy(str1, "tiger");
//	strcpy(str2, str1);
//	printf("%s, %s\n", str1, str2);
//
//	//주의! 아래와 같이 상수 문자열끼리는 변경할 수 없음
//	//strycpy("lion", "tiger"); -> 불가능하다.
//
//	return 0;
//}

//int main() {
//	//gets, puts 함수
//	//scanf 함수는 문자열 중간에 공백이 있는 경우 공백 전 까지 저장한다.
//	//gets 함수는 공백을 포함하여 모든 문자열을 저장한다.
//	//puts 함수는 printf와 같이 동작하지만 개행문자를 마지막에 자동으로 붙인다.
//	char str[80];
//
//	printf("문자열 입력 : ");
//	gets(str);
//	puts("입력된 문자열 : ");
//	puts(str);
//
//	return 0;
//}

//int main() {
//	char str[80];
//	int count = 0;
//	
//	gets(str);
//	int strlen = sizeof(str) / sizeof(char);
//
//	for (int i = 0; i < strlen; i++) {
//		if ((int)str[i] >= 65 && (int)str[i] <= 90) {
//			str[i] = (char)((int)str[i] + 32);
//			count += 1;
//		}
//	}
//
//	printf("%s\n", str);
//	printf("%d characters converted", count);
//
//	return 0;
//}

#include <windows.h>
#include <string.h>

int main() {
	char str[100];
	char buf;
	
	int strlen;

	printf("출력할 문자열 입력\n");
	gets(str);

	strlen = sizeof(str) / sizeof(char);

	while (1) {
		system("cls");
		buf = str[0];
		for (int i = 0; i < strlen; i++) {
			str[i] = str[i + 1];
			if (str[i] == '\0') {
				str[i] = buf;
				break;
			}
		}
		printf("%s", str);
		Sleep(100);
	}
	return 0;
}
