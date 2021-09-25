#include <iostream>

using namespace std;

// from 출발점
// across 경유지
// to 목적지
void hanoi(int n, int from, int across, int to){
// n 이 1이면 from 에서 to 로
if(n==1){cout<<from<<' '<<to<<'\n';return;};

// n이 1이 아니면, 1이상이면
// n-1을 from에서 across로 to를 경유해 옮김
hanoi(n-1, from, to, across);
// n 을 from 에서 to 로 옮김
cout<<from<<' '<<to<<'\n';
// n-1을 across에서 to로 from을 경유해 옮김
hanoi(n-1, across, from, to);
}

int main(){
    int n;
    cin>>n;
    int k = 1;
    // 옮긴 횟수 : 2^n - 1
    for(int i=0; i<n; i++)
    {
        k *= 2;
    }
    cout<<k-1<<'\n';
    hanoi(n,1,2,3);
    return 0;
}
