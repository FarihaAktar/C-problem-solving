#include<bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    while(!dq.empty())
    {
        cout<<dq.front()<<"\n";
        dq.pop_front();
    }
    return 0;
}
