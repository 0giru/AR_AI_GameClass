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
		//������ ���ڿ��� ������ �������� ���ڰ� �������� �˻�
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
	////Temp ť�� �� �� ���� �ݺ�
	//while (IsEmptyQueue(&Temp) != 1) {
	//	int temp = 0;
	//	//Temp ť�� �ϳ� ����
	//	Dequeue(&Temp, &temp);
	//	// ������ ���
	//	if (temp >= 48 && temp <= 57) {
	//		
	//		int temp4 = 0;
	//		while (1) {
	//			PeekQueue(&Temp, &temp4);
	//			//Temp�� ������ ���ڶ��
	//			if (temp4 >= 48 && temp4 <= 57) {
	//				//�� ����
	//				Dequeue(&Temp, &temp);
	//			}
	//			else {
	//				break;
	//			}
	//		}
	//		Enqueue(&Postfix, temp5);
	//	}
	//	else {
	//		// ( �� ��� Operator�� Push
	//		if (temp == 40) {
	//			Push(&Operator, temp);
	//		}
	//		// ) �� ��� Operator���� (�� ����������  Pop�Ͽ� ť�� ����
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
	//		// �������� ���
	//		else {
	//			int temp3 = 0;
	//			//Operator�� �ֻ��� �����ڿ� ��
	//			int sPeek = 0;
	//			PeekStack(&Operator, &sPeek);
	//			// temp���� Operator�� �ֻ��� �����ڰ� �켱������ ���� ���
	//			if (sPeek < temp && sPeek > 41) {
	//				// Peek�� Postfixť�� ������ temp�� Operator�� ����
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