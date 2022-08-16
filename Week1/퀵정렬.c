//#include <stdio.h>
//
//int arr[] = { 5, 3, 8, 4, 9, 1, 6, 2, 7 };
//int arr_size = sizeof(arr) / sizeof(int);
//
//// 두 수의 값을 바꾸는 함수
//void swap(int* a, int* b) {
//	int temp = *b;
//	*b = *a;
//	*a = temp;
//}
//
//// 퀵정렬
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
//		// arr[left] >= arr[pivot] : while문에 안 들어가요 = 전진 X 멈춰!
//		while (arr[left] < arr[pivot]) { // left가 가리키는 값이
//										 // left에 걸맞게 
//										 // pivot보다 작으면 통과~
//			left++; // 한칸 전진
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
//	// right 통째로 <-> pivot 통째로
//	//    right 값이랑 pivot 값을 바꾸시고 
//	//	  (right는 이제 필요 없음~~)
//	//    pivot -> pivot 값이 있는 자리 가리키게
//
//	quickSort(start, pivot-1); // pivot기준 왼쪽 배열
//	quickSort(pivot+1, finish); // pivot기준 오른쪽 배열
//}
//
//int main() {
//
//	quickSort(0, arr_size-1); // arr[0] ~ arr[8]
//	
//	// 배열 출력
//	for (int i = 0; i < arr_size; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}