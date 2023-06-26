#include<bits/stdc++.h>


using namespace std;
/*
you are given an array of n positive integers. the next line contain q queries, in each query you will be given a type and an integer k, if the type is 1 then perform lower bound,
if the type is 2 then perform upper bound.

    >>lower bound = if k present then return k otherwise return greater immediate value of k.
    >> upper bound = if k is present or not return immediate greater element of k.
*/
int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    int q;
    cin>>q;
    while(q--)
    {
        int type, k;
        cin>>type>>k;
        if(type == 1)
        {
            auto it = lower_bound(v.begin(), v.end(), k);
            if(it != v.end())
            {
                int idx = it - v.begin(),value = *it;
                cout<<idx<<" -> " << value << "\n";
            }
            else
            {
                cout<<-1<<"\n";
            }

        }
        else
        {
            auto it = upper_bound(v.begin(), v.end(), k);
            if(it != v.end())
            {
                int idx = it - v.begin(), value = *it;
                cout<<idx<< " -> "<<value<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }

        }
    }
    return 0;
}
