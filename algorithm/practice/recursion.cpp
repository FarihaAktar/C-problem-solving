#include<bits/stdc++.h>
using namespace std;

/*
You are given an integer n.Print the sum of digits of that integer.
Solve this problem using recursion.

Write a C++ program to solve this problem.

Constraints-

10<=n<=1000

Sample Input - 							Sample Output -

     234									9

*/

int rec(int num)
{
    if(num % 10 == 0)
    {
        return 0;
    }
    int m = num / 10;
    return rec(m) + (num % 10);
}


int main()
{
    int num;
    cin>>num;

    int res = rec(num);


    cout<<res;
    return 0;
}
