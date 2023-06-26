#include<bits/stdc++.h>

using namespace std;

//template based stack using dynamic array

template <class T>
class Stack
{
public:
    T *a;
    int stack_size;
    int array_cap;
    Stack()
    {
        a = new T[1];
        array_cap = 1;
        stack_size = 0;
    }

    // make the array cap multiplied by 2;

    void increase_size()
    {
        T * temp;
        temp = new T[array_cap * 2];
        for(int i=0; i<array_cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a, temp);
        delete  []temp;
        array_cap *= 2;
    }

    void push(T val)
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
        stack_size--;
    }

    //return the top element form the stack

    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            T a;

            return a;

//            assert(false); this line will crash the code
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack<double> st;
    st.push(1.3);
    st.push(4.3);
    st.push(2.9);
    st.push(5.0);

    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    st.pop();

    return 0;
}
