#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    int cnt;
    cin >> cnt; //입력할 명령의 개수를 사용자로부터 입력받음

    stack<int> stack; //int타입의 스택인 'stack'을 선언

    int sum = 0;

    for (int i = 0; i < cnt; i++) { //앞에서 입력받은 명령의 개수만큼 반복분을 실행


        int num;
        cin >> num; //사용자로부터 stack에 push할 숫자를 입력받아서 
        if (num != 0) {
            stack.push(num); //입력받은 숫자를 stack 객체에 구현되어 있는 push 메소드를 불러와
               //num을 매개변수로 넘겨 호출.
        }
        else if (num == 0) {
            stack.pop();
        }
    }

    for (int i = 0; !stack.empty(); ++i) { //stack의 size()메소드를 이용해 stack의 크기가 0이 될때 까지
        sum += stack.top(); //sum변수에 stack의top에 있는 값을 더하고 
        stack.pop(); //더한 후 그 값은 pop메소드를 이용해 제거 한 다음 
                    //stack의 모든 값을 더할 때까지 이 과정을 반복한다. 
    }

    cout << sum << endl; //그리고 이렇게 더해진 값이 저장된 sum 변수를 출력한다.

    return 0;
}