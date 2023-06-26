#include<bits/stdc++.h>

using namespace std;

/*
Given a string, check if it's a palindrome using a Deque.   			      15
Sample Input
abcba
abcca
Sample Output
Yes
No

*/



string is_palindrom(string s)
{
    deque<char>dq;

    for(int i=0; i<s.size(); i++)
    {
        dq.push_back(s[i]);
    }

    while(dq.size() > 1)
    {
        char fst = dq.front();
        char lst = dq.back();

        if(fst != lst)
        {
            return "No";

        }
        dq.pop_front();
        dq.pop_back();
    }

    return "Yes";
}

int main()
{
    string s;
    cin>>s;


    cout<<is_palindrom(s)<<"\n";


    return 0;
}




// another way to solve it

//int main()
//{
//    string s;
//    cin>>s;
//    int num = s.size()/ 2;
//
//    deque<char>dq;
//
//    for(int i=0; i<s.size(); i++)
//    {
//        dq.push_back(s[i]);
//    }
//
//    for(int i=0; i<num; i++)
//    {
////        cout<<s[i]<<"\n";
//        if(dq.size() <= 1)
//        {
//            break;
//        }
//        char op1 = dq.front();
//        char op2 = dq.back();
//
//        if(op1 == op2)
//        {
//            dq.pop_front();
//            dq.pop_back();
//        }
//    }
//
//    if(dq.size() <= 1)
//    {
//        cout<<"Yes\n";
//    }
//    else
//    {
//        cout<<"No\n";
//    }
//    return 0;
//}




