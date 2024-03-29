#include<bits/stdc++.h>

using namespace std;



const int N = 101;

int dp[N];


int main()
{
    int n;
    cin>>n;

    // base case
    dp[1] = 1;
    dp[2] = 1;

    //loop through the states
    for(int i=3; i<=n; i++)
    {
        // and calculate the answer from smaller sub-problems
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<dp[n]<<"\n";
}
