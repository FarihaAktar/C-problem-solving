#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    q.push(5);
    q.push(3);
    q.push(2);

    cout<<q.size()<<"\n";

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.empty()<<"\n";
    return 0;
}
