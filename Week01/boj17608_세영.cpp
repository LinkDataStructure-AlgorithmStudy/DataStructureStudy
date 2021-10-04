#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    int cnt;
    cin >> cnt; //입력할 막대기 개수를 사용자로부터 입력받음

    stack<int> stack; //int타입의 스택인 'stack'을 선언

   
    int stick = 0; //보이는 막대의 개수를 셀 변수 stick 선언
    int max = 0; //stack에 입력된 값 중 최대값을 저장할 변수 max 선언

    for (int i = 0; i < cnt; i++) { //앞에서 입력받은 막대기의 개수만큼 반복분을 실행


        int num;
        cin >> num; //사용자가 막대기의 길이를 입력
        stack.push(num); //stack의 push메소드로 사용자가 입력한 길이가 stack에 쌓임
    }
        while (stack.size()) { //stack의 size가 0이 될때까지
            if (max < stack.top()) { //만약 max에 저장된 값이 stack의 top 값보다 작으면
                max = stack.top();  //max에 top값을 넣고
                stick++;  //보이는 막대의 개수를 저장하는 변수인 stick에 1을 증가시킴
            } 
            stack.pop(); //그리고 top의 값을 pop()메소드로 삭제시켜 
                          //하나하나씩 검사
        }
          

    cout << stick << endl; //이 과정이 끝나면 보이는 막대의 개수인 stick을 최종적으로 출력

    return 0;
}