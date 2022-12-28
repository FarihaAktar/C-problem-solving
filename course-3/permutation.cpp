#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int n;
    cin>>n;

    if(n == 1) cout<< 1 <<"\n";
    else if(n == 2 || n == 3) cout<<"NO SOLUTION"<<"\n";
    else if(n >= 4)
    {
        for(long long int i = 2; i<=n; i+=2) printf("%lld ", i);
        for(long long int i = 1; i<=n; i+=2) printf("%lld ", i);
    }

    return 0;
}
