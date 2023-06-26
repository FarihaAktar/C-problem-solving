#include<bits/stdc++.h>

using namespace std;



int evaluatePostfix(string exp)
{
    stack<int> s;
    for (int i = 0; i < exp.size(); i++)
    {

        if (isdigit(exp[i]))
        {
            s.push(exp[i] - '0');
        }
        else
        {
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();

//            cout<<op2<< " "<< op1<<"\n";
            int result;
            switch (exp[i])
            {
            case '+':
                result = op1 + op2;
                break;
            case '-':
                result = op1 - op2;
                break;
            case '*':
                result = op1 * op2;
                break;
            case '/':
                result = op1 / op2;
                break;
            }
            s.push(result);
        }
    }
    return s.top();
}


int main()
{
    string exp = "231*+9-";
//    cout << "Postfix expression: " << exp << endl;
//    evaluatePostfix(exp);
    cout << "Result: " << evaluatePostfix(exp) << endl;
    return 0;
}
