#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    int cnt;
    cin >> cnt; //�Է��� ����� ������ ����ڷκ��� �Է¹���

    stack<int> stack; //intŸ���� ������ 'stack'�� ����

   
    int stick = 0; //���̴� ������ ������ �� ���� stick ����
    int max = 0; //stack�� �Էµ� �� �� �ִ밪�� ������ ���� max ����

    for (int i = 0; i < cnt; i++) { //�տ��� �Է¹��� ������� ������ŭ �ݺ����� ����


        int num;
        cin >> num; //����ڰ� ������� ���̸� �Է�
        stack.push(num); //stack�� push�޼ҵ�� ����ڰ� �Է��� ���̰� stack�� ����
    }
        while (stack.size()) { //stack�� size�� 0�� �ɶ�����
            if (max < stack.top()) { //���� max�� ����� ���� stack�� top ������ ������
                max = stack.top();  //max�� top���� �ְ�
                stick++;  //���̴� ������ ������ �����ϴ� ������ stick�� 1�� ������Ŵ
            } 
            stack.pop(); //�׸��� top�� ���� pop()�޼ҵ�� �������� 
                          //�ϳ��ϳ��� �˻�
        }
          

    cout << stick << endl; //�� ������ ������ ���̴� ������ ������ stick�� ���������� ���

    return 0;
}