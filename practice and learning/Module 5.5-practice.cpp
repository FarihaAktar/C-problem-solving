#include<bits/stdc++.h>

using namespace std;


string binarySearch(int n, vector<int> arr, int num)
{
    int left = 0, right = n-1;

    while(left<= right)
    {

        int mid = (left + right)/2;
        if(arr[mid] == num)
        {
            return "YES\n";
        }
        if(arr[mid] < num)
        {
            left = mid + 1;

        }
        else
        {
            right = mid -1;
        }
    }

    return "NO\n";


}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    int  q;

    cin>>q;
    int num;

    for(int i=1; i<=q;i++)
    {
        cin>>num;
        cout<<binarySearch(n, arr, num);
    }

    return 0;
}
