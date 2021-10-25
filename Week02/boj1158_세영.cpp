#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

int main(int argc, char* argv[])
{
	int n, k;
	int temp;
	queue<int> q; //queue를 하나 선언

	cout << "N에 해당하는 정수를 하나 입력해 주세요.: ";
	cin >> n; //요세푸스 순열에서 N에 해당하는 정수를 변수 n에 입력받음
	cout << "k에 해당하는 정수를 하나 입력해 주세요.: ";
	cin >> k; //k에 해당하는 정수를 변수 k에 입력받음 

	for (int i = 1; i <= n; ++i) {
		q.push(i); //큐에 1부터 입력받은 N에 해당하는 정수까지의 숫자를 차례대로 push해준다.
	}

	cout << "<"; //출력 format을 위해 먼저 이 문자를 출력 

	while (1) {
		for (int i = 0; i < k - 1; ++i) { 
			temp = q.front(); //q에 저장되어 있는 숫자중 맨 앞의 숫자를 temp에 저장하고
			q.pop(); //pop으로 값을 꺼낸 다음
			q.push(temp); //temp에 저장했던 숫자를 q에 넣어준다. (삭제할 순서가 아닌 값들은 뒤로 보냄)
						//이 반복문은 k번째의 숫자를 삭제하고 나머지는 뒤로 보내 
						//k번째 값을 또 삭제하고 모두 삭제될 때까지의 과정을 반복하기 위함이다.
		}
		cout << q.front(); //k번째 숫자를 출력해준다.
		q.pop(); 
		if (!q.size()) { //q의 사이즈가 0이되면
			break; //break로 반복문을 멈추고
		}
		cout << ", "; //k번째 숫자를 출력해줄 때마다 쉼표도 출력해 준다. 
	}
	cout << ">"; //마무리 출력 format으로 이 문자를 출력해준다.

	return 0;
}