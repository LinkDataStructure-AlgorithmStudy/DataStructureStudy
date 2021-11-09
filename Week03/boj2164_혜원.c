#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int queue[1000000];
int head = -1, tail = -1;	// ������ �߰��� tail, ������ head

void push(int data) {
	queue[++tail] = data;
}

int pop() {		// �� �� ������ ����
	if (!empty()) {
		int x = queue[++head];
		return x;
	}
	else
		return -1;
}


int empty() {
	if (tail == head)
		return 1;
	else
		return 0;
}

// head+1�� �� �� �����͸� ����Ű��, tail�� �� �� �����͸� ����Ŵ

int main(void) {
	int n = 0;

	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++) {
		push(i);
	}

	for (int i = 0; i < n - 1; i++) {
		pop();
		queue[++tail] = queue[++head];	// �� �ڿ� ù��° ī�� �ű� 
	}

	for (int i = head + 1; i < tail + 1; i++)
		printf("%d", queue[i]);


}