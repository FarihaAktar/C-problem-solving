#include<bits/stdc++.h>

using namespace std;


//tabulation or iteration or bottom-up method
const int N = 101;
int dp[N]; // dp array


int main()
{
    int n;
    cin>>n;

    //base case
    dp[1] =1;
    dp[2] = 1;

    // 2. loop through the states
    for(int i=3; i<=n; i++)
    {
        //2.1. and calculate the answer from smaller sub-problems
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<dp[n]<<endl;
    return 0;
}
