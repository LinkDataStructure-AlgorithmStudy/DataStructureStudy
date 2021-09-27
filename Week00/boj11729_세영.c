#include<stdio.h>
int count = 0; //이동횟수를 저장할 변수 선언
void hanoitop(int num, char start, char mid, char to) {
	
	if (num == 1) //입력된 원판의 개수가 1개면 A에서 C로 옮기면 끝이므로 
		printf_s("%c에서 %c로 이동\n", start, to); //start에서 to로의 이동을 출력 
	else {
		//하노이탑 공식을 살펴보면 n개의 원판 중에서 1개 빼고 시작지점(start)에서 전부를 중간 지점(mid)으로 옮기고,
		//남은 하나를 끝자리(to)로 옮기고
		//중간(mid)로 옮겨진 원판을 다시 끝자리(to)로 옮기는 과정이 반복되기 때문에 
		
		hanoitop(num - 1, start, to, mid); //start에서 mid로 옮기는 hanoitop메소드를 hanoitop메소드 안에서 실행하고
		printf_s("%c에서 %c로 이동\n", start, to); //남은 하나를 끝자리로 옮겨준 후
		hanoitop(num - 1, mid, start, to); //mid에서 to로 옮기는 hanoitop메소드를 hanoitop메소드 안에서 호출해 실행해준다.
	}
	count++; //그리고 hanoitop()메소드의 실행 1번은 원판을 1번 이동시키는 것과 같으므로
	         //메소드가 한 번 실행될 때마다 이동 횟수를 세어주기 위해 후위연산자를 이용해 +1연산을 해준다.
}
int main() {
	int num;
	
	printf_s("하노이탑 이동을 실행할 원판의 개수를 입력해주세요.\n");
	scanf_s("%d", &num); //사용자로부터 원판의 개수를 입력받고 

	hanoitop(num, 'A', 'B', 'C');  //입력받은 원판의 개수를 hanoitop()메소드의 매개변수로 넘겨주며 호출한다.
	if (num == 1)
		printf_s("총 이동횟수는 1번입니다."); //입력받은 원판의 개수가 1이면 이동횟수는 무조건 1번이므로 이를 그대로 출력해주고,
	else {
	
		printf_s("총 이동횟수는 %d번입니다.", count); //1이 아니라면 hanoitop()메소드가 한 번 실행될 때마다 +1되었던 count변수를 이동횟수로 출력해준다.
	}
	return 0;
}
