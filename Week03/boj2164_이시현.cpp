#include <algorithm>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
	int num;
	queue<int> q;

	cin >> num;

	for (int i = 1; i <= num; ++i) {
		q.push(i);
	}

	while (q.size() > 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << endl;

	return 0;
}