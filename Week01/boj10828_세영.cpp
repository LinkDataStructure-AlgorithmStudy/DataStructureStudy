#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void) {
    int cnt;
    cin >> cnt; //입력할 명령의 개수를 사용자로부터 입력받음

    stack<int> stack; //int타입의 스택인 'stack'을 선언
    string str; //명령을 입력받아 저장할 string객체인 'str'을 선언

    for (int i = 0; i < cnt; i++) { //앞에서 입력받은 명령의 개수만큼 반복분을 실행
        cin >> str; //string객체인 'str'에 사용자로부터 명령을 입력받음

        if (str == "push") { //push 명령이 입력되었을 때

            int num; 
            cin >> num; //사용자로부터 stack에 push할 숫자를 입력받아서 
            stack.push(num); //입력받은 숫자를 stack 객체에 구현되어 있는 push 메소드를 불러와
                            //num을 매개변수로 넘겨 호출.

        }
        else if (str == "pop") {    //pop 명령이 입력되었을 때

            if (!stack.empty()) { //empty()메소드는 stack이 비어있지 않으면 false를 출력하므로
                                    //empty()메소드가 fasle이면, 즉, stack이 비어있지 않으면
                cout << stack.top() << endl; //stack의 top을 출력하고
                stack.pop(); //pop메소드를 실행함
            }
            else {
                cout << "-1" << endl; //stack이 비어있으면 stack이 비어있을 때 stack의 
                                        //top은 -1의 값을 가지므로 -1을 출력
            }

        }
        else if (str == "empty") {    //empty 명령이 입력되었을 때

            if (stack.empty()) { //stack이 비어있으면 true의 의미를 갖는 1을 출력
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl; //비어있지않으면 false의 의미를 갖는 0을 출력
            }

        }
        else if (str == "top") {        //top 명령이 입력되었을 때

            if (!stack.empty()) { //empty()메소드는 stack이 비어있지 않으면 false를 출력하므로
                                    //empty()메소드가 fasle이면, 즉, stack이 비어있지 않으면
                cout << stack.top() << endl; //stack의 top() 메소드를 호출해 현재 stack의
                                               //top에 있는 값을 출력
            }
            else {  //stack이 비어있으면
                cout << "-1" << endl; //stack이 비어있을 시 top은 -1의 값을 가지므로 -1을 출력
            }

        }
        else if (str == "size") {        //size 명령이 입력되었을 때

            cout << stack.size() << endl; //stack에 구현되어있는 size()함수를 호출 후 출력

        }
        
      

    }
    return 0;
}