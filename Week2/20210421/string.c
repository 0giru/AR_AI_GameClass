#include <stdio.h>
#include <string.h>

//int main() {
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char *ps1 = "banana";
//	char *ps2 = str2;
//
//	//strcpy(destination, source)
//	//destination���� �迭�� �̸��̳�, �迭 ù��° ������ �����͸� ���
//	//
//	printf("���� ���ڿ� : %s\n", str1);
//	strcpy(str1, str2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	return 0;
//}

//���ڿ� ��������� strcpy�� ���� �ʴ� ���� ����
// ex) strcpy("dongwoo", "338");

//���ϴ� ��ŭ �߶� �����ϴ� strncpy() �Լ�
//int main() {
//	char str[20] = "mango tree";
//
//	strncpy(str, "apple-pie", 5);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//���ڿ��� ���̴� strcat() �Լ��� �޸𸮸� ħ���� �� �ִ�.
//strcat() �Լ��� �迭�� �ʱ�ȭ ���־�� �Ѵ�.

//���ڿ��� ���ϴ� strcmp, strncmp �Լ�
//ID, �н����� �� Ȥ�� �弳 ���� ���ۿ� ���� ���δٰ� ��.

//mystrcpy �Լ�

//char *my_strcpy(char *pd, char *ps);
//char *my_strcat(char *pd, char *ps);
//int my_strcmp(char *pa, char *pb);
//int my_strlen(char *ps);
//
//int main() {
//	char str[80] = "strawberry";
//
//	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("�ٲ� �� ���ڿ� : %s\n", str);
//	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
//
//	return 0;
//}

//char *my_strcpy(char *pd, char *ps) {
//	int ps_size = strlen(ps) + 1;
//
//	for (int i = 0; i < ps_size; i++) {
//		*(pd + i) = *(ps + i);
//	}
//
//	return pd;
//}
//
//char *my_strcpy(char *pd, char *ps) {
//	int ps_size = strlen(ps);
//
//	for (int i = 0; i < ps_size; i++) {
//		*(pd + i) = *(ps + i);
//	}
//	*(pd + ps_size) = '\0';
//
//	return pd;
//}
//
////strcat
//char *my_strcat(char* pd, char* ps) {
//	char *po = pd;
//
//	while (*pd != '\0') {
//		pd++;
//	}
//	while (*ps != '\0') {
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//	return po;
//}
//
////strlen
//int my_strlen(char *ps) {
//	int count = 0;
//	while (*ps != '\0') {
//		count++;
//		ps++;
//	}
//	return count;
//}
//
////strcmp
//int my_strcmp(char *pa, char *pb) {
//	while ((*pa == *pb) && (*pa != '\0')) {
//		pa++;
//		pb++;
//	}
//	if (*pa > *pb) {
//		return 1;
//	}
//	else if (*pa < *pb) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}

int main() {
	char szBuf[100] = {"I am a boy."};
	char arr[100];
	char arr2[100];
	char szBufBuf[100];
	char* toChange;
	char* afterToFind;
	int size;
	int arr2size;
	int count = 0;
	int count2 = 0;
	int count3 = 0;

	//���� ���ڿ� ���
	printf("���� ���ڿ� : %s\n", szBuf);
	//ã�� ���ڿ� �˻�
	printf("ã�� ���ڿ� �Է� : \n");
	scanf("%s", arr);

	//�ٲ� ���ڿ��� ���� �ּ�
	toChange = strstr(szBuf, arr);

	printf("%p\n", toChange);
	//�ٲ� ���ڿ��� ����
	size = strlen(arr);
	printf("%d\n", size);

	//�ٲ� ���ڿ� ������ �ּ�
	afterToFind = toChange + size;

	printf("%p\n", afterToFind);

	//�ٲ� ���ڿ� ������ ���� 
	while (1) {
		if (*(afterToFind + count) == '\0') {
			*(szBufBuf + count) = '\0';
			break;
		}
		else {
			*(szBufBuf + count) = *(afterToFind + count);
		}
		count++;
	}

	printf("%s\n", szBufBuf);

	//ã�� ���ڰ� ���� ��� ����
	if (toChange == NULL) {
		printf("Cannot find '%s'", arr);
		return;
	}
	//ã�� ���ڰ� ���� ��� �ٲ� ���ڿ� �Է�
	else {
		printf("�ٲ� ���ڿ� �Է� : \n");
		scanf("%s", arr2);

		arr2size = strlen(arr2);
		// �ٲ� ���ڿ��� ����
		while (1) {
			if (*(arr2 + count2) != '\0') {
				*(toChange + count2) = *(arr2 + count2);
			}
			else {
				break;
			}
			count2++;
		}
	}
	
	//���� ���ڿ� �ٿ��ֱ�
	while (1) {
		if (*(szBufBuf + count3) == '\0') {
			break;
		}
		*(toChange + count2 + count3) = *(szBufBuf + count3);
		count3++;
	}

	printf("%s", szBuf);
}