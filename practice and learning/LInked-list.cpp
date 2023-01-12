#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node * nxt;


};

class LinkedList
{
public:
    Node * head;

    LinkedList()
    {
        head = NULL;
    }

    Node * CreateNewNode(int value)
    {
        Node * newnode = new Node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        Node * a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void Traverse()
    {
        Node * a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    int SearchDistictValue(int value)
    {
        Node * a = head;
        int index =0;
        while(a!= NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    void SearchAllValue(int value)
    {
        Node * a = head;
        int index =0;
        while(a!= NULL)
        {
            if(a->data == value)
            {
                cout<<value<<" is found at "<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }

    }

};

int main()
{
    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtHead(10);


    l.Traverse();

//    cout<<l.SearchDistictValue(20)<<"\n";
    l.SearchAllValue(10);


    return 0;
}










