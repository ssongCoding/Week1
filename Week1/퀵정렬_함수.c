#include <stdio.h>
#include <stdlib.h> // ǥ�� ���̺귯��

int compare(int* a, int* b) {
	if (*a < *b) {
		return -1; // ���� 
	} else if (*a > *b) {
		return 1;  // ���
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

	// �Ű����� 4��
	// �迭, �迭 ĭ ��, ������ ������, �� �Լ�
	qsort(arr, arr_size, item_size, compare);
	
	// ���
	for (int i = 0; i < arr_size; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}