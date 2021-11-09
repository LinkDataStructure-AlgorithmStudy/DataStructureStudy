#include<iostream>
#include<queue>

using namespace std;

int main() {
	int num;
	queue<int> q;
	cout << "카드의 개수를 입력해 주세요. : ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		q.push(i);
	}
	
	int t;
	while (1) {
		if (q.size() == 1)
			break;
		else {
			q.pop();
			t = q.front();
			q.push(t);
			q.pop();
		}


	}
	cout << q.front();
}