#include <iostream>
#include <list>

using namespace std;

int main()
{
    // 이중 연결 리스트
    list<int> sequence;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i < n + 1; i++)
        sequence.push_back(i);

    // 반복자로 탐색.
    list<int>::iterator iter = sequence.begin();
    bool first_flag = true;
    cout << "<";
    while (!sequence.empty())
    {
        for (int count = 0; count < k; count++)
        {
            // 첫 시행.
            if (first_flag == true)
            {
                first_flag = false;
                continue;
            }
            iter++;
            if (iter == sequence.end())
                iter = sequence.begin();
        }
        int tmp = *iter;
        sequence.erase(iter, ++iter);
        if (!sequence.empty())
            cout << tmp << ", ";
        else
            cout << tmp;
        iter--;
    }
    cout << ">\n";
    return 0;
}