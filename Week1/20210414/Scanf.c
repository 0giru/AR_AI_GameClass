#include <stdio.h>

int main() {
	//int a;
	//float b;

	//scanf("%d", &a); // ���� �� �� &�� ���� �Է¹޴´�. a������ �ּҸ� �ǹ�
	//printf("%d", a);

	//// �� �� �̻��� ���� �Է� ���� ��
	//scanf("%d%lf", &a, &b);
	//===================================================================================

	//int age;
	//double height;

	//printf("enter age & height : ");
	//scanf("%d%lf", &age, &height);
	//printf("age : %d, height : %lf", age, height);
	//===================================================================================

	////char������ ���ڸ� �Է��� ���� �迭 ���� &�� ������ �ʰ�
	////���� ���� �������� �Է��ؾ���
	//char grade;
	//char name[20];

	//printf("���� �Է� : ");
	//scanf("%c", &grade);
	//printf("�̸� �Է� : ");
	//scanf("%s", name); //�迭�� �̸����� &�� ������ �ʴ´�
	//printf("%s�� ������ %c �Դϴ�", name, grade);

	//return 0;
	//===================================================================================

	//char ch;
	//printf("���� �Է� : ");
	//scanf("%c", &ch);
	//printf("%c ������ �ƽ�Ű �ڵ� ���� %d �Դϴ�.", ch, ch);

	float a, b, c;
	scanf("%e%e%e", &a, &b, &c);
	printf("�Էµ� �Ǽ� : %lf\n�Էµ� �Ǽ� : %lf\n�Էµ� �Ǽ� : %lf\n", a, b, c);

	return 0;
}