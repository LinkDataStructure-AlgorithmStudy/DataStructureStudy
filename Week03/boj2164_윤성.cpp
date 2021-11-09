#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> cards;
    int N;
    cin >> N;

    //card setting
    for (int i = 1; i < N + 1; i++)
        cards.push(i);

    while (1)
    {
        if (cards.size() == 1)
            break;
        else
        {
            //1.trash first card
            cards.pop();
            //2.first cards go last
            int temp = cards.front();
            cards.pop();
            cards.push(temp);
        }
    }
    cout << cards.front() << endl;
    return 0;
}