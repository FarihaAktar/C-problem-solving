#include<bits/stdc++.h>

using namespace std;



int main()
{
    stack<int> st;

    st.push(3);
    st.push(4);
    st.push(6);
    st.push(2);
    st.push(5);

    stack<int> sorted_stack;


    while(!st.empty())
    {
        int curr = st.top();
        st.pop();
        while(!sorted_stack.empty() && sorted_stack.top() < curr)
        {
            st.push(sorted_stack.top());
            sorted_stack.pop();
        }
        sorted_stack.push(curr);



    }

    while(!sorted_stack.empty())
    {
        cout<<sorted_stack.top()<<" ";
        sorted_stack.pop();
    }

    return 0;
}
