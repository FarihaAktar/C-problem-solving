#include<bits/stdc++.h>

using namespace std;


/*

Write a program to convert an infix expression to a postfix expression. The expression will contain the following characters [ a-z , + , - , * , / , ( , ) ].


*/


//
//int prec(char s)
//{
//    if(s == '+' || s == '-')
//    {
//        return 1;
//    }
//    else if(s == '*' || s == '/')
//    {
//        return 2;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    string s;
//    cin>>s;
//
//    stack<char> st;
//    string postfix = "";
//
//    for(int i=0; i<s.size(); i++)
//    {
//        char now = s[i];
//        if(now >= 'a' && now <= 'z')
//        {
//            postfix += now;
//        }
//        else if(now == '(')
//        {
//            st.push('(');
//        }
//        else if(now == ')')
//        {
//            while(st.size() && st.top() != '(')
//            {
//                postfix += st.top();
//                st.pop();
//            }
//            st.pop();
//        }
//        else
//        {
//            while(st.size() && prec(st.top()) >= prec(now))
//            {
//                postfix += st.top();
//                st.pop();
//            }
//            st.push(now);
//        }
//    }
//
//    while(st.size())
//    {
//        postfix += st.top();
//        st.pop();
//    }
//
//    cout<<postfix<<"\n";
//    return 0;
//}




/*

Evaluate it using stack. All the numbers are single digit numbers in the input so you don’t have to worry about multi digit numbers.				      15
Sample Input
4+(5+6)*8-1
(2+4)*(5+6)
Sample Output
91
66

Congratulations you just built a mini calculator if you solved it correctly.

*/




int evaluate_ans(int x, int y, char s)
{

    switch(s)
    {
    case '+':
        return x + y;

    case '-':
        return x - y;

    case '*':
        return  x * y;

    case '/':
        return x / y;

    }
}


int prec(char s)
{
    if(s == '+' || s == '-')
    {
        return 1;
    }
    else if(s == '*' || s == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}


int main()
{
    string s;
    cin>>s;

    stack<char> op;
    stack<int> value;

    for(int i=0; i<s.size(); i++)
    {
        char curr = s[i];
        if(isdigit(curr))
        {
            value.push(curr - '0');
        }

        else if(curr == '(')
        {
            op.push(curr);
        }
        else if(curr == ')')
        {
            while(op.size() && op.top() != '(')
            {
                int num2 = value.top();
                value.pop();
                int num1 = value.top();
                value.pop();
                char opt = op.top();
                op.pop();
                int ans = evaluate_ans(num1, num2, opt);
                value.push(ans);
            }
            op.pop();
        }
        else
        {
            while(op.size() && prec(op.top()) >= prec(curr))
            {
                int num2 = value.top();
                value.pop();
                int num1 = value.top();
                value.pop();
                char opt = op.top();
                op.pop();
                int ans = evaluate_ans(num1, num2, opt);
                value.push(ans);
            }
            op.push(curr);
        }
    }

    while(!op.empty())
    {
        int num2 = value.top();
        value.pop();
        int num1 = value.top();
        value.pop();
        char opt = op.top();
        op.pop();
        int ans = evaluate_ans(num1, num2, opt);
        value.push(ans);
    }

    cout<<value.top()<<"\n";
    return 0;
}


