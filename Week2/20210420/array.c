#include <stdio.h>

/*int main() {
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];

	scanf("%d", &arr[3]);

	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);

	return 0;
}*/

//int main() {
//	int arr[5] = { 0, };
//
//	printf("");
//
//	return 0;
//}

//int main() {
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	//�迭 ����� ������ Ȯ���ϴ� ���
//	count = sizeof(score) / sizeof(sizeof(score[0]));
//	//count = sizeof(score) / sizeof(sizeof(int));
//
//	return 0;
//}

//int main() {
//	int A[3] = { 1, 2, 3 };
//	int B[10];
//
//	int i;
//
//	for (int i = 0; i < 10; i++) {
//		int j = i % 3;
//		B[i] = A[j];
//	}
//
//	for (int i = 0; i<10;i++) {
//		printf("%d ",B[i]);
//	}
//
//	return 0;
//}

//int main() {
//	int arr[5];
//	int max;
//	int min;
//	int sum = 0;
//
//	//�� �Է�
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	//�ִ�
//	max = arr[0];
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//
//	//�ּڰ�
//	min = arr[0];
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//
//	//��
//	for (int i = 0; i < 5; i++) {
//		sum += arr[i];
//	}
//
//	//�� ���
//	printf("�ִ� : %d\n", max);
//	printf("�ּڰ� : %d\n", min);
//	printf("�� : %d\n", sum);
//
//	return 0;
//}

//int main() {
//	char str[10];
//
//	printf("���� ���ڿ� : %s\n", str);
//	printf("���ڿ� �Է� : ");
//
//	//scanf���� str�� &�� �ٿ����� �ʴ� ������, str ��ü��
//	//str �迭�� ù ��° ����� �ּҸ� ���ϱ� �����̴�.
//	scanf("%s", str);
//	printf("�Է� �� ���ڿ� : %s\n", str);
//
//	return 0;
//}

//int main() {
//	// ���ڿ��� �����ϴ� strcpy �Լ�
//	// strcpy(����� �迭 ��, ������ ���� ��)

//	char str1[80] = "cat";
//	char str2[80];
//
//	strcpy(str1, "tiger");
//	strcpy(str2, str1);
//	printf("%s, %s\n", str1, str2);
//
//	//����! �Ʒ��� ���� ��� ���ڿ������� ������ �� ����
//	//strycpy("lion", "tiger"); -> �Ұ����ϴ�.
//
//	return 0;
//}

//int main() {
//	//gets, puts �Լ�
//	//scanf �Լ��� ���ڿ� �߰��� ������ �ִ� ��� ���� �� ���� �����Ѵ�.
//	//gets �Լ��� ������ �����Ͽ� ��� ���ڿ��� �����Ѵ�.
//	//puts �Լ��� printf�� ���� ���������� ���๮�ڸ� �������� �ڵ����� ���δ�.
//	char str[80];
//
//	printf("���ڿ� �Է� : ");
//	gets(str);
//	puts("�Էµ� ���ڿ� : ");
//	puts(str);
//
//	return 0;
//}

//int main() {
//	char str[80];
//	int count = 0;
//	
//	gets(str);
//	int strlen = sizeof(str) / sizeof(char);
//
//	for (int i = 0; i < strlen; i++) {
//		if ((int)str[i] >= 65 && (int)str[i] <= 90) {
//			str[i] = (char)((int)str[i] + 32);
//			count += 1;
//		}
//	}
//
//	printf("%s\n", str);
//	printf("%d characters converted", count);
//
//	return 0;
//}

#include <windows.h>
#include <string.h>

int main() {
	char str[100];
	char buf;
	
	int strlen;

	printf("����� ���ڿ� �Է�\n");
	gets(str);

	strlen = sizeof(str) / sizeof(char);

	while (1) {
		system("cls");
		buf = str[0];
		for (int i = 0; i < strlen; i++) {
			str[i] = str[i + 1];
			if (str[i] == '\0') {
				str[i] = buf;
				break;
			}
		}
		printf("%s", str);
		Sleep(100);
	}
	return 0;
}
