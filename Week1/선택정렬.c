//#include <stdio.h>
//
///*
//	���� ���� (Selection Sorting)
//	: ������ �� �� ���� �� ���� ���� ���� ���ð����� ���
//	  ������ �� �� ����(���ð� ����) �� �ּҰ��� ã�Ƽ�
//	  �ּҰ��� ���ð��� �ڸ��� �ٲ��ִ� ��
//*/
//
//int main() {
//	int arr[] = { 2, 3, 9, 6, 7 }; // 5ĭ
//
//	// ���ð� ���� for
//	int selection; // ���ð�
//	for (int i = 0; i < 4; i++) { // 0, 1, 2, 3
//		selection = arr[i]; // ���ð�
//
//		int minIndex = i; // �ּҰ� ����
//		for (int j = i+1; j < 5; j++) {
//			if (arr[j] < arr[minIndex]) {
//				minIndex = j;
//			}
//		}
//
//
//	}
//
//	// ���� ��� ���
//	for (int k = 0; k < 5; k++) {
//		printf("%d ", arr[k]);
//	}
//
//	return 0;
//}