#include<stdio.h>

void insertionsort(int arr[], int length) {
	for (int i = 1; i < length; i++) {
		int temp = arr[i];
		int j;
		for (j = i; j > 0 && arr[j - 1] > temp; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
}

// 1 2 3 4 5 6 7 8 9 10 11 12 13
// 3n + 1

void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void shellsort(int arr[], int length) {
	for (int h = length / 2; h > 0; h /= 2) {
		print(arr, length);
		for (int i = h; i < length; i++) {
			int temp = arr[i];
			int j;
			for (j = i - h; j >= 0 && arr[j] > temp; j -= h) {
				arr[j + h] = arr[j];
			}
			arr[j + h] = temp;
		}
	}
}



int main() {
	int arr[8] = { 3, 5, 1, 7, 2, 8, 4, 6 };
	int size = sizeof(arr) / sizeof(int);

	shellsort(arr, size, 4);
	print(arr, size);

	return 0;
}