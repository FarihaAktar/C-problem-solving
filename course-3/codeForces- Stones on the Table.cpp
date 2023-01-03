#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;

    cin>>n;

    string s;

    cin>>s;

    int ct =0;

    for(int i = 1; i<n; i++)
    {
        if(s[i] == s[i - 1])
        {
            ct++;
        }
    }

    cout<<ct<<"\n";

    return 0;
}
