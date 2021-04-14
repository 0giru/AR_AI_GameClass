#include <stdio.h>

int main() {
	//int a;
	//float b;

	//scanf("%d", &a); // 변수 명 앞 &를 통해 입력받는다. a변수의 주소를 의미
	//printf("%d", a);

	//// 두 개 이상의 값을 입력 받을 때
	//scanf("%d%lf", &a, &b);
	//===================================================================================

	//int age;
	//double height;

	//printf("enter age & height : ");
	//scanf("%d%lf", &age, &height);
	//printf("age : %d, height : %lf", age, height);
	//===================================================================================

	////char변수에 문자를 입력할 때는 배열 명에 &를 붙이지 않고
	////공백 없이 연속으로 입력해야함
	//char grade;
	//char name[20];

	//printf("학점 입력 : ");
	//scanf("%c", &grade);
	//printf("이름 입력 : ");
	//scanf("%s", name); //배열의 이름에는 &를 붙이지 않는다
	//printf("%s의 학점은 %c 입니다", name, grade);

	//return 0;
	//===================================================================================

	//char ch;
	//printf("문자 입력 : ");
	//scanf("%c", &ch);
	//printf("%c 문자의 아스키 코드 값은 %d 입니다.", ch, ch);

	float a, b, c;
	scanf("%e%e%e", &a, &b, &c);
	printf("입력된 실수 : %lf\n입력된 실수 : %lf\n입력된 실수 : %lf\n", a, b, c);

	return 0;
}