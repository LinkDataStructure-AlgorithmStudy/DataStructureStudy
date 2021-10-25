#define _CRT_SECURE_NO_WARNINGS   
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int main(int argc, char* argv[])
{
	int n, t;
	int temp;
	queue<int> q; //큐 선언

	cin >> n >> t;

	for (int i = 1; i <= n; ++i) {
		q.push(i); //값 넣어주기
	}

	cout << "<";

	while (1) {
		for (int i = 0; i < t - 1; ++i) {//값 빼주기
			temp = q.front();
			q.pop();
			q.push(temp);
		}
		cout << q.front(); //q의 앞에 값 출력
		q.pop();
		if (!q.size()) {
			break;  //사이즈가 0이면 그만
		}
		cout << ", ";
	}
	cout << ">";

	return 0;
}
