#include <stdio.h>

int main() {
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 %.20lf\n", ft);
	printf("double형 변수의 값 %.20lf\n", db);

	return 0;
}

// 출력값이 초기 값과 다르다. 실수형은 저장하는 값에 따라 숫자가
// 정확하게 표현될 수도 있고, 그렇지 않을 수도 있기 때문이다.
// float형은 유효숫자가 7자리 이내, double은 15자리 이내에서 사용하는 것이 좋다.