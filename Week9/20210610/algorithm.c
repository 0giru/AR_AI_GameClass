#include<iostream>

int test[8] = { 5, 1, 2, 4, 3, 8, 7, 6 };



void quicksort(int* arr, int start, int end) {
	int pivot = start;
	int left = start + 1;
	int right = end;

	if (start >= end) {
		return;
	}

	while (left <= right) {
		while (left <= end && arr[left] <= arr[pivot]) {
			left += 1;
		}
		while (right > start && arr[right] >= arr[pivot]) {
			right -= 1;
		}
		if (left > right) {
			int temp = arr[pivot];
			arr[pivot] = arr[right];
			arr[right] = temp;
		}
		else {
			int temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
		}
	}
	quicksort(arr, start, right - 1);
	quicksort(arr, right + 1, end);
}

int main() {
	int size = sizeof(test) / sizeof(int);

	/*quicksort(test, 0, size - 1);

	for (int i = 0; i < size; i++) {
		printf("%d ", test[i]);
	}*/

	return 0;
}