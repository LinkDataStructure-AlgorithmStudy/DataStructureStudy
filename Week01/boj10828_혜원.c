
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 10000

int stack[LEN];
int top = -1;

int isFull() {
	if (top >= LEN - 1)
		return 1;
	else
		return 0;
}


int isEmpty() {	//스택이 비어있으면 1, 아니면 0을 출력한다.
	if (top == -1)
		return 1;
	else
		return 0;
}


void push(int x) { //정수 X를 스택에 넣는 연산이다.
	
	if (isFull() == 0) {
		top++;
		stack[top] = x;
	}

}

int pop() {	//스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	if (isEmpty() == 0) {
		int x = stack[top];
		top--;
		return x;
	}
	else
		return -1;
}

int top_index() {	//스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	if (isEmpty() == 0)
		return stack[top];
	else
		return -1;
}



int main(void) {
	
	int n = 0;
	char a[6];
	int b = 0;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", &a);
		if (strcmp(a, "push") == 0) {	// 비교연산(==) X -> a는 배열
			scanf("%d", &b);			// 배열은 메모리 주소를 값으로 갖고 있기 때문에 문자열 비교 x
			push(b);
		}
		else if (strcmp(a, "pop") == 0) {
			int x = pop();
			printf("%d\n", x);
		}
		else if (strcmp(a, "size") == 0)
			printf("%d\n", top + 1);
		
		else if (strcmp(a, "empty") == 0) {
			printf("%d\n", isEmpty());
		}
		else if (strcmp(a, "top") == 0) {
			printf("%d\n", top_index());
		}
	}
	
}


