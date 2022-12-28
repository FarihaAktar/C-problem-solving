#include <bits/stdc++.h>
using namespace std;


int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;

    cin>>n;

    vector<long long int>arr;
    arr.resize(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());


    long long int num = 1;
    for(int i = 1; i<n; i++)
    {
        if(arr[i] != arr[i - 1])
        {
            num++;
        }
    }

    cout<<num<<"\n";

    return 0;
}
