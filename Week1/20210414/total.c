#include <stdio.h>

int main() {
	int kor = 70;
	int eng = 80;
	int mat = 90;
	int total = 0;

	total = kor + eng + mat;

	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	printf("총점 : %d", total);

	return 0;
}