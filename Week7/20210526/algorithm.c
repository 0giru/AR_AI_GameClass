#include<stdio.h>
#include<stdlib.h>
#include"IntStack.h"
#include"IntQueue.h"

char arr[100] = "((4*2+12)*(123+7))";
char buf[20];
IntQueue Temp;
IntStack Operator;
IntStack Operand;
IntQueue Postfix;

void Init(char *arr) {
	//48 ~ 57
	// ( : 40
	// ) : 41
	int i = 0;
	while (1) {
		int count = 0;
		if (*(arr + i) == '\0') {
			break;
		}
		//숫자인 문자열이 나오면 다음에도 숫자가 나오는지 검사
		if ((int)*(arr + i) >= 48 && (int)*(arr + i) <= 57) {
			count += 1;
			while (1) {
				if ((int)*(arr + i + count) >= 48 && (int)*(arr + i + count) <= 57) {
					count += 1;
				}
				else {
					break;
				}
			}
		}
		if (count != 0) {
			for (int j = i; j < i + count; j++) {
				Enqueue(&Temp, *(arr + j));
			}
			i += count;
		}
		else {
			Enqueue(&Temp, *(arr + i));
			i += 1;
		}
	}
}

int main() {
	InitQueue(&Temp, 100);
	InitStack(&Operator, 100);
	InitStack(&Operand, 100);
	InitQueue(&Postfix, 100);

	Init(arr);

	PrintQueue(&Temp);

	////Procdeure 1
	////Temp 큐가 빌 때 까지 반복
	//while (IsEmptyQueue(&Temp) != 1) {
	//	int temp = 0;
	//	//Temp 큐를 하나 꺼냄
	//	Dequeue(&Temp, &temp);
	//	// 숫자일 경우
	//	if (temp >= 48 && temp <= 57) {
	//		
	//		int temp4 = 0;
	//		while (1) {
	//			PeekQueue(&Temp, &temp4);
	//			//Temp의 다음도 숫자라면
	//			if (temp4 >= 48 && temp4 <= 57) {
	//				//또 꺼냄
	//				Dequeue(&Temp, &temp);
	//			}
	//			else {
	//				break;
	//			}
	//		}
	//		Enqueue(&Postfix, temp5);
	//	}
	//	else {
	//		// ( 일 경우 Operator에 Push
	//		if (temp == 40) {
	//			Push(&Operator, temp);
	//		}
	//		// ) 일 경우 Operator에서 (를 만날때까지  Pop하여 큐로 보냄
	//		else if (temp == 41) {
	//			int temp2 = 0;
	//			while (1) {
	//				Pop(&Operator, &temp2);
	//				if (temp2 == 40) {
	//					break;
	//				}
	//				Enqueue(&Postfix, temp2);
	//			}
	//		}
	//		// 연산자일 경우
	//		else {
	//			int temp3 = 0;
	//			//Operator의 최상위 연산자와 비교
	//			int sPeek = 0;
	//			PeekStack(&Operator, &sPeek);
	//			// temp보다 Operator의 최상위 연산자가 우선순위가 높을 경우
	//			if (sPeek < temp && sPeek > 41) {
	//				// Peek를 Postfix큐로 보내고 temp를 Operator에 넣음
	//				Pop(&Operator, &temp3);
	//				Enqueue(&Postfix, temp3);
	//				Push(&Operator, temp);
	//			}
	//			else {
	//				Push(&Operator, temp);
	//			}
	//		}
	//	}
	//}

	////Procedure2

	//PrintQueue(&Postfix);

	

	return 0;
}