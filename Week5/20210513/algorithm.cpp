#include<stdio.h>
#include<math.h>
//진수 변환 프로그램


int main() {
	char arr[36] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
	};

	char result[100] = { 0, };

	int base;
	int num;
	int decimal = 0;
	int divisor;
	int quot = 0;
	int rest = 0;
	int count = 0;

	printf("진수 입력 : ");
	scanf("%d", &base);
	printf("진수 값 입력 : ");
	scanf("%d", &num);
	printf("제수 입력 : ");
	scanf("%d", &divisor);

	int temp = 1;
	int count2 = 0;
	while (temp <= num) {
		temp *= 10;
		count2 += 1;
	}

	int temp2 = num;
	for (int i = 0; i < count2; i++) {
		int temp3 = 1;
		for (int j = 0; j < i; j++) {
			temp3 *= base;
		}
		int temp4 = temp2 % 10;
		decimal += temp4 * temp3;
		temp2 /= 10;
	}
	
	while (decimal >= divisor) {
		quot = decimal / divisor;
		rest = decimal % divisor;
		result[count] = arr[rest];
		decimal = quot;

		count += 1;
	}

	result[count] = arr[decimal];

	printf("%d진수 %d는 %d진수로 ", base, num, divisor);
	for (int i = count; i >= 0; i--) {
		printf("%c", result[i]);
	}
	printf("입니다.");

	return 0;
}
