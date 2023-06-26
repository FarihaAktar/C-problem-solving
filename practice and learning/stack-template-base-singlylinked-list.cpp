#include<bits/stdc++.h>

using namespace std;


template <class T>
class node
{
public:
    T data;
    node * nxt;
};

template<class T>
class SinglyLinkedList
{
public:
    node<T> * head;
    int sz;

    SinglyLinkedList()
    {
        head = NULL;
        sz = 0;
    }


    node<T> * createNewNode(T data)
    {
        node<T> * newNode = new node<T>;
        newNode->data = data;
        newNode->nxt = NULL;
        return newNode;
    }

    void insertAtHead(T value)
    {
        sz++;
        node<T> * newNode = createNewNode(value);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->nxt = head;
        head = newNode;
    }

    void deleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        node<T> * a = head;
        head = a->nxt;
        delete a;
        sz--;
    }

    int getSize()
    {
        return sz;
    }

};

template <class T>
class Stack
{
public:
    SinglyLinkedList<T> sl;


    T top()
    {
        if(sl.getSize() == 0)
        {
            cout<<"Stack is empty\n";
            T a;
            return a;
        }

        return sl.head->data;
    }

    void push(T value)
    {
        sl.insertAtHead(value);
    }

    void pop()
    {
        if(sl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        sl.deleteAtHead();
    }

    int size()
    {
        return sl.getSize();
    }
};

int main()
{
    Stack<int> IS;
    IS.push(3);
    IS.push(2);
    IS.push(1);

    cout<<"Integer : \n";
    cout<<"Size : "<<IS.size()<<"\n";
    cout<<"Top : "<<IS.top()<<"\n";
    IS.pop();
    cout<<"Top : "<<IS.top()<<"\n";
    IS.pop();
    cout<<"Top : "<<IS.top()<<"\n";
    IS.pop();
    cout<<"Size : "<<IS.size()<<"\n";

    Stack<char> cs;
    cs.push('c');
    cs.push('b');
    cs.push('a');


    cout<<"Character : \n";
    cout<<"Size : "<<cs.size()<<"\n";
    cout<<"Top : "<<cs.top()<<"\n";
    cs.pop();
    cout<<"Top : "<<cs.top()<<"\n";
    cs.pop();
    cout<<"Top : "<<cs.top()<<"\n";
    cs.pop();
    cout<<"Size : "<<cs.size()<<"\n";
    return 0;
}


