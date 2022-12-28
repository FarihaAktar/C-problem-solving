#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;

    cin >> n;

    while(n >1)
    {
        cout<<n<<" ";

        if(n%2 ==0)
        {
            n= n/2;
        }
        else
        {
            n = 3*n+1;
        }
    }

    cout<<n<<"\n";
//    vector<int> v= {2,5,1,9,7};
//    reverse(v.begin(),v.end());
//
//    for(int i=0; i<v.size(); i++)
//        cout << v[i] << " ";
//    cout << '\n';
    return 0;
}
