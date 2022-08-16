//#include <stdio.h> 
//
//int main() {
//	int arr[5] = { 8, 5, 6, 2, 4 }; // 초기 배열
//				// 5 8 6 2 4
//				// 5 6 8 2 4
//	//size = 5
//
//	int key; // 5, 6, 2, 4
//			 // arr[1]~arr[size-1]
//
//	for (int i = 1; i < 5; i++) {
//		key = arr[i];
//
//		int j;
//		for (j = i - 1; j >= 0; j--) {
//			if (arr[j] > key) { // key랑 비교해서 arr[j]가 더 크면,
//				arr[j + 1] = arr[j];
//				//arr[j] = key;
//			} else { // arr[j]가 key보다 작거나 같을 때,
//				//arr[j + 1] = key; //< --이건 안될까요?
//				printf("else 문 안에 j + 1 = %d\n", j + 1);
//				printf("else 문 안에 key = %d\n", key);
//				break;
//			}
//		}
//		
//		printf("break 이후에 j + 1 = %d\n", j + 1);
//		printf("break 이후에 key = %d\n", key);
//		arr[j+1] = key;
//	}
//
//	// 출력
//	for (int k = 0; k < 5; k++) {
//		printf("arr[%d] = %d\n", k, arr[k]);
//	}
//
//	return 0;
//}