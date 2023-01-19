#include<bits/stdc++.h>

using  namespace std;


class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node * head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz =0;
    }
// O(1)
    node * CreateNewNode(int data)
    {
        node * newNode = new node;
        newNode->data = data;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }
 // O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node * newNode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        node * a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;

    }
// O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index == 0)
        {
            InsertAtHead(data);
            return;
        }
        node * a = head;
        int cur_index = 0;
        while(cur_index != index -1)
        {
            a = a->nxt;
            cur_index++;
        }
        node * newNode = CreateNewNode(data);
        newNode->nxt = a->nxt;
        newNode->prv = a;
        node * b = a->nxt;
        b->prv = newNode;
        a->nxt = newNode;
        sz++;
    }
    // O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            return;
        }
        node * a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node * b = a->prv;
        node * c = a->nxt;
        if(b != NULL)
        {
            b->nxt = c;
        }
        if(c != NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index == 0)
        {
            head = c;
        }
        sz--;
    }
//O(n)
    void Traverse()
    {
        node * a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    // O(2*n) --> O(n)
    void Reverse()
    {
        if(head == NULL)
        {
            return;
        }
        node * a= head;
        int cur_index  = 0;
        while(cur_index != sz -1)
        {
            a = a->nxt;
            cur_index++;
        }

        node * b = head;
        while(b != NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
//O(1)
    int getSize()
    {
        return sz;
    }
};


int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);

    dl.Traverse();
    cout<<dl.getSize()<<"\n";
    dl.Insert(2, 100);
    dl.Traverse();
    cout<<dl.getSize()<<"\n";
    dl.Reverse();
    dl.Traverse();

    return 0;
}
