#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // time complexity: O(n^2)
    // memory complexity: O(n)
    for(int pass = 0; pass<n; pass++)
    {
        int last = n-1-pass;
            bool sorted = true;
        for(int j = 0; j<=last-1; j++)
        {
//            sorted = true;
//            cout<<"before sort "<<pass<<": ";
//            for(int i=0; i<n; i++)
//            {
//                cout<<a[i]<<" ";
//            }
//            cout<<"--> ";
            if(a[j]  > a[j+1])
            {
                swap(a[j], a[j+1]);
                sorted = false;
            }
//            cout<<"After sort "<<pass<<": ";
//            for(int i=0; i<n; i++)
//            {
//                cout<<a[i]<<" ";
//            }
//            cout<<"\n";
        }
        if(sorted)
        {
            break;
        }
        cout<<"After Pass "<<pass<<": ";
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }

    cout<<"After Sorting :";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

/*
pass =0; last = n-1
pass = 1; last = n-2
..
pass = n-1; last = 0

sum = ((n-1)*n)/2
O(n^2)

*/
