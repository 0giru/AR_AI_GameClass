#pragma once
#ifndef ___IntStack
#define ___IntStack

#include<stdlib.h>
#include<stdio.h>

typedef struct {
	int max;
	int ptr;
	int *stk;
}IntStack;

int InitStack(IntStack *s, int max);
int Push(IntStack *s, int x);
int Pop(IntStack *s, int *x);
int PeekStack(const IntStack *s, int *x);
void ClearStack(IntStack *s);
int CapacityStack(const IntStack *s);
int SizeStack(const IntStack *s);
int IsEmptyStack(const IntStack *s);
int IsFullStack(const IntStack *s);
int SearchStack(const IntStack *s, int x);
void PrintStack(const IntStack *s);
void TerminateStack(IntStack *s);
#endif