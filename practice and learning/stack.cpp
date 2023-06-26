#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>numst;
    numst.push(5);
    numst.push(15);

    numst.pop();
    cout<<numst.top()<<"\n";
    cout<<numst.empty()<<"\n";

    return 0;
}
