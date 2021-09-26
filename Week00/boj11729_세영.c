#include<stdio.h>
int count = 0;
void hanoitop(int num, char start, char mid, char to) {
	
	if (num == 1)
		printf_s("%c에서 %c로 이동\n", start, to);
	else {
		hanoitop(num - 1, start, to, mid);
		printf_s("%c에서 %c로 이동\n", start, to);
		hanoitop(num - 1, mid, start, to);
	}
	count++;
}
int main() {
	int num;
	
	printf_s("하노이탑 이동을 실행할 원판의 개수를 입력해주세요.\n");
	scanf_s("%d", &num);

	hanoitop(num, 'A', 'B', 'C');
	if (num == 1)
		printf_s("총 이동횟수는 1번입니다.");
	else {
	
		printf_s("총 이동횟수는 %d번입니다.", count);
	}
	return 0;
}