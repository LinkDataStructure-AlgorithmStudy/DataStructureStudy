#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    int cnt;
    cin >> cnt; //�Է��� ����� ������ ����ڷκ��� �Է¹���

    stack<int> stack; //intŸ���� ������ 'stack'�� ����

    int sum = 0;

    for (int i = 0; i < cnt; i++) { //�տ��� �Է¹��� ����� ������ŭ �ݺ����� ����


        int num;
        cin >> num; //����ڷκ��� stack�� push�� ���ڸ� �Է¹޾Ƽ� 
        if (num != 0) {
            stack.push(num); //�Է¹��� ���ڸ� stack ��ü�� �����Ǿ� �ִ� push �޼ҵ带 �ҷ���
               //num�� �Ű������� �Ѱ� ȣ��.
        }
        else if (num == 0) {
            stack.pop();
        }
    }

    for (int i = 0; !stack.empty(); ++i) { //stack�� size()�޼ҵ带 �̿��� stack�� ũ�Ⱑ 0�� �ɶ� ����
        sum += stack.top(); //sum������ stack��top�� �ִ� ���� ���ϰ� 
        stack.pop(); //���� �� �� ���� pop�޼ҵ带 �̿��� ���� �� ���� 
                    //stack�� ��� ���� ���� ������ �� ������ �ݺ��Ѵ�. 
    }

    cout << sum << endl; //�׸��� �̷��� ������ ���� ����� sum ������ ����Ѵ�.

    return 0;
}