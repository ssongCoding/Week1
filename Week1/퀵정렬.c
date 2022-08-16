//#include <stdio.h>
//
//int arr[] = { 5, 3, 8, 4, 9, 1, 6, 2, 7 };
//int arr_size = sizeof(arr) / sizeof(int);
//
//// �� ���� ���� �ٲٴ� �Լ�
//void swap(int* a, int* b) {
//	int temp = *b;
//	*b = *a;
//	*a = temp;
//}
//
//// ������
//void quickSort(int start, int finish) {
//
//	if (start >= finish) {
//		return;
//	}
//
//	int pivot = start;
//	int left = start + 1;
//	int right = finish;
//
//	while (left <= right) {
//		// arr[left] >= arr[pivot] : while���� �� ���� = ���� X ����!
//		while (arr[left] < arr[pivot]) { // left�� ����Ű�� ����
//										 // left�� �ɸ°� 
//										 // pivot���� ������ ���~
//			left++; // ��ĭ ����
//		} // left :arr[1] = 3
//
//		while (arr[right] > arr[pivot]) {
//			right--;
//		} // right : arr[0] = 1
//
//		if (left <= right) {
//			swap(&arr[left], &arr[right]);
//
//			left++;
//			right--;
//		}
//	}
//
//	swap(&arr[right], &arr[pivot]);
//	pivot = right;
//	// right ��°�� <-> pivot ��°��
//	//    right ���̶� pivot ���� �ٲٽð� 
//	//	  (right�� ���� �ʿ� ����~~)
//	//    pivot -> pivot ���� �ִ� �ڸ� ����Ű��
//
//	quickSort(start, pivot-1); // pivot���� ���� �迭
//	quickSort(pivot+1, finish); // pivot���� ������ �迭
//}
//
//int main() {
//
//	quickSort(0, arr_size-1); // arr[0] ~ arr[8]
//	
//	// �迭 ���
//	for (int i = 0; i < arr_size; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}