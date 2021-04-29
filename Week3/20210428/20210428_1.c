#include<stdio.h>

////열거형 enum
////자료타입이 없는 변수와 같음
////앞에서부터 차례로 0, 1, 2, ...로 초기화됨
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

	printf("학생 번호를 입력하세요 : ");
	scanf("%d", &snum);
	S->sNum = snum;
	getchar();

	printf("학생 이름을 입력하세요 : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	strcpy(S->Name, name);

	printf("성적을 입력하세요 : ");
	scanf("%d", &score);
	S->Score = score;

	S->Next = NULL;
	printf("\n");
}

//성적에 따라 출력
void student_output(struct Student *Head) {
	struct Student *current = Head;

	if (current == NULL) {
		printf("\n학생 목록이 없습니다.\n");
		return;
	}
	else {
		printf("\n성적순으로 출력\n\n");
		while (current != NULL) {
			printf("번호 : %d\n", current->sNum);
			printf("이름 : %s\n", current->Name);
			printf("성적 : %d\n\n", current->Score);
			current = current->Next;
		}
	}
}

void search(struct Student *Head, char* arr) {
	struct Student *current = Head;
	while (current != NULL) {
		if (strcmp(current->Name, arr) == 0) {
			printf("번호 : %d\n", current->sNum);
			printf("이름 : %s\n", current->Name);
			printf("성적 : %d\n\n", current->Score);
			return;
		}
		else {
			current = current->Next;
		}
	}
	printf("찾는 결과가 없습니다.\n");
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
		printf("\n학생 입력하기 : 1");
		printf("\n학생 출력하기 : 2");
		printf("\n이름으로 검색하기 : 3");
		printf("\n종료 : 4\n\n");
		scanf("%d", &choice);

		if (choice == 1) {
			printf("학생 수를 입력하세요.\n");
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
			printf("찾을 학생의 이름 입력 : ");
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
