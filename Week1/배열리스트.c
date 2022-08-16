#include <stdio.h> // 기본 입출력

typedef struct { // 자료구조 : 배열리스트
	int list[5]; // 5칸 리스트 역할
	int size; // 원소 개수
} ArrayList;

// 초기화
void init(ArrayList* L) {
	L->size = 0; // 원소 개수 0으로 셋팅
				 // 우린 이제 시작이다!
	// 주소값을 받아서, 원래 그 안에 값에 접근하려면
	// *L 이렇게 써야했는디
	// 약속을 한거에요. 그냥 L을 쓰되 -> 랑 같이 쓰면
	// C언어가 알아서 해석해주겠다고.
}

// 비었는지 확인
int isEmpty(ArrayList* L) { // 사실 그냥 ArrayList 받아도 되는데
							// 통일감 주려고
	if (L->size == 0) { // 비었으면,
						// = 원소가 0개라구요
		return 1;		// true
	} else {
		return 0;		// false
	}
}

// 꽉 찼는지
int isFull(ArrayList* L) {
	if (L->size == 5) {
		return 1;
	} else {
		return 0;
	}
}

// add
void add(ArrayList* L, int position, int item) {
	// add의 업그레이드 조건 추가
	// 리스트가 꽉차진 않았는지, position가 내가 넣어줄 수 있는 자리인건지
	//                           0 <=       <= _____  

	if (isFull(L) == 0 && position >= 0 && position <= L->size) {
		// 젤 뒤 원소부터 한칸씩 뒤로 밀어서 
		for (int i = L->size - 1; i >= position; i--) {
			// 제일 끝 원소부터 position까지
			// position 자리 비워주려고
			L->list[i + 1] = L->list[i]; // 한칸 미룸
		}

		L->list[position] = item; // position자리에 item
		L->size++;// 원소의 개수 + 1
	}
	else {
		printf("리스트가 꽉 차서 삽입 불가합니다.");
	}
}

// delete
void delete(ArrayList* L, int position) {
	// 안 비어있어야 하고 && position에 원소가 있는지
	if (isEmpty(L) == 0 && position >= 0 && position < L->size) {
		for (int i = position; i < L->size; i++) {
			L->list[i] = L->list[i + 1];
			// ex. 원소 5개 -> 배열 번호 0 ~ 4
			// 배열 4번 = 배열 5번
		}
		L->size--; // 원소 개수 -1
	}
}

// display : 전체 원소(size) 출력
//     배열 번호 0 ~ size-1
void display(ArrayList* L) {
	if (isEmpty(L) == 0) {
		for (int i = 0; i < L->size; i++) {
			printf("%d ", L->list[i]);
		}
	}
}

int main() {

	ArrayList arrlist;

	init(&arrlist); // 초기화

	/* 테스트용 데이터 3개 삽입 */
	add(&arrlist, 0, 7);
	add(&arrlist, 1, 8);
	add(&arrlist, 2, 10);

	delete(&arrlist, 1);

	add(&arrlist, 1, 700);

	display(&arrlist); // 7 700 10

	return 0;
}