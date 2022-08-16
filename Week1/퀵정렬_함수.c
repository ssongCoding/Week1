#include <stdio.h>
#include <stdlib.h> // 표준 라이브러리

int compare(int* a, int* b) {
	if (*a < *b) {
		return -1; // 음수 
	} else if (*a > *b) {
		return 1;  // 양수
	} else { // *a == *b
		return 0;
	}
}

int main() {
	int arr[] = { 5, 3, 8, 4, 9, 1, 6, 2, 7 };
	int arr_size = sizeof(arr) / sizeof(int);
	int item_size = sizeof(int);

	/*int a = 3;
	int b = 5;
	int result = compare(&a, &b);*/

	// 매개변수 4개
	// 배열, 배열 칸 수, 아이템 사이즈, 비교 함수
	qsort(arr, arr_size, item_size, compare);
	
	// 출력
	for (int i = 0; i < arr_size; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}