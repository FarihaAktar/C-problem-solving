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
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
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
        sz++;
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

    int getSize()
    {
        return sz;
        // this code work in O(n)
//        int sz;
//        Node * a = head;
//        while(a != NULL)
//        {
//            sz++;
//            a = a->nxt;
//        }
//        return sz;
    }

    void InsertAtAnyIndex(int index, int value)
    {
        if(index < 0 || index > sz)
        {
            return;
        }

        if(index == 0)
        {
            InsertAtHead(value);
            return;
        }

        sz++;
        Node * a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a= a->nxt;
            cur_index++;
        }
        Node * newNode = CreateNewNode(value);
        newNode->nxt = a->nxt;
        a->nxt = newNode;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        Node * a= head;
        head = a->nxt;
    }

    void DeleteAnyIndex(int index)
    {
        if(index< 0 || index > sz-1)
        {
            return;
        }
        if(index == 0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        Node * a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a= a->nxt;
            cur_index++;
        }
        Node * b = a->nxt;
        a->nxt = b->nxt;
        delete b;
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
    cout<<l.getSize()<<"\n";

    l.InsertAtAnyIndex(1, 23);

    l.Traverse();

    cout<<l.getSize()<<"\n";

    l.DeleteAtHead();
    l.Traverse();
    l.DeleteAnyIndex(1);
    l.Traverse();
     cout<<l.getSize()<<"\n";


    return 0;
}










