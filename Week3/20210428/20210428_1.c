#include<stdio.h>

////������ enum
////�ڷ�Ÿ���� ���� ������ ����
////�տ������� ���ʷ� 0, 1, 2, ...�� �ʱ�ȭ��
//enum season {SPRING, SUMMER, FALL, WINTER};
//
//int main() {
//
//	enum season ss;
//	char* pc = NULL;
//
//	ss = SPRING;
//	switch (ss)
//	{
//	case SPRING:
//		pc = "inline"; break;
//	case SUMMER:
//		pc = "swimming"; break;
//	case FALL:
//		pc = "trip"; break;
//	case WINTER:
//		pc = "skiing"; break;
//	}
//
//	printf("%s\n", pc);
//
//	return 0;
//}

#include<string.h>

struct Student {
	int sNum;
	char Name[10];
	int Score;
	struct Student *Next;
	struct Student *Prev;
};

void student_input(struct Student *S) {
	char name[10];
	int snum;
	int score;

	printf("�л� ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &snum);
	S->sNum = snum;
	getchar();

	printf("�л� �̸��� �Է��ϼ��� : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	strcpy(S->Name, name);

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);
	S->Score = score;

	S->Next = NULL;
	printf("\n");
}

//������ ���� ���
void student_output(struct Student *Head) {
	struct Student *current = Head;

	if (current == NULL) {
		printf("\n�л� ����� �����ϴ�.\n");
		return;
	}
	else {
		printf("\n���������� ���\n\n");
		while (current != NULL) {
			printf("��ȣ : %d\n", current->sNum);
			printf("�̸� : %s\n", current->Name);
			printf("���� : %d\n\n", current->Score);
			current = current->Next;
		}
	}
}

void search(struct Student *Head, char* arr) {
	struct Student *current = Head;
	while (current != NULL) {
		if (strcmp(current->Name, arr) == 0) {
			printf("��ȣ : %d\n", current->sNum);
			printf("�̸� : %s\n", current->Name);
			printf("���� : %d\n\n", current->Score);
			return;
		}
		else {
			current = current->Next;
		}
	}
	printf("ã�� ����� �����ϴ�.\n");
}

int main() {
	struct Student* sPtr;
	struct Student* current = NULL;
	struct Student* Head = NULL;
	int num;
	int size;
	int choice;
	char arrName[10];

	size = sizeof(struct Student);
	
	while (1) {
		printf("\n�л� �Է��ϱ� : 1");
		printf("\n�л� ����ϱ� : 2");
		printf("\n�̸����� �˻��ϱ� : 3");
		printf("\n���� : 4\n\n");
		scanf("%d", &choice);

		if (choice == 1) {
			printf("�л� ���� �Է��ϼ���.\n");
			scanf("%d", &num);
			for (int i = 0; i < num; i++) {
				sPtr = (struct Student*)malloc(size);
				student_input(sPtr);

				if (Head == NULL) {
					Head = sPtr;
					sPtr->Prev = Head;
					current = Head;
				}
				else {
					current = Head;
					while (current != NULL) {
						if (sPtr->Score > current->Score) {
							if (current == Head) {
								sPtr->Next = current;
								current->Prev = sPtr;
								Head = sPtr;
								break;
							}
							else {
								current->Prev->Next = sPtr;
								sPtr->Prev = current->Prev;
								current->Prev = sPtr;
								sPtr->Next = current;
								break;
							}
						}
						if (current->Next == NULL) {
							current->Next = sPtr;
							sPtr->Prev = current;
							current = current->Next;
							break;
						}
						else {
							current = current->Next;
						}
					}
				}
			}
			continue;
		}
		else if (choice == 2) {
			student_output(Head);
			continue;
		}
		else if (choice == 3) {
			printf("ã�� �л��� �̸� �Է� : ");
			getchar();
			fgets(arrName, sizeof(arrName), stdin);
			arrName[strlen(arrName) - 1] = '\0';
			search(Head, arrName);
			continue;
		}
		else if (choice == 4) {
			break;
		}
	}
	return 0;
}
