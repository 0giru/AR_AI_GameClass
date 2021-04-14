#include <stdio.h>

int main() {
	printf("%d\n", 10); // %d 정수 출력
	printf("%lf\n", 3.4); // %lf 실수 출력 (3.4) 
	printf("%.1lf\n", 3.45); // 소수점 이하 첫째 자리 까지 출력(둘째 자리에서 반올림)
	printf("%.10lf\n", 3.4); // 소수점 이하 10자리 까지 출력

	printf("%d, %d의 합은 %d 입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf", 3.4, 1.2, 3.4 - 1.2);

	/*
	%f와 %lf는 둘 다 실수를 받는 이스케이프시퀀스이다.
	printf에서는 %f로 float과 double을 모두 받을 수 있지만(default argument promotion)
	scanf에서는 둘을 구분해서 써줘야 한다.(포인터로 받으므로)

	http://gigglehd.com/zbxe/10649472
	*/
}