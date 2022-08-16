//#include <stdio.h>
//
//int main() {
//	int arr[] = { 7, 4, 5, 1, 3 };
//			//arr[0] 1  2  3  4
//	int size = sizeof(arr) / sizeof(int); // 5
//
//	/*for (int j = size - 2; j >= 0; j--) { // 3, 2, 1, 0
//		for (int i = 0; i <= j; i++) {
//			if (arr[i] > arr[i + 1]) {
//				int temp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}*/
//
//	for (int i = 1; i < size; i++) { // 1 ~ 4 단계
//		for (int j = 0; j < size - i; j++) {
//			//      4 4 4 4
//			// i :  1 2 3 4 
//			// j <= 3 2 1 0
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//	// 출력
//	for (int k = 0; k < 5; k++) { // 0 ~ 4
//		printf("%d\n", arr[k]);
//	}
//
//	return 0;
//}