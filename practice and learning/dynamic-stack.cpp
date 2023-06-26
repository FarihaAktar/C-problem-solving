#include<bits/stdc++.h>

using namespace std;

//const int MAX_SIZE = 500;

class Stack
{
public:
    int *a;
    int stack_size;
    int array_cap;
    Stack()
    {
        a = new int[1];
        array_cap = 1;
        stack_size = 0;
    }

    // make the array cap multiplied by 2;

    void increase_size()
    {
        int * temp;
        temp = new int[array_cap * 2];
        for(int i=0; i<array_cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a, temp);
        delete  []temp;
        array_cap *= 2;
    }

    void push(int val)
    {
        if(stack_size + 1 > array_cap)
        {
            increase_size();
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
