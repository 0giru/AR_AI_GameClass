#include<stdio.h>

//void assign10(void);
//void assign20(void);
//
//int a;
//
//int main() {
//	printf("함수 호출 전 a 값 : %d\n", a);
//
//	assign10();
//	assign20();
//
//	printf("함수 호출 후 a값 : %d\n", a);
//
//	return 0;
//}
//
//void assign10() {
//	a = 10;
//}
//
//void assign20() {
//	int a;
//
//	a = 20;
//}

////static 예약어를 이용한 값 유지
//void auto_func();
//void static_func();
//
//int main() {
//	int i;
//
//	printf("auto 변수를 사용한 함수\n");
//	for (int i = 0; i < 3; i++) {
//		auto_func();
//	}
//
//	printf("static 변수를 사용한 함수\n");
//	for (int i = 0; i < 3; i++) {
//		static_func();
//	}
//
//	return 0;
//}
//
//void auto_func() {
//	auto int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//
//void static_func() {
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}

//register 변수를 이용
//register 변수는 cpu의 레지스터에 변수를 저장한다.
//반복문에 사용하는 변수와 같이 사용 횟수가 많을 때 사용하면 좋음

/*
1. 전역 변수는 레지스터 변수로 선언할 수 없다.
2. 레지스터 변수는 주소를 구할 수 없다. <- 메모리에 있는 것이 아니므로
3. 레지스터의 사용 여부는 컴파일러 마음. 우리가 선언해도 컴파일러 판단으로 지정한다.
*/

// call by value
// call by reference

//int main() {
//	int score[3][4];
//	int total;
//	double avg;
//
//	for (int i = 0; i < 3; i++) {
//		printf("4과목 점수 입력\n");
//		for (int j = 0; j < 4; j++) {
//			scanf("%d", &score[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		total = 0;
//		for (int j = 0; j < 4; j++) {
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("총점  : %d, 평균 : %.2lf\n", total, avg);
//	}
//
//	return 0;
//}
