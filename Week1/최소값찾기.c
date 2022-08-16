//#include <stdio.h> // printf
//
//int main() {
//	int arr[] = { 9, 5, 7 };
//
//	int minIndex = 0; // 젤 앞 원소가 최소값 가정
//	for (int i = 1; i < 3; i++) { // 1, 2
//		if (arr[i] < arr[minIndex]) {
//			minIndex = i;
//		}
//	}
//
//	/*
//	int min = arr[0]; // 젤 앞 원소가 최소값 가정
//	for (int i = 1; i < 3; i++) { // 1, 2
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	*/
//
//	printf("%d", arr[minIndex]); // 5
//
//	return 0;
//}