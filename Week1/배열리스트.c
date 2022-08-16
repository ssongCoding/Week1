#include <stdio.h> // �⺻ �����

typedef struct { // �ڷᱸ�� : �迭����Ʈ
	int list[5]; // 5ĭ ����Ʈ ����
	int size; // ���� ����
} ArrayList;

// �ʱ�ȭ
void init(ArrayList* L) {
	L->size = 0; // ���� ���� 0���� ����
				 // �츰 ���� �����̴�!
	// �ּҰ��� �޾Ƽ�, ���� �� �ȿ� ���� �����Ϸ���
	// *L �̷��� ����ߴµ�
	// ����� �Ѱſ���. �׳� L�� ���� -> �� ���� ����
	// C�� �˾Ƽ� �ؼ����ְڴٰ�.
}

// ������� Ȯ��
int isEmpty(ArrayList* L) { // ��� �׳� ArrayList �޾Ƶ� �Ǵµ�
							// ���ϰ� �ַ���
	if (L->size == 0) { // �������,
						// = ���Ұ� 0���󱸿�
		return 1;		// true
	} else {
		return 0;		// false
	}
}

// �� á����
int isFull(ArrayList* L) {
	if (L->size == 5) {
		return 1;
	} else {
		return 0;
	}
}

// add
void add(ArrayList* L, int position, int item) {
	// add�� ���׷��̵� ���� �߰�
	// ����Ʈ�� ������ �ʾҴ���, position�� ���� �־��� �� �ִ� �ڸ��ΰ���
	//                           0 <=       <= _____  

	if (isFull(L) == 0 && position >= 0 && position <= L->size) {
		// �� �� ���Һ��� ��ĭ�� �ڷ� �о 
		for (int i = L->size - 1; i >= position; i--) {
			// ���� �� ���Һ��� position����
			// position �ڸ� ����ַ���
			L->list[i + 1] = L->list[i]; // ��ĭ �̷�
		}

		L->list[position] = item; // position�ڸ��� item
		L->size++;// ������ ���� + 1
	}
	else {
		printf("����Ʈ�� �� ���� ���� �Ұ��մϴ�.");
	}
}

// delete
void delete(ArrayList* L, int position) {
	// �� ����־�� �ϰ� && position�� ���Ұ� �ִ���
	if (isEmpty(L) == 0 && position >= 0 && position < L->size) {
		for (int i = position; i < L->size; i++) {
			L->list[i] = L->list[i + 1];
			// ex. ���� 5�� -> �迭 ��ȣ 0 ~ 4
			// �迭 4�� = �迭 5��
		}
		L->size--; // ���� ���� -1
	}
}

// display : ��ü ����(size) ���
//     �迭 ��ȣ 0 ~ size-1
void display(ArrayList* L) {
	if (isEmpty(L) == 0) {
		for (int i = 0; i < L->size; i++) {
			printf("%d ", L->list[i]);
		}
	}
}

int main() {

	ArrayList arrlist;

	init(&arrlist); // �ʱ�ȭ

	/* �׽�Ʈ�� ������ 3�� ���� */
	add(&arrlist, 0, 7);
	add(&arrlist, 1, 8);
	add(&arrlist, 2, 10);

	delete(&arrlist, 1);

	add(&arrlist, 1, 700);

	display(&arrlist); // 7 700 10

	return 0;
}