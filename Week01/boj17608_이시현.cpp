#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>

//17608-막대기
using namespace std; //함수 사용을 위해 std선언

int main() {
	int max = 0, n, m, count = 0;
	stack<int> s;

	cin >> n; //입력
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		s.push(m); //값입력받아서 스택에 집어넣기
	}
	while (s.size())//마지막 값부터 검사
	{
		if (max < s.top()) //꼭대기 값과 비교해서 막대기가 보인다면 개수 세기
		{
			max = s.top();//큰 값이 업데이트 되면 바꿔주기
			count++;
		}
		s.pop(); 
	}
	cout<<count; //출력
}


