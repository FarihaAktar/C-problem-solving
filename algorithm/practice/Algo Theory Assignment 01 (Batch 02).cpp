#include<bits/stdc++.h>


using namespace std;

int res(int n, int m)
{
    if(m == 1)
    {
        return n;
    }
    m -= 1;
    cout<<n<<"\n";
    return n * res(n, m);

}

int main()
{
    int n, m;
    cin>>n>>m;
    int ans = res(n, m);
    cout<<ans<<"\n";
    return 0;
}
