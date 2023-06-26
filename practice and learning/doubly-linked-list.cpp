#include<bits/stdc++.h>

using namespace std;



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
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    // delete the value at head. O(1)
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }

        node * a  = head;
        node * b = head->nxt;
        delete a;
        if(b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }

    //Deletes the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    //Reverse the doubly linked list O(n)
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a

        node *b = head;
        while(b!= NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }

    void Swap(int i, int j)
    {
        if(head == NULL)
            return;
        if(i >= getSize() | j >= getSize())
        {
            cout<<"Invalid Index"<<"\n";
            return;
        }
        node * a = head;
        int temp1;
        int temp2;
        int cur_index = 0;
        while(a != NULL)
        {
            if(cur_index == i)
            {
                temp1 = a->data;
            }
            if(cur_index == j)
                temp2 = a->data;
            a = a->nxt;
            cur_index++;
        }
        cur_index =0;
        node * b = head;
        while(b != NULL)
        {
            if(cur_index == i)
            {
                b->data = temp2;
            }
            if(cur_index == j)
                b->data = temp1;
            b = b->nxt;
            cur_index++;
        }
    }

    void deleteZero()
    {
        if(head == NULL)
            return;
        node * a = head;
        while(a!=NULL)
        {
            if(a->data == 0)
            {
                if(a->prv != NULL)
                {
                    a->prv->nxt = a->nxt;
                }
                if(a->nxt != NULL)
                {
                    a->nxt->prv = a->prv;
                }

                node * temp = a;
                a= a->nxt;
                if(temp == head)
                {
                    head = a;
                }
                delete temp;
            }
            else
            {

                a = a->nxt;
            }
        }
    }
};


class Stack
{
    public:
    DoublyLinkedList dl;
    Stack()
    {

    }

    int top()
    {
        if(dl.getSize() ==0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }

        return dl.head->data;
    }

    void push(int val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if(dl.getSize() ==0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
};



int main()
{
        Stack st;
    st.push(2);
    cout<<st.top()<<"\n";
    st.push(3);
    cout<<st.top()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";


//    DoublyLinkedList dl;
//    dl.InsertAtHead(10);
//    dl.InsertAtHead(5);
//    dl.InsertAtHead(1);

//    dl.InsertAtHead(1);
//    dl.InsertAtHead(0);
//    dl.InsertAtHead(2);
//    dl.InsertAtHead(0);
//    dl.InsertAtHead(0);


//    dl.Traverse();
//    dl.Swap(1, 4);
//    dl.deleteZero();
//    dl.Traverse();
//    dl.Insert(2,100);
//
//    dl.Traverse();
//
//    dl.Reverse();
//    dl.Traverse();


    return 0;
}
