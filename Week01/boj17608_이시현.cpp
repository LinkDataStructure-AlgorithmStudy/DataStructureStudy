#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>

//17608-�����
using namespace std; //�Լ� ����� ���� std����

int main() {
	int max = 0, n, m, count = 0;
	stack<int> s;

	cin >> n; //�Է�
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		s.push(m); //���Է¹޾Ƽ� ���ÿ� ����ֱ�
	}
	while (s.size())//������ ������ �˻�
	{
		if (max < s.top()) //����� ���� ���ؼ� ����Ⱑ ���δٸ� ���� ����
		{
			max = s.top();//ū ���� ������Ʈ �Ǹ� �ٲ��ֱ�
			count++;
		}
		s.pop(); 
	}
	cout<<count; //���
}


