
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


int isEmpty() {	//������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	if (top == -1)
		return 1;
	else
		return 0;
}


void push(int x) { //���� X�� ���ÿ� �ִ� �����̴�.
	
	if (isFull() == 0) {
		top++;
		stack[top] = x;
	}

}

int pop() {	//���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	if (isEmpty() == 0) {
		int x = stack[top];
		top--;
		return x;
	}
	else
		return -1;
}

int top_index() {	//������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
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
		if (strcmp(a, "push") == 0) {	// �񱳿���(==) X -> a�� �迭
			scanf("%d", &b);			// �迭�� �޸� �ּҸ� ������ ���� �ֱ� ������ ���ڿ� �� x
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


