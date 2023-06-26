#include<bits/stdc++.h>

using namespace std;


template <class T>
class Queue
{
public:
    T * a;
    int array_cap;
    int l, r;
    int sz;

    Queue()
    {
        a = new T[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz =0;
    }

    void increase_size()
    {
        T * tmp = new T[array_cap * 2];
        for(int i =0; i<array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(tmp, a);
        array_cap = array_cap * 2;
        delete [] tmp;
    }

    void enqueue(T val)
    {
        if(sz == array_cap)
        {
            increase_size();
        }
        r++;
        a[r] = val;
        sz++;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        sz--;
    }

    T front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            T n;
            return n;
        }
        return a[l];
    }

    int size()
    {
        return sz;
    }

};


int main()
{
    Queue<int>iq;
    iq.enqueue(1);
    iq.enqueue(2);
    iq.enqueue(4);

    cout<<"Integer: \n";
    cout<<"Size : "<<iq.size()<<"\n";
    cout<<iq.front()<<"\n";
    iq.dequeue();
    cout<<iq.front()<<"\n";
    iq.dequeue();
    cout<<iq.front()<<"\n";
    iq.dequeue();
    cout<<"Size : "<<iq.size()<<"\n";


    cout<<"Double: \n";
    Queue<double>cq;
    cq.enqueue(1.3);
    cq.enqueue(3.4);
    cq.enqueue(7.2);

    cout<<"Size : "<<cq.size()<<"\n";
    cout<<cq.front()<<"\n";
    cq.dequeue();
    cout<<cq.front()<<"\n";
    cq.dequeue();
    cout<<cq.front()<<"\n";
    cq.dequeue();
    cout<<"Size : "<<cq.size()<<"\n";
    return 0;
}


