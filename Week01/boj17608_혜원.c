#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int stack[100000];
int top = -1;

int push(int x) {
	top++;
	stack[top] = x;

}

int pop() {
	int x = stack[top--];
	return x;
}


int main(void) {
	int n = 0;
	int h = 0;
	int max = 0;
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &h);
		push(h);
	}

	for (int i = top; i >= 0; i--) {
		if (max < stack[i]) {
			max = stack[i];
			cnt++;
		}
			
	}
	

	printf("%d", cnt);
}