#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void) {
    int cnt;
    cin >> cnt; //�Է��� ����� ������ ����ڷκ��� �Է¹���

    stack<int> stack; //intŸ���� ������ 'stack'�� ����
    string str; //����� �Է¹޾� ������ string��ü�� 'str'�� ����

    for (int i = 0; i < cnt; i++) { //�տ��� �Է¹��� ����� ������ŭ �ݺ����� ����
        cin >> str; //string��ü�� 'str'�� ����ڷκ��� ����� �Է¹���

        if (str == "push") { //push ����� �ԷµǾ��� ��

            int num; 
            cin >> num; //����ڷκ��� stack�� push�� ���ڸ� �Է¹޾Ƽ� 
            stack.push(num); //�Է¹��� ���ڸ� stack ��ü�� �����Ǿ� �ִ� push �޼ҵ带 �ҷ���
                            //num�� �Ű������� �Ѱ� ȣ��.

        }
        else if (str == "pop") {    //pop ����� �ԷµǾ��� ��

            if (!stack.empty()) { //empty()�޼ҵ�� stack�� ������� ������ false�� ����ϹǷ�
                                    //empty()�޼ҵ尡 fasle�̸�, ��, stack�� ������� ������
                cout << stack.top() << endl; //stack�� top�� ����ϰ�
                stack.pop(); //pop�޼ҵ带 ������
            }
            else {
                cout << "-1" << endl; //stack�� ��������� stack�� ������� �� stack�� 
                                        //top�� -1�� ���� �����Ƿ� -1�� ���
            }

        }
        else if (str == "empty") {    //empty ����� �ԷµǾ��� ��

            if (stack.empty()) { //stack�� ��������� true�� �ǹ̸� ���� 1�� ���
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl; //������������� false�� �ǹ̸� ���� 0�� ���
            }

        }
        else if (str == "top") {        //top ����� �ԷµǾ��� ��

            if (!stack.empty()) { //empty()�޼ҵ�� stack�� ������� ������ false�� ����ϹǷ�
                                    //empty()�޼ҵ尡 fasle�̸�, ��, stack�� ������� ������
                cout << stack.top() << endl; //stack�� top() �޼ҵ带 ȣ���� ���� stack��
                                               //top�� �ִ� ���� ���
            }
            else {  //stack�� ���������
                cout << "-1" << endl; //stack�� ������� �� top�� -1�� ���� �����Ƿ� -1�� ���
            }

        }
        else if (str == "size") {        //size ����� �ԷµǾ��� ��

            cout << stack.size() << endl; //stack�� �����Ǿ��ִ� size()�Լ��� ȣ�� �� ���

        }
        
      

    }
    return 0;
}