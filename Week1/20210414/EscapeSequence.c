// \�� �̿��� ����ڸ� Escape Sequence��� �Ѵ�.

#include <stdio.h> //stdio : standard input output

int main() {
	// printf�� print formatted��� �ǹ�

	printf("Be Happy\n");
	// ���ڿ��� �ƴϸ� '', ���ڿ��̸� ""�� ���ش�.
	// \n�� �� �ٲ��� �ǹ�

	printf("My\tFriend\n");
	//\t�� �� ��ĭ ��ŭ ����ش�.

	printf("Goot\bd\tchance\n");
	// Goot�� ���
	// \b�� ��ĭ�� �����(backspace)
	// t�� d�� �ٲٰ� �� ��ĭ ��ŭ ��� �� chance ���, �ٹٲ�

	printf("Cow\rW\a\n");
	// \r�� ĳ���� ����(carriage return)���� �� ������ �̵��Ѵ�. Cow�� C�� �ٲܼ� �ְ� ����
	// C�� W�� �ٲ�
	// \a�� �˷� �溸(alert), ���Ҹ��� ����
	// \n���� �ٹٲ�

	return 0;
}