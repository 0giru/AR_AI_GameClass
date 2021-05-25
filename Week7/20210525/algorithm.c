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
//		printf("현재 데이터 수 : %d / %d\n", s.ptr, s.max);
//		printf("(1) Push / (2) Pop / (3) Peek / (4) Print / (5) Terminate : ");
//		scanf("%d", &func);
//		if (func == 1) {
//			printf("데이터 : ");
//			scanf("%d", &valToPush);
//			Push(&s, valToPush);
//		}
//		else if (func == 2) {
//			if (Pop(&s, &valFromPop) == -1) {
//				printf("Pop 실행 실패\n");
//			}
//			else {
//				printf("Pop 실행 결과 : %d\n", valFromPop);
//			}
//		}
//		else if (func == 3) {
//			Peek(&s, &peek);
//			printf("피크 데이터  : %d\n", peek);
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
		printf("현재 데이터 수 : %d / %d\n", q.num, q.max);
		printf("(1) Enque / (2) Deque / (3) Peek / (4) Print / (5) Terminate : ");
		scanf("%d", &func);
		if (func == 1) {
			printf("데이터 : ");
			scanf("%d", &valToEnq);
			Enqueue(&q, valToEnq);
		}
		else if (func == 2) {
			if (IsEmpty(&q) == 1) {
				printf("Dequeue 실행 실패\n");
			}
			else {
				Dequeue(&q, &valToDeq);
				printf("Dequeue 실행 결과 : %d\n", valToDeq);
			}
		}
		else if (func == 3) {
			if (Peek(&q, &peek) == 1) {
				printf("피크 데이터 : %d\n", peek);
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