#include<bits/stdc++.h>

using namespace std;

/*
Write a program to check if a given bracket sequence is valid or not.
The sequence will contain 3 types of brackets -> First Bracket ( ) , Second Bracket { } and Third Bracket [ ].
You can use builtin Stack for this problem.		      10

Input
Output
{[][]()(())}
Yes
{[][]()(()))}
No
{[](})
No


*/

int main()
{
    string s;
    cin>>s;

    stack<char> st;
    for(int i=0; i< s.size(); i++)
    {
        if(i == 0)
        {
            st.push(s[i]);
        }
        else
        {
            if(st.size() >= 1)
            {
                if(st.top() == '(' && s[i] == ')')
                {
                    st.pop();
                }
                else if(st.top() == '{' && s[i] == '}')
                {
                    st.pop();
                }
                else if(st.top() == '[' && s[i] == ']')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    if(st.empty())
    {
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}
