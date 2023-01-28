#include<bits/stdc++.h>

using namespace std;

int main()
{
//    int n;
//    cin>>n;
//
//    map<int, int>mp;

//    mp[1] = 45;
//    mp[3] = 23;
//    mp[2] = 276;

//    for(int i=1; i<=n; i++)
//    {
//        int in;
//        cin>>in;
//        mp[in]++;
//    }
//
//    for(pair<int,int>p: mp)
//    {
//        cout<<p.first<<": "<<p.second<<"\n";
//    }

//    for(auto it:mp)
//    {
//        cout<<it.first<<": "<<it.second<<"\n";
//    }


// new

    string s;
    cin>>s;

    map<char,vector<int>> mp;

    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]].push_back(i);
    }

    for(auto it:mp)
    {
        char ch = it.first;
        vector<int>v = it.second;
        cout<<ch<<" -> ";
        for(int val:v)
        {
            cout<<val<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
