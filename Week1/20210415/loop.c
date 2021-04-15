#include<stdio.h>

int main() {

	//int a = 1;

	//while (a < 10) {
	//	a = a * 2;
	//}
	//printf("a : %d\n", a);
/*===========================================================================*/
	//int n;
	//int temp = 1;

	//printf("정수 입력 : \n");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++) {
	//	temp *= i;
	//}

	//printf("%d", temp);

/*===========================================================================*/

	//int n;
	//int iter = 1;
	//int temp = 1;

	//printf("정수 입력 : ");
	//scanf("%d", &n);

	//while (iter <= n) {
	//	temp *= iter;
	//	iter++;
	//}

	//printf("%d", temp);
/*===========================================================================*/
	//int input1;
	//int input2;

	//printf("정수 입력 : ");
	//scanf("%d%d", &input1, &input2);

	//int sum = input1 + input2;
	//int gap = abs(input1 - input2) + 1;
	//int result = sum * gap / 2;

	//printf("%d", result);
/*===========================================================================*/
	//int input1;
	//int input2;
	//int gap;
	//int result = 0;

	//printf("정수 입력 : ");
	//scanf("%d%d", &input1, &input2);

	//gap = abs(input1 - input2) + 1;

	//if (input1 < input2) {
	//	for (int i = 0; i < gap; i++) {
	//		result += input1;
	//		input1++;
	//	}
	//	printf("%d", result);
	//}
	//else if (input1 > input2) {
	//	for (int i = 0; i < gap; i++) {
	//		result += input2;
	//		input2++;
	//	}
	//	printf("%d", result);
	//}
	//else {
	//	printf("%d", input1);
	//}
/*===========================================================================*/
	//if (input1 < input2) {
	//	while (input1 <= input2) {
	//		result += input2;
	//		input2--;
	//	}
	//	printf("%d", result);
	//}
	//else if (input1 > input2) {
	//	while (input1 >= input2) {
	//		result += input1;
	//		input1--;
	//	}
	//	printf("%d", result);
	//}
	//else {
	//	printf("%d", input1);
	//}
/*===========================================================================*/
	//int n;
	//int result = 0;

	//while (1) {
	//	printf("현재 합계 : %d\n", result);
	//	printf("정수 입력 : ");
	//	scanf("%d", &n);
	//	printf("\n");
	//	if (n == 0) {
	//		break;
	//	}
	//	else {
	//		result += n;
	//	}
	//	}
/*===========================================================================*/
	//int i, j;
	//
	//for (i = 0; i < 3; i++) {
	//	for (j = 0; j < 5; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
/*===========================================================================*/
	int n;
	printf("구구구구구구구구단\n");

	printf("열 개수 입력\n");
	scanf("%d", &n);

	for (int j = 2; j <= n; j = j + 3) {
		int temp1 = j + 1;
		int temp2 = j + 2;
		
		if (temp1 ) {

		}
		for (int i = 1; i <= 9; i++) {
			printf("%2d * %2d = %2d %2d * %2d = %2d %2d * %2d = %2d \n", j, i, j*i, temp1, i, temp1*i, temp2, i, temp2*i);
		}
		printf("==================================================\n");
	}


	/*===========================================================================*/
		//int i;
		//int sum = 0;

		//for (i = 1;i<=10;i++) {
		//	sum += i;
		//	if (sum > 30) {
		//		break;
		//	}
		//	printf("누적한 값 : %d\n", sum);
		//}
		//printf("마지막으로 더한 값 : %d\n", i);
	/*===========================================================================*/
		//for (int i = 1; i < 100; i++) {
		//	if (i%7 == 0) {
		//		printf("%d\n", i);
		//	}
		//	else if (i%9 == 0) {
		//		printf("%d\n", i);
		//	}
		//}
	/*===========================================================================*/
	return 0;
}