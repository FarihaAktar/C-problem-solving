#include<bits/stdc++.h>

using namespace std;

// stl list is  doubly linked list.

void print(list<int> l)
{
    // O(n)
    list<int>::iterator it = l.begin();
    // auto it = l.begin()
    while(it != l.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n";
}

//O(n)
void Insert(list<int> &l, int idx, int val)
{
    //insert at any position
    auto it = l.begin();
    advance(it, idx);
    l.insert(it, val);
}

//O(n)
void Delete(list<int> &l, int idx)
{
    auto it = l.begin();
    advance(it, idx);
    l.erase(it);
}

int main()
{
    list<int>l;
    //O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    //    print(l);

    //O(1)
    l.push_back(40);
    l.push_back(50);

    //O(1)
    l.pop_back();

    //O(1)
    l.pop_front();

    print(l);

    //insert at any index
    Insert(l,1,100);
    print(l);

    //delete at any index
    Delete(l,1);
    print(l);

    cout<<l.size()<<"\n";
    return 0;
}
