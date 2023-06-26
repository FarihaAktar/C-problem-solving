#include<bits/stdc++.h>

using namespace std;


int getValue(list<int>l, int idx)
{
    if(idx >= l.size())
    {
        return -1;
    }
    list<int>::iterator it = l.begin();
    int index =0;
    while(it != l.end())
    {
        if(index == idx)
            return *it;
        it++;
        index++;
    }

}


bool Search(list<int>l,int value)
{

}

int main()
{
    //Sample Input: [3, 2, 6, 4, 5], index: 2
    list<int> l;

    l.push_front(3);
    l.push_front(2);
    l.push_front(6);
    l.push_front(4);
    l.push_front(5);



    cout<<getValue(l,5)<<"\n";

    return 0;
}
