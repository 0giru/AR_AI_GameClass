#include<stdio.h>

#define num 10

int test[num] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
int result[num] = { 0, };

void swap(int* argv1, int* argv2) {
	int temp;
	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}

void heapify(int* tree, int index, int max) {
	int child1 = index * 2 + 1;
	int child2 = index * 2 + 2;

	if (index < 0 || index > max) {
		return;
	}
	if (child1 <= max && tree[index] < tree[child1]) {
		swap(tree + index, tree + child1);
		heapify(tree, child1, max);
	}
	if (child2 <= max && tree[index] < tree[child2]) {
		swap(tree + index, tree + child2);
		heapify(tree, child2, max);
	}
	heapify(tree, index - 1, max);
}

void heapSort(int* tree) {
	int i = 0;
	while (i < num) {
		result[num - i - 1] = tree[0];
		tree[0] = tree[num - 1 - i];
		heapify(tree, num - 1 - i, num - 1 - i);
		i++;
	}
}
int main() {
	printf("힙에 데이터 입력 전 : \n");
	for (int i = 0; i < num; i++) {
		printf("%d ", test[i]);
	}
	printf("\n\n");
	heapify(test, num - 1, num - 1);
	printf("힙에 데이터 입력 후 (max heap): \n");
	for (int i = 0; i < num; i++) {
		printf("%d ", test[i]);
	}
	printf("\n\n");
	heapSort(test);
	printf("힙 소트 결과 : \n");
	for (int i = 0; i < num; i++) {
		printf("%d ", result[i]);
	}
	return 0;
}