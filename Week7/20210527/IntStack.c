#include "IntStack.h"

int InitStack(IntStack *s, int max) {
	s->stk = (int *)malloc(sizeof(int) * max);
	s->ptr = 0;
	s->max = max;
}
int Push(IntStack *s, int x) {
	if (IsFullStack(s) == 0) {
		return -1;
	}
	else {
		s->stk[s->ptr] = x;
		s->ptr += 1;
		return 0;
	}
}
int Pop(IntStack *s, int *x) {
	if (IsEmptyStack(s) == 0) {
		printf("스택이 비어있습니다.\n");
		return -1;
	}
	else {
		*x = s->stk[s->ptr - 1];
		s->ptr -= 1;
		return 0;
	}
}
int PeekStack(const IntStack *s, int *x) {
	*x = s->stk[s->ptr - 1];
	return 0;
}
void ClearStack(IntStack *s) {
	s->ptr = 0;
}
int CapacityStack(const IntStack *s) {
	return s->max;
}
int SizeStack(const IntStack *s) {
	return s->ptr;
}
int IsEmptyStack(const IntStack *s) {
	if (s->ptr == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
int IsFullStack(const IntStack *s) {
	if (s->ptr == s->max) {
		printf("스택이 가득 찼습니다.\n");
		return 0;
	}
	else {
		return 1;
	}
}
int SearchStack(const IntStack *s, int x) {
	if (IsEmptyStack(s) == 1) {
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
void PrintStack(const IntStack *s) {
	if (IsEmptyStack(s) == 0) {
		printf("스택이 비어있습니다.");
	}
	else {
		for (int i = 0; i < s->ptr; i++) {
			printf("%c\n", *(s->stk + i));
		}
	}
}
void TerminateStack(IntStack *s) {
	printf("스택을 종료합니다.\n");
	free(s->stk);
	s->max = 0;
	s->ptr = 0;
	exit(0);
}