#include<bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node * nxt;
    Node * prev;



    Node(int value)
    {
        data = value;
        nxt = NULL;
        prev = NULL;
    }


};

class Stack
{
    Node * head;
    Node * top;
    int sz;

public:
    Stack()
    {
        head = NULL;
        top=NULL;
        sz=0;
    }

    void Push(int value)
    {
        sz++;
        Node * newNode = new Node(value);
        if(head == NULL)
        {
            head= top = newNode;
            return;
        }
        top->nxt = newNode;
        newNode->prev = top;
        top = newNode;
    }

    void Pop()
    {
        Node * delNode = top;
        if(top == head)
        {
            head = top = NULL;

        }
        else
        {
            top = delNode->prev;
            top->nxt = NULL;

        }
        delete delNode;
        sz--;
    }

    bool Empty()
    {
        if(sz == 0) return true;
        return false;
    }

    int Size()
    {
        return sz;
    }

    int Top()
    {
        return top->data;
    }

};

int main()
{

    Stack numst;

    numst.Push(10);
    numst.Push(30);
    numst.Push(10);
    numst.Push(70);
    numst.Pop();
    cout<<numst.Top()<<"\n";

    cout<<numst.Size()<<"\n";

    return 0;
}

