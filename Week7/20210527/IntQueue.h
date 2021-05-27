#pragma once
#ifndef ___IntQueue
#define ___IntQueue

#include<stdlib.h>

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int *que;
}IntQueue;

int InitQueue(IntQueue *q, int max);
int Enqueue(IntQueue *q, int x);
int Dequeue(IntQueue *q, int *x);
int PeekQueue(const IntQueue *q, int *x);
void ClearQueue(IntQueue *q);
int CapacityQueue(const IntQueue *q);
int SizeQueue(const IntQueue *q);
int IsEmptyQueue(const IntQueue *q);
int IsFullQueue(const IntQueue *q);
int SearchQueue(const IntQueue *q, int x);
void PrintQueue(const IntQueue *q);
void TerminateQueue(IntQueue *q);

#endif