#include<bits/stdc++.h>

using namespace std;


//class node{
//public:
//    float data;
//    char character;
//    node * next;
//    node * next_to_next;
//};

void fun(int l,int r)
{
    int mid = (l+r)/2;
    for(int i = l ; i <= r ; i++)
    {
        cout<<i<<endl;
    }
    if(l<r)
    {
        fun(l,mid);
        fun(mid+1,r);
    }
}

int main()
{
    int n;
    cin>>n;
//    fun(0,n-1);

    for(int i = 1 ; i <= n/2 ; i++)
    {
        for(int j = 1 ; j <= n ; j = j + i)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}

