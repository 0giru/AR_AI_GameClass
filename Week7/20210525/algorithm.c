#include<stdio.h>
//#include"IntStack.h"
//stack
//int main() {
//	IntStack s;
//	InitStack(&s, 64);
//
//	int func = 0;
//	int valToPush = 0;
//	int valFromPop = 0;
//	int peek = 0;
//
//	while (1) {
//		printf("���� ������ �� : %d / %d\n", s.ptr, s.max);
//		printf("(1) Push / (2) Pop / (3) Peek / (4) Print / (5) Terminate : ");
//		scanf("%d", &func);
//		if (func == 1) {
//			printf("������ : ");
//			scanf("%d", &valToPush);
//			Push(&s, valToPush);
//		}
//		else if (func == 2) {
//			if (Pop(&s, &valFromPop) == -1) {
//				printf("Pop ���� ����\n");
//			}
//			else {
//				printf("Pop ���� ��� : %d\n", valFromPop);
//			}
//		}
//		else if (func == 3) {
//			Peek(&s, &peek);
//			printf("��ũ ������  : %d\n", peek);
//		}
//		else if (func == 4) {
//			Print(&s);
//		}
//		else {
//			Terminate(&s);
//		}
//	}
//	return 0;
//}

#include"IntQueue.h"

//queue
int main() {
	IntQueue q;
	InitQueue(&q, 5);
	int func = 0;
	int valToDeq = 0;
	int valToEnq = 0;
	int peek = 0;

	while (1) {
		printf("���� ������ �� : %d / %d\n", q.num, q.max);
		printf("(1) Enque / (2) Deque / (3) Peek / (4) Print / (5) Terminate : ");
		scanf("%d", &func);
		if (func == 1) {
			printf("������ : ");
			scanf("%d", &valToEnq);
			Enqueue(&q, valToEnq);
		}
		else if (func == 2) {
			if (IsEmpty(&q) == 1) {
				printf("Dequeue ���� ����\n");
			}
			else {
				Dequeue(&q, &valToDeq);
				printf("Dequeue ���� ��� : %d\n", valToDeq);
			}
		}
		else if (func == 3) {
			if (Peek(&q, &peek) == 1) {
				printf("��ũ ������ : %d\n", peek);
			}
		}
		else if (func == 4) {
			Print(&q);
		}
		else {
			Terminate(&q);
		}
	}
	return 0;
}