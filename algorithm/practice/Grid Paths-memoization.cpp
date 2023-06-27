// problem link - https://cses.fi/problemset/task/1638

// there still some wrong answer showing. i need to modify this code

#include<bits/stdc++.h>
using namespace std;

const int N = 1001;
int dp[N][N];
int arr[N][N];

long long int unique_paths(int n,int m)
{
    // 1. base case
    if(n == 0 && m ==0)
    {
        return 1;
    }
    // 2. if result is already calculated return it
    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }

    // 3. calculate result from smaller sub-problems
    long long int ans = 0;
    if(n > 0)
    {
        if(arr[n][m] != -1)
        {

            ans += unique_paths(n-1, m);
        }

    }
    if(m > 0)
    {
        if(arr[n][m] != -1)
        {

            ans += unique_paths(n, m-1);
        }
    }

    dp[n][m] = ans;
    return ans;
}

int main()
{
    int ro;
    cin >> ro ;

    for(int i = 0 ; i < ro ; i++)
    {
        for(int j = 0 ; j < ro ; j++)
        {
            dp[i][j] = -1;
        }
    }

    for(int i = 0 ; i < ro ; i++)
    {

        for(int j = 0 ; j < ro ; j++)
        {
            char str;
            cin>>str;
            if(str == '*')
            {
                arr[i][j] = -1;

            }
            else
            {
                arr[i][j] = 1;
            }
        }
    }


    cout << unique_paths(ro-1, ro-1) << endl;
    return 0;
}

