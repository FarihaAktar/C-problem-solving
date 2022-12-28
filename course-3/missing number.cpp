#include <bits/stdc++.h>


using namespace std;



int main()
{
    long long int n;

    cin>>n;

    vector<long long int>arr;

    long long int s;
    for(int i=0; i<n-1; i++)
    {
        cin>>s;
        arr.push_back(s);
    }

    sort(arr.begin(), arr.end());

    long long int num = 1;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] != num)
        {
            cout<<num<<endl;
            return 0;
        }
        num++;
    }

    cout<<num<<endl;
    return 0;
}
