// \을 이용한 제어문자를 Escape Sequence라고 한다.

#include <stdio.h> //stdio : standard input output

int main() {
	// printf는 print formatted라는 의미

	printf("Be Happy\n");
	// 문자열이 아니면 '', 문자열이면 ""를 써준다.
	// \n은 줄 바꿈을 의미

	printf("My\tFriend\n");
	//\t는 탭 한칸 만큼 띄어준다.

	printf("Goot\bd\tchance\n");
	// Goot을 출력
	// \b는 한칸을 지운다(backspace)
	// t를 d로 바꾸고 탭 한칸 만큼 띄운 후 chance 출력, 줄바꿈

	printf("Cow\rW\a\n");
	// \r은 캐리지 리턴(carriage return)으로 맨 앞으로 이동한다. Cow의 C를 바꿀수 있게 해줌
	// C가 W로 바뀜
	// \a는 알럿 경보(alert), 벨소리를 낸다
	// \n으로 줄바꿈

	return 0;
}