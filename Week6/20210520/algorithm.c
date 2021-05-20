#include<stdio.h>
#include<stdlib.h>

//int arr[7] = { 1, 2, 3, 5, 6, 8, 9 };
//int arrlen = sizeof(arr) / sizeof(int);
//
//void print(int start, int half, int end) {
//	printf("  |");
//	for (int i = 0; i < 2 * arrlen; i++) {
//		if (i == 2 * half && start == end) {
//			printf(" *\n");
//			break;
//		}
//		else if (i == 2 * half) {
//			printf("* ");
//		}
//		else if (i == 2 * start) {
//			printf("< ");
//		}
//		else if (i == 2 * end) {
//			printf(">\n");
//			break;
//		}
//		else {
//			printf(" ");
//		}
//	}
//	printf("  |");
//	for (int i = 0; i < arrlen; i++) {
//		printf(" %d", arr[i]);
//	}
//	printf("\n");
//}
//
//int BinarySearch(int* arr, int target, int start, int end) {
//	int result = 0;
//	int half = (start + end) / 2;
//
//	print(start, half, end);
//
//	if (*(arr + half) == target) {
//		return half; //target의 인덱스 반환
//	}
//	else if (*(arr + half) > target) {
//		BinarySearch(arr, target, start, half - 1);
//	}
//	else {
//		BinarySearch(arr, target, half + 1, end);
//	}
//}
//
//int main() {
//	int num;
//
//	printf("주어진 배열 : \n");
//	for (int i = 0; i < arrlen; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("찾을 원소 입력 : \n");
//	scanf("%d", &num);
//
//	printf("  |");
//	for (int i = 0; i < arrlen; i++) {
//		printf("  %d", i);
//	}
//	printf("\n-------------------------\n");
//
//	printf("\n%d은 x[%d]에 있습니다.", num, BinarySearch(arr, num, 0, arrlen - 1));
//	return 0;
//}

//int int_cmp(const int *a, const int *b) {
//	if (*a < *b) {
//		return -1;
//	}
//	else if (*a > *b) {
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main() {
//	int i, nx, ky;
//	int *x;
//	int *p;
//	puts("bsearch 함수를 사용하여 검색\n");
//	printf("요소 개수 : ");
//	scanf("%d", &nx);
//	x = (int*)calloc(nx, sizeof(int));
//
//	printf("오름차순으로 입력하세요.\n");
//	printf("x[0] : ");
//	scanf("%d", &x[0]);
//	for (i = 1; i < nx; i++) {
//		do {
//			printf("x[%d] : ", i);
//			scanf("%d", &x[i]);
//		} while(x[i] < x[i - 1]);
//	}
//	printf("검색값  : ");
//	scanf("%d", &ky);
//
//	p = bsearch(&ky,
//		x,
//		nx,
//		sizeof(int),
//		int_cmp);
//
//	if (p == NULL) {
//		puts("검색에 실패했습니다.");
//	}
//	else {
//		printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p-x));
//	}
//	free(x);
//
//	return 0;
//}

// void* bsearchx(const void* key, const void* base, size_t nmemb, size_t, size, int(*compar)(const void* , const void*))

//정수 비교
int int_cmp(const int *a, const int *b) {
	if (*a < *b) {
		return -1;
	}
	else if (*a > *b) {
		return 1;
	}
	else
		return 0;
}

void* bsearchx(const void* key,
	const void* base,
	size_t nmemb, size_t size,
	int(*compar)(const void*, const void*))
{
	int start = 0;
	int end = nmemb - 1;
	int half = (start + end) / 2;
	int* result;

	while (start <= end) {
		if (*(int*)key > *((int*)base + half)) {
			start = half + 1;
		}
		else if (*(int*)key < *((int*)base + half)) {
			end = half - 1;
		}
		else if (*(int*)key == *((int*)base + half)) {
			//result = &half;
			//return result;
			int temp = *((int*)base + half);
			int count = 0;
			while (1) {
				if (*((int*)base + half) == temp) {
					half -= 1;
				}
				else {
					half += 1;
					result = &half;
					return result;
				}
			}
		}
	}
}

int main() {
	int nx, ky;
	int* result;
	puts("bsearchx 함수를 사용하여 검색");
	printf("요소 개수 : ");
	scanf("%d", &nx);
	
	int* arr = (int*)calloc(nx, sizeof(int));

	printf("오름차순으로 입력하세요.\n");
	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	printf("검색할 값을 입력하세요.\n");
	scanf("%d", &ky);

	result = bsearchx(&ky, arr, nx, sizeof(int), int_cmp);

	if (result == NULL) {
		puts("검색에 실패했습니다.");
	}
	else {
		printf("%d는 arr[%d]에 있습니다.\n", ky, *result);
	}

	return 0;
}