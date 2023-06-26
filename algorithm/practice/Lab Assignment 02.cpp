#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;

    vector<int>dp(n+1);

    dp[1] = 0;

    for(int i=2; i<=n; i++)
    {
        dp[i] = 1 + dp[i -1];
        if(i % 2 == 0)
        {
            dp[i] = min(dp[i], 1 + dp[i/2]);
        }
        if(i % 3 == 0)
        {
            dp[i] = min(dp[i], 1 + dp[i/3]);
        }
    }

    cout<<dp[n]<<"\n";
    return 0;
}



//int minOp(int n, vector<int>& dp)
//{
//    if (n == 1)
//    {
//        return 0;
//    }
//    if (dp[n] != -1)
//    {
//        return dp[n];
//    }
//
//    int ans = 1 + minOp(n - 1, dp);
//
//    if (n % 2 == 0) ans = min(ans, 1 + minOp(n / 2, dp));
//    if (n % 3 == 0) ans = min(ans, 1 + minOp(n / 3, dp));
//
//    dp[n] = ans;
//
//    return ans;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    vector<int> dp(n + 1, -1);
//    int res = minOp(n, dp);
//    cout << res << endl;
//
//    return 0;
//}




//const int N = 101;
//
//int dp[N];
//
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    dp[0] = 0;
//    dp[1] = 1;
//    dp[2] = 1;
//
//    for(int i=3; i<=n; i++)
//    {
//
//        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
//    }
//
//    cout<<dp[n]<<"\n";
//}

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




//int maxPoints(vector<int>& nums) {
//    int n = nums.size();
//    vector<int> freq(100001, 0); // Frequency array to store occurrences of each element
//    vector<int> dp(100001, 0); // DP array to store maximum points for each element
//
//    // Fill up the frequency array
//    for (int i = 0; i < n; i++) {
//        freq[nums[i]]++;
//    }
//
//    // Base cases:
//    dp[0] = 0; // No points for element 0
//    dp[1] = freq[1]; // Points for element 1
//
//    // Iterate from 2 to 100000, filling up the dp array
//    for (int i = 2; i <= 100000; i++) {
//        // Option 1: Skip current element
//        // Maximum points for current element is maximum of points from previous element and skipping current element
//        dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
//    }
//
//    return dp[100000]; // Maximum points for element 100000
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    vector<int> nums(n);
//    for (int i = 0; i < n; i++) {
//        cin >> nums[i];
//    }
//
//    int ans = maxPoints(nums);
//    cout << ans << endl;
//
//    return 0;
//}



// not finished

//const int N = 1e5;
//
//vector<int>dp(N);
//
//int maxNum = 0;
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    vector<int>integer(n);
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>interger[i];
//        dp[integer[i]] = -1;
//    }
//
//    int num = integer[0];
//
//    for(int i=1; i<n; i++)
//    {
//        if(dp[i]  != -1)
//        {
//
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int t;
//    cin>>t;
//
//    int num = 0;
//
//    while(t--)
//    {
//        num++;
//        int n;
//        cin>>n;
//
//        vector<int>monster(n);
//        for(int i=0; i<n; i++)
//        {
//            cin>>monster[i];
//        }
//        vector<long long>dp(n + 1);
//
//        dp[0] = 0;
//        dp[1] = monster[0];
//
//        for(int i=2; i<=n;i++)
//        {
//            dp[i] = max(dp[i-1], dp[i-2] + monster[i-1]);
//        }
//
//        cout << "Case " << num << ": " << dp[n] << endl;
//    }
//    return 0;
//}


//
//long long getMaxCoins(vector<int>& monster, vector<long long>& dp, int index)
//{
//    if(index >= monster.size())
//    {
//        return 0;
//    }
//
//    if(dp[index] != -1)
//    {
//        return dp[index];
//    }
//
//    long long currentIndex = monster[index] + getMaxCoins(monster,dp, index + 2);
//    long long nextIndex = getMaxCoins(monster,dp, index + 1);
//
//    dp[index] = max(currentIndex, nextIndex);
//
//    return dp[index];
//}
//
//
//int main()
//{
//    int t;
//    cin>>t;
//
//    int num = 0;
//
//    while(t--)
//    {
//        num++;
//        int n;
//        cin>>n;
//
//        vector<int>monster(n);
//        for(int i=0; i<n; i++)
//        {
//            cin>>monster[i];
//        }
//        vector<long long>dp(n, -1);
//
//        long long coins = getMaxCoins(monster,dp, 0);
//
//        cout << "Case " << num << ": " << coins << endl;
//    }
//
//
//    return 0;
//}


//const int N = 101;
//
//int dp[N];
//
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    dp[1] = 1;
//    dp[2] = 1;
//
//    for(int i=3; i<=n; i++)
//    {
//        dp[i] = dp[i-1] + dp[i-2];
//    }
//
//    cout<<dp[n]<<"\n";
//}


//const int N = 101;
//
//int dp[N];
//
//int fib(int n)
//{
//    if(n <= 2)
//    {
//        return 1;
//    }
//
//    if(dp[n] != -1)
//    {
//        return dp[n];
//    }
//
//    int ans = fib(n-1) + fib(n-2);
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
//    cout<<fib(n)<<"\n";
//}
