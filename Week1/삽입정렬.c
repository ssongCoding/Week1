//#include <stdio.h> 
//
//int main() {
//	int arr[5] = { 8, 5, 6, 2, 4 }; // �ʱ� �迭
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
//			if (arr[j] > key) { // key�� ���ؼ� arr[j]�� �� ũ��,
//				arr[j + 1] = arr[j];
//				//arr[j] = key;
//			} else { // arr[j]�� key���� �۰ų� ���� ��,
//				//arr[j + 1] = key; //< --�̰� �ȵɱ��?
//				printf("else �� �ȿ� j + 1 = %d\n", j + 1);
//				printf("else �� �ȿ� key = %d\n", key);
//				break;
//			}
//		}
//		
//		printf("break ���Ŀ� j + 1 = %d\n", j + 1);
//		printf("break ���Ŀ� key = %d\n", key);
//		arr[j+1] = key;
//	}
//
//	// ���
//	for (int k = 0; k < 5; k++) {
//		printf("arr[%d] = %d\n", k, arr[k]);
//	}
//
//	return 0;
//}