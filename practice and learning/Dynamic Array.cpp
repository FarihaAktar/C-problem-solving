#include<bits/stdc++.h>


using namespace std;


class Array
{
private:
    int *arr;
    int cap;
    int sz;

    void Increase_size()
    {
        cap = cap*2;
        int *tmp =  new int[cap];
        for(int i=0; i<sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = temp;
    }

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }

    void Push_back(int x)
    {
        if(cap == sz)
        {
            Increase_size()
        }
        arr[sz] = x;
        sz++;

    }

    // time complexity - o(sz-pos) --> o(sz)
    void Insert(int pos, int x)
    {
        if(cap == sz)
        {
            Increase_size()
        }
        for(int i= sz-1; i>=pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    void print()
    {
        for(int i=0; i<sz; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

    int getSize()
    {
        return sz;
    }
    int getElement(int idx)
    {
        if(idx>= sz)
        {
            cout<<"ERROR\n";
            return -1;
        }
        return arr[idx];
    }
    void Pop_back()
    {
        if(sz == 0)
        {
            cout<<"Current size is zero\n";
            return;
        }
        sz--;
    }
//    time complexity - o(sz)
    void Erase(int pos)
    {
        if(pos >= sz)
        {
            cout<<"position does not exist\n";
        }
        for(int i=pos+1; i<sz;i++)
        {
            arr[i-1] = arr[i];
        }
    }
};


int main()
{

    return 0;
}










