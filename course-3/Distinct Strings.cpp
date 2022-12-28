#include <bits/stdc++.h>
using namespace std;


int factorial(int n)
{
    int fact = 1;
    for(int i=2; i<=n; i++)
    {
        fact *= i;
    }

    return fact;
}
int countPermutation(string s)
{
        int arr[27];
    int l = s.length();

    for(int i=1; i<27; i++)
    {
        arr[i] = 0;
    }
    for(int i=0; i<l; i++)
    {
        arr[(s[i] - 'a')+1]++;
    }

    int fact = 1;
    for(int i = 1; i<27; i++)
    {
        if(arr[i] > 1)
        {
            fact = fact *  factorial(arr[i]);
        }
    }

    return factorial(l) / fact;

}
int main()
{
    string s;

    cin>>s;



    cout<<countPermutation(s)<<endl;

    return 0;
}
