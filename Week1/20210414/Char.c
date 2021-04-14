#include <stdio.h>
#include <string.h>

int main() {
	char fruit[20] = "apple";
	// 문자열은 마지막에 NULL문자가 입력되므로 한칸 더 길게 만들어야함.
	// 사용하려는 가장 큰 문자열보다 한칸 더 크게 만들어야함
	
	printf("fruit : %s\n", fruit);

	strcpy(fruit, "banana");
	// strcpy는 문자열을 복사한다.

	printf("fruit : %s\n", fruit);

	return 0;
}