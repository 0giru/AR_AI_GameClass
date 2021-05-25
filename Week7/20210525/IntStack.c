#include "IntStack.h"

int InitStack(IntStack *s, int max) {
	s->stk = (int *)malloc(sizeof(int) * max);
	s->ptr = 0;
	s->max = max;
}
int Push(IntStack *s, int x) {
	if (IsFull(s) == 0) {
		return -1;
	}
	else {
		s->stk[s->ptr] = x;
		s->ptr += 1;
		return 0;
	}
}
int Pop(IntStack *s, int *x) {
	if (IsEmpty(s) == 0) {
		printf("스택이 비어있습니다.\n");
		return -1;
	}
	else {
		*x = s->stk[s->ptr - 1];
		s->ptr -= 1;
		return 0;
	}
}
int Peek(const IntStack *s, int *x) {
	*x = s->stk[s->ptr - 1];
	return 0;
}
void Clear(IntStack *s) {
	s->ptr = 0;
}
int Capacity(const IntStack *s) {
	return s->max;
}
int Size(const IntStack *s) {
	return s->ptr;
}
int IsEmpty(const IntStack *s) {
	if (s->ptr == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
int IsFull(const IntStack *s) {
	if (s->ptr == s->max) {
		printf("스택이 가득 찼습니다.\n");
		return 0;
	}
	else {
		return 1;
	}
}
int Search(const IntStack *s, int x) {
	if (IsEmpty(s) == 1) {
		printf("스택이 비어있습니다.\n");
		return -1;
	}
	for (int i = 0; i < s->ptr; i++) {
		if (*(s->stk + i) == x) {
			printf("%d는 스택의 %d번째 요소입니다.", x, i);
			return i;
		}
	}
	printf("찾는 값이 없습니다.\n");
	return -1;
}
void Print(const IntStack *s) {
	if (IsEmpty(s) == 0) {
		printf("스택이 비어있습니다.");
	}
	else {
		for (int i = 0; i < s->ptr; i++) {
			printf("%d\n", *(s->stk + i));
		}
	}
}
void Terminate(IntStack *s) {
	printf("스택을 종료합니다.\n");
	free(s->stk);
	s->max = 0;
	s->ptr = 0;
	exit(0);
}