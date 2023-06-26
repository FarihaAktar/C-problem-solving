#include<bits/stdc++.h>
using namespace std;

const int N= 1e5 + 5;
int dp[N];


int perfectSqures(int n)
{
    if(n==0)
    {
        return 0;
    }

    if(dp[n] != -1 )
    {
        return dp[n];
    }
    int min_num =INT_MAX;

    for(int i=1; i*i <= n; i++)
    {
        int square = i*i;
        min_num = min(min_num, perfectSqures(n-square) +1);
    }
    dp[n] = min_num;

    return min_num;
}


int main()
{
    int n;
    cin>>n;

    for(int i = 1 ; i <= n+1 ; i++)
    {
        dp[i] = -1;
    }


    int ans = perfectSqures(n);
    cout<<ans<<endl;
    return 0;
}
