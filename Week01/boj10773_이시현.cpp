#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>

//10773-zero
using namespace std; //�Լ� ����� ���� std����

int main() {
	int num, k = 0, sum = 0;
	stack<int> s;

	cin >> k; //�Է�
	for (int i = 0; i < k; i++)
	{
		cin >> num;
		if (num == 0) { //0�̸� �� �׸� ����
			s.pop();
		}
		else {
			s.push(num); //���Է¹޾Ƽ� ���ÿ� ����ֱ�
		}
	}

	while (s.size()) {
		sum += s.top();
		s.pop();
	}

	cout << sum << endl;

}


