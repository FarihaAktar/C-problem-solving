#include<bits/stdc++.h>

using namespace std;


int main()
{
    priority_queue<int> pq;
    //O(logn)
    pq.push(3);
    pq.push(9);
    pq.push(10);
    pq.push(7);

    while(pq.size() != 0)
    {
        //top O(1)
        cout<<pq.top()<< " ";

        //pop O(logn)
        pq.pop();
    }
    return 0;
}
