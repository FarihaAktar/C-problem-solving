#include <bits/stdc++.h>
using namespace std;


int main()
{
    int l, r;

    cin>>l;
    cin>>r;

    string str;

    cin>>str;


    reverse(str.begin()+ l - 1, str.begin() + r);

    cout<<str<<"\n";
    return 0;
}

