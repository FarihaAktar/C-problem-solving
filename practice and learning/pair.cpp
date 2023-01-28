#include<bits/stdc++.h>

using namespace std;

int main()
{
//    pair<pair<string,string>,int>p;
//
//    p.first.first = "adad";
//    p.first.second = "afaf";
//    p.second = 25;
//
//    cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<"\n";


    int n;
    cin>> n;
//    vector<pair<string,int>> v;
    vector<pair<pair<string,string>,int>> v;

    for(int i =1; i<=n; i++)
    {
        string name, nickName;
        int age;
        cin>>name>> nickName;
        cin>>age;

        v.push_back({{name, nickName},age});
    }

    for(int i=0; i<n; i++ )
    {
        cout<<v[i].first.first<< " "<<v[i].first.second<<" "<<v[i].second<<"\n";
    }
    return 0;
}
