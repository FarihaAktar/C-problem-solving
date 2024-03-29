/*
The Tribonacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.



Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
Example 2:

Input: n = 25
Output: 1389537


Constraints:

0 <= n <= 37
The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1.



*/



#include<bits/stdc++.h>

using namespace std;



const int N = 101;

int dp[N];


int main()
{
    int n;
    cin>>n;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;

    for(int i=3; i<=n; i++)
    {

        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cout<<dp[n]<<"\n";
}

//const int N = 101;
//
//int dp[N];
//
//int tib(int n)
//{
//    if(n == 0)
//    {
//        return 0;
//    }
//    if( n != 0 && n <= 2)
//    {
//        return 1;
//    }
//
//    if(dp[n] != -1)
//    {
//        return dp[n];
//    }
//
//    int ans = tib(n-1) + tib(n-2) + tib(n - 3);
//    dp[n] = ans;
//    return ans;
//}
//
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    for(int i=1; i<=n; i++)
//    {
//        dp[i] = -1;
//    }
//
//    cout<<tib(n)<<"\n";
//}

