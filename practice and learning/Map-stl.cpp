#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int>mp;

    //O(logn)
    mp["cat"] = 1;
    mp["dog"] = 3;
    mp["monkey"] =7;

    //print - O(n)
    for(auto it: mp)
    {
        cout<<"key = "<<it.first<<", value = "<<it.second<<"\n";
    }
    //O(1)
    cout<<mp.size()<<"\n";

    return 0;
}

