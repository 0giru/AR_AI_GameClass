#include<stdio.h>

char item[6][100] = { "kar98k", "�Ķ�����", "������", "�ҹ��", "����", "����" };
int item_value[6] = { 7, 10, 7, 6, 2, 3 };
int item_weight[6] = { 4, 2, 4, 6, 10 ,5 };
int check[6] = { 0 ,0, 0, 0, 0, 0 };
int Result = 0;

void recursion(int index, int cur_value, int cur_weight) {
	if (cur_weight > 10) {
		return;
	}
	if (index == 6) {
		if (cur_value > Result) {
			Result = cur_value;
			for (int i = 0; i < 6; i++) {
				if (check[i] == 1) {
					printf("%s\n", item[i]);
				}
			}
			printf("\n");
			return;
		}
		else {
			return;
		}
	}

	//index ��° ������ ��� ���
	check[index] = 1;
	recursion(index + 1, cur_value + item_value[index], cur_weight + item_weight[index]);
	check[index] = 0;

	//index ��° ������ ���� �ʴ� ���
	recursion(index + 1, cur_value, cur_weight);
}

int main() {
	recursion(0, 0, 0);

	printf("�߿䵵 : %d", Result);

	return 0;
}