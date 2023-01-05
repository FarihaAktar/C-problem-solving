#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int>visited(n + 1);
    vector<int>primes;

//    time complexity O(nlogn)
    for(int i=2; i<=n; i++)
    {
        //i = 2 , n/2
        // i = 3, n/3
        // i=4, n/4
        //i = 5, n/5
        // ....
        // n/2 + n/3 + n/4 +...+ n/n
        // n( 1/2 + 1/3 + 1/4+ 1/n)
        // ln( log base e n)
        //O(nlogn)
        if(!visited[i])
        {
            primes.push_back(i);
            for(int x=2; i*x<=n;x++)
            {
                visited[i*x] = true;
            }
        }
    }

    cout<<primes.size()<<"\n";
    for(int i=0; i<primes.size(); i++)
    {
        cout<<primes[i]<<" ";
    }
    cout<<"\n";


    return 0;
}
