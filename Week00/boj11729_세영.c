#include<stdio.h>
int count = 0;
void hanoitop(int num, char start, char mid, char to) {
	
	if (num == 1)
		printf_s("%c���� %c�� �̵�\n", start, to);
	else {
		hanoitop(num - 1, start, to, mid);
		printf_s("%c���� %c�� �̵�\n", start, to);
		hanoitop(num - 1, mid, start, to);
	}
	count++;
}
int main() {
	int num;
	
	printf_s("�ϳ���ž �̵��� ������ ������ ������ �Է����ּ���.\n");
	scanf_s("%d", &num);

	hanoitop(num, 'A', 'B', 'C');
	if (num == 1)
		printf_s("�� �̵�Ƚ���� 1���Դϴ�.");
	else {
	
		printf_s("�� �̵�Ƚ���� %d���Դϴ�.", count);
	}
	return 0;
}