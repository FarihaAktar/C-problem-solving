#include<bits/stdc++.h>

using namespace std;

template <class T>
class Deque
{
public:
    node<T> * head;
    node<T> * tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<T> * createNewNode(T data)
    {
        node<T> * newNode = new node<T>;
        newNode->data = data;
        newNode->nxt = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    void push_front(T value)
    {
        node<T> * newNode = createNewNode(value);
        if(sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }

        head->prev = newNode;
        newNode->nxt = head;
        head = newNode;
        sz++;
    }

    void push_back(T value)
    {
        node<T> * newNode = createNewNode(value);
        if(sz == 0)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->nxt = newNode;
        newNode->prev = tail;
        tail = newNode;
        sz++;

    }

    void pop_front()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty!\n";
            return;
        }
        if(sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node<T> * a= head;
        head = head->nxt;
        head->prev = NULL;
        delete a;
        sz--;

    }

    void pop_back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty!\n";
            return;
        }
        if(sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node<T> * a = tail;
        tail = tail->prev;
        tail->nxt = NULL;
        delete a;
        sz--;
    }

    T front()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty!\n";
            T a;
            return a;
        }
        return head->data;
    }

    T back()
    {
        if(sz == 0)
        {
            cout<<"Deque is empty!\n";
            T a;
            return a;
        }
        return tail->data;
    }

    int size()
    {
        return sz;
    }



};

int main()
{
    cout<<"Integer : \n";
    Deque<int> id;
    id.push_front(2);
    id.push_front(1);
    id.push_back(3);
    id.push_back(4);

    while(id.size())
    {
        cout<<id.front()<<"\n";
        id.pop_front();
    }

//    while(id.size())
//    {
//        cout<<id.back()<<"\n";
//        id.pop_back();
//    }

    cout<<"String : \n";
    Deque<char> cd;
    cd.push_front('b');
    cd.push_front('a');
    cd.push_back('c');
    cd.push_back('d');

        while(cd.size())
    {
        cout<<cd.front()<<"\n";
        cd.pop_front();
    }
    return 0;
}



//palindrom related problem

//int main()
//{
//    string s;
//    cin>>s;
//    int num = s.size()/ 2;
//
//    deque<char>dq;
//
//    for(int i=0; i<s.size(); i++)
//    {
//        dq.push_back(s[i]);
//    }
//
//    for(int i=0; i<num; i++)
//    {
////        cout<<s[i]<<"\n";
//        if(dq.size() <= 1)
//        {
//            break;
//        }
//        char op1 = dq.front();
//        char op2 = dq.back();
//
//        if(op1 == op2)
//        {
//            dq.pop_front();
//            dq.pop_back();
//        }
//    }
//
//    if(dq.size() <= 1)
//    {
//        cout<<"Yes\n";
//    }
//    else
//    {
//        cout<<"No\n";
//    }
//    return 0;
//}
