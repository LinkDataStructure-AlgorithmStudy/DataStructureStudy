#include<stdio.h>
int main() {
	int num;
	int result = 1;
	printf_s("팩토리얼 값을 구할 정수를 하나 입력해주세요: ");
	scanf_s("%d", &num);
	while (num != 1) {
		result = result * num;
		num--;

	}
	printf("입력한 정수의 팩토리얼 값은 : %d" , result);
	return 0;
}
