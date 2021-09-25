#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(n);

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d", factorial(n));

}
int factorial(n) {
	if (n > 1) {
		n = n * factorial(n - 1);
	}
	else {
		n = 1;
	}
	return n;

}
