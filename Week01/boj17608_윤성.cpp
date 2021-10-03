#include <iostream>
#include <stack>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num ;
    int stk_size;
    int show_bar_count = 0;
    int most_big_bar = 0;
    stack<int> stk;

    cin>>num;

    for(int i=0; i<num; i++){
        int temp;
        cin>>temp;
        stk.push(temp);
    }

    while (!stk.empty())
    {
        if(most_big_bar < stk.top()){
            most_big_bar = stk.top();
            show_bar_count++;
            stk.pop();
        }
        else
            stk.pop();
    }
    
    cout<<show_bar_count;


    return 0;
}