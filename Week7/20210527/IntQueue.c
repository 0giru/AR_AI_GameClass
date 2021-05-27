#include "IntQueue.h"
#include<stdio.h>

int InitQueue(IntQueue *q, int max) {
	q->que = (int*)malloc(sizeof(int) * max);
	q->max = max;
	q->num = 0;
	q->front = -1;
	q->rear = -1;
}
int Enqueue(IntQueue *q, int x) {
	if (IsFullQueue(q) == 1) {
		printf("큐가 가득 차있습니다.\n");
		return -1;
	}
	else {
		if (q->rear == q->max - 1) {
			q->rear = 0;
			q->que[q->rear] = x;
			q->num += 1;
		}
		else {
			if (q->num == 0) {
				q->front = 0;
				q->que[q->front] = x;
				q->rear += 1;
				q->num += 1;
			}
			else {
				q->que[q->rear + 1] = x;
				q->rear += 1;
				q->num += 1;
			}
		}
	}
}
int Dequeue(IntQueue *q, int *x) {
	if (IsEmptyQueue(q) == 1) {
		printf("큐가 비어있습니다.\n");
		return -1;
	}
	if (q->front == q->max) {
		q->front = 0;
		*x = q->que[q->front];
		q->front += 1;
		q->num -= 1;
		return 1;
	}
	else {
		*x = q->que[q->front];
		q->front += 1;
		q->num -= 1;
		return 1;
	}
}
int PeekQueue(const IntQueue *q, int *x) {
	if (IsEmptyQueue(q) == 1) {
		printf("큐가 비었습니다.\n");
		return -1;
	}
	*x = q->que[q->front];
	return 1;
}
void ClearQueue(IntQueue *q) {
	q->front = -1;
	q->rear = -1;
	q->num = 0;
}
int CapacityQueue(const IntQueue *q) {
	return q->num;
}
int SizeQueue(const IntQueue *q) {
	return q->max;
}
int IsEmptyQueue(const IntQueue *q) {
	if (q->num == 0) {
		return 1;
	}
	else {
		return -1;
	}
}
int IsFullQueue(const IntQueue *q) {
	if (q->num == q->max) {
		return 1;
	}
	else {
		return -1;
	}
}
int SearchQueue(const IntQueue *q, int x) {
	for (int i = q->front; i <= q->rear; i++) {
		if (q->que[i] == x) {
			printf("%d는 큐의 %d번째에 있습니다.", x, i);
		}
	}
}
void PrintQueue(const IntQueue *q) {
	if (IsEmptyQueue(q) == 1) {
		printf("큐가 비어있습니다.\n");
	}
	else {
		if (q->rear >= q->front) {
			for (int i = q->front; i <= q->rear; i++) {
				printf("%c\n", q->que[i]);
			}
		}
		else {
			for (int i = q->front; i <= q->max - 1; i++) {
				printf("%c\n", q->que[i]);
			}
			for (int i = 0; i <= q->rear; i++) {
				printf("%c\n", q->que[i]);
			}
		}

	}
}
void TerminateQueue(IntQueue *q) {
	printf("큐를 종료합니다.\n");
	free(q->que);
	q->max = 0;
	q->num = 0;
	q->front = -1;
	q->rear = -1;
}