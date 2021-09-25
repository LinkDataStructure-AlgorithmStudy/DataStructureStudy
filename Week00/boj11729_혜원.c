
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int hanoi(int a, int b, int c, int n) {		//출발지 / 목적지x / 목적지 / 개수

	if (n == 1)
		printf("%d %d\n", a, c);

	else {
		hanoi(a, c, b, n - 1);
		printf("%d %d\n", a, c);
		hanoi(b, a, c, n - 1);
	}
}

int cnt(int n) {
	int count = 0;
	if (n == 1)
		count = 1;
	else
		count = 2 * cnt(n - 1) + 1;

	return count;
}

int main(void) {
	int n;
	scanf("%d", &n);

	printf("%d\n", cnt(n));
	hanoi(1, 2, 3, n);

}