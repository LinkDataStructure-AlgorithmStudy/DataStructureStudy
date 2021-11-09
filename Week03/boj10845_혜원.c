#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int queue[10001];
int head = -1, tail = -1;	// 데이터 추가는 tail, 삭제는 head

void push(int data) {
	queue[++tail] = data;
}

int pop() {
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

int front() {
	if (!empty()) {
		int x = queue[head + 1];
		return x;
	}
	else
		return -1;
}

int back() {
	if (!empty()) {
		int x = queue[tail];
		return x;
	}
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
		if (strcmp(a, "push") == 0) {	// a는 배열 -> 문자열로 비교 x
			scanf("%d", &b);
			push(b);
		}
		else if (strcmp(a, "pop") == 0) {
			int x = pop();
			printf("%d\n", x);
		}
		else if (strcmp(a, "empty") == 0) {
			printf("%d\n", empty());
		}

		else if (strcmp(a, "front") == 0) {
			printf("%d\n", front());
		}
		else if (strcmp(a, "back") == 0) {
			printf("%d\n", back());
		}
		else if (strcmp(a, "size") == 0)
			printf("%d\n", tail - head);

	}
}