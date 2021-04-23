#include <stdio.h>

// 함수의 주소를 가지고 있는 포인터
// 호출하는 함수에 대한 주소를 가지고 있다.
// 함수를 주소 단위로 바꾸어 호출할 수 있다.

//int sum(int, int);
//int mul(int, int);
//int sub(int, int);
//int div(int, int);
//
//int main() {
//	int(*fp)(int, int); //리턴 형식은 int, 인자로 int 두개를 가지는 포인터
//	int res;
//
//	fp = sum;
//	res = fp(10, 10);
//	printf("result : %d\n", res);
//
//	fp = mul;
//	res = fp(10, 10);
//	printf("result : %d\n", res);
//
//	fp = sub;
//	res = fp(10, 10);
//	printf("result : %d\n", res);
//
//	fp = div;
//	if (fp(10, 0) < 0 ) {
//		printf("result : zero divide error\n");
//	}
//	else {
//		printf("result : %d\n", fp(10, 0));
//	}
//
//	return 0;
//}
//
//int sum(int a, int b) {
//	return (a + b);
//}
//
//int mul(int a, int b) {
//	return (a * b);
//}
//
//int sub(int a, int b) {
//	return (a - b);
//}
//
//int div(int a, int b) {
//	if (b != 0) {
//		return a / b;
//	}
//	else {
//		return -1;
//	}
//}

//// 일단 자료형은 모르지만 먼저 메모리를 가리키고 후에 형변환으로 자료형을 정의해준다.
//// 데이터를 입력할 때에는 주소를 몰라도 되지만 출력할 때에는 자료형을 표시해줘야 한다.
//int main() {
//	int a = 10;
//	double b = 3.5;
//	void *vp; //void형 포인터
//
//	vp = &a; //void형 포인터에 int형 데이터의 주소 대입
//	printf("a : %d\n", *(int *)vp); //형변환 후 역참조로 값 출력
//
//	vp = &b; //void형 포인터에 double형 데이터의 주소 대입
//	printf("b : %.1lf\n", *(double *)vp); //형변환 후 역참조로 값 출력
//
//	return 0;
//}

//#include <string.h>
//
//void swap(char* arr, void *par, void *par2);
//
//int main() {
//	int age1, age2;
//	double height1, height2;
//
//	printf("첫 번째 사람의 나이와 키 입력 : \n");
//	scanf("%d %lf", &age1, &height1);
//
//	printf("두 번째 사람의 나이와 키 입력 : \n");
//	scanf("%d %lf", &age2, &height2);
//
//	swap("int", &age1, &age2);
//	swap("double", &height1, &height2);
//
//	printf("첫 번째 사람의 나이와 키 : %d %.1lf\n", age1, height1);
//	printf("두 번째 사람의 나이와 키 : %d %.1lf\n", age2, height2);
//}
//
//void swap(char* arr, void *par1, void *par2) {
//	if (strcmp(arr, "int") == 0) {
//		int temp;
//		temp = *(int*)par1;
//		*(int*)par1 = *(int*)par2;
//		*(int*)par2 = temp;
//	}
//	else if (strcmp(arr, "double") == 0) {
//		double temp;
//		temp = *(double*)par1;
//		*(double*)par1 = *(double*)par2;
//		*(double*)par2 = temp;
//	}
//}

//int main() {
//	char *str1 = "hello";
//	char *str2 = "hello";
//
//	printf("%p\n", str1);
//	printf("%p\n", str2);
//
//	return 0;
//}
