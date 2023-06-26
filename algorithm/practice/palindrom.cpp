#include<bits/stdc++.h>

using namespace std;


/*

You are given a string s  of small letters. You can reorder or rearrange the characters of that string in any order or any way. You have to determine whether you can build any valid palindrome from that string.Print “YES” if you can otherwise print “NO”.

Note - A palindrome is a number or string that reads the same backwards as forwards

Write a C++ program to solve this problem.

Constraints -

a<=s[i]<=z and the size of the string is between 1-50

Sample Input 1 -								Sample Output 1-

babdakkiikkii	  								YES

Sample Input 2 -								Sample Output 2-

abbfkbifkppkplab									 NO

Sample Input 3 -								Sample Output 3-

amadm									 	YES


Explanation -

One of the valid palindrome for sample input 1 is abiikkdkkiiba


*/

int main()
{
    string s;
    cin>>s;

    int odd = 0;

    int l = s.size();

    int arr[27];

    for(int i=1; i<27; i++)
    {
        arr[i] = 0;
    }

    for(int i=0; i<l; i++)
    {
        arr[(s[i] - 'a')+1]++;
    }

    for(int i=1; i<27; i++)
    {
        if(arr[i] % 2 != 0)
        {
            odd++;
        }
    }

    if(odd > 1)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
    }

    return 0;
}

