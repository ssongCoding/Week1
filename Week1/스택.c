#include <stdio.h>

typedef struct {
	int stack[5]; // 스택 역할을 해줄 배열
	int size; // 스택에 쌓인 원소 개수
			  // 제일 위 원소 위치 : size - 1
} Stack;

// 초기화
void init(Stack* S) {
	S->size = 0;
}

// push : item을 Stack 젤 위에 삽입
void push(Stack* S, int item) {
	if (isFull(S) == 0) {
					      // size :  0, 1, 2, 3 ...
		S->stack[S->size] = item; // 0, 1, 2, 3, 4, ...
		S->size++;
	}
	else {
		printf("스택이 꽉 차서, 값을 추가할 수 없습니다.");
	}				
}

// pop
void pop(Stack* S) {
	if (isEmpty(S) == 0) {
		S->size--; // size로 스택의 범위를 갖고노는거
				// 가능한 이유? 
				// 배열은 늘 0부터 시작하니까요.
	}
	else {
		printf("스택이 비어서, pop할 게 없음.");
	}
}

// peek : 가장 위 항목 출력
void peek(Stack* S) {
	if (isEmpty(S) == 0) {
		printf("Top 원소는 %d\n", S->stack[S->size - 1]);
	}
}

// isFull
int isFull(Stack* S) {
	if (S->size == 5) {
		return 1;
	}
	else {
		return 0;
	}
}

// isEmpty
int isEmpty(Stack* S) {
	if (S->size == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

// display
void display(Stack* S) {
	if (isEmpty(S) == 0) { // 비어있지 않으면
	//  isEmpty(S) != 1
	//  !isEmpty(S)
		for (int i = 0; i < S->size; i++) {
			printf("%d ", S->stack[i]);
		}
	}
	else {
		printf("스택이 비어서, 출력할 게 없음.");
	}
}

int main() {
	Stack S;
	init(&S);

	push(&S, 7);
	push(&S, 8);
	push(&S, 9);

	display(&S); // 7 8 9

	pop(&S);
	pop(&S);

	display(&S); // 7

	return 0;
}