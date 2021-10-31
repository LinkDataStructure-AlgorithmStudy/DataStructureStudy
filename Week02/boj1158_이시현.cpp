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
	queue<int> q; //ť ����

	cin >> n >> t;

	for (int i = 1; i <= n; ++i) {
		q.push(i); //�� �־��ֱ�
	}

	cout << "<";

	while (1) {
		for (int i = 0; i < t - 1; ++i) {//�� ���ֱ�
			temp = q.front();
			q.pop();
			q.push(temp);
		}
		cout << q.front(); //q�� �տ� �� ���
		q.pop();
		if (!q.size()) {
			break;  //����� 0�̸� �׸�
		}
		cout << ", ";
	}
	cout << ">";

	return 0;
}
