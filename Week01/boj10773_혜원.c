
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int stack[100000];
int top = -1;

int isEmpty() {
	if (top == -1)
		return 1;
	else
		return 0;
}

int pop() {
	if (isEmpty() == 0) {
		int x = stack[top];
		top--;
		return x;
	}
}

int main(void) {
	int k = 0;
	int n = 0;
	int sum = 0;
	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		scanf("%d", &n);

		if (n == 0) {
			if (isEmpty() == 0) {
				int x = pop();
				sum -= x;
			}
		}
		else {
			top++;
			stack[top] = n;
			sum += n;
		}
	}
	printf("%d", sum);
}