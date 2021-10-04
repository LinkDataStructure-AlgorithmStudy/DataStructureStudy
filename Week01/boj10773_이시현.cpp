#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>

//10773-zero
using namespace std; //함수 사용을 위해 std선언

int main() {
	int num, k = 0, sum = 0;
	stack<int> s;

	cin >> k; //입력
	for (int i = 0; i < k; i++)
	{
		cin >> num;
		if (num == 0) { //0이면 전 항목 삭제
			s.pop();
		}
		else {
			s.push(num); //값입력받아서 스택에 집어넣기
		}
	}

	while (s.size()) {
		sum += s.top();
		s.pop();
	}

	cout << sum << endl;

}


