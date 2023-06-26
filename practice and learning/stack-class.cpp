#include<bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 500;

class Stack
{
public:
    int a[MAX_SIZE];
    int stack_size;

    Stack()
    {
        stack_size = 0;
    }

    void push(int val)
    {
        if(stack_size + 1 > MAX_SIZE)
        {
            cout<<"Stack is full"<<"\n";
            return;
        }
        stack_size++;
        a[stack_size-1] = val;
    }

    // delete the top most element. O(1)

    void pop()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        a[stack_size-1] =0;
        stack_size--;
    }

    //return the top element form the stack

    int top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack st;
    st.push(2);
    cout<<st.top()<<"\n";
    st.push(3);
    cout<<st.top()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    return 0;
}
