// unsigned 자료형은 양수만을 저장해서 두배의 저장 범위를 갖는다.
// 음수가 없는 데이터를 저장할 때 사용

#include <stdio.h>

//int main() {
//	unsigned int a;
//
//	a = 4294967295;
//	printf("%d\n", a);
//	// %d는 부호를 고려하여 10진수로 출력함
//	// unsigned를 %d로 출력하면 음수가 나올 수 있다.
//	// unsigned 자료형은 항상 양수로 저장하고 %u로 출력한다.
//	
//	a = -1;
//	printf("%u\n", a);
//
//	return 0;
//}
int main() {
	unsigned int a;

	a = 4294967295;
	printf("%d", a);

	return 0;
}