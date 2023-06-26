#include<bits/stdc++.h>

using namespace std;


template<class T>
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};

template<class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }


    // delete the value at head. O(1)
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }

        node<T> * a  = head;
        node<T> * b = head->nxt;
        delete a;
        if(b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }



    //Prints the linked list O(n)
//    void Traverse()
//    {
//        node *a = head;
//        while(a!=NULL)
//        {
//            cout<<a->data<<" ";
//            a = a->nxt;
//        }
//        cout<<"\n";
//    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }



//    void Swap(int i, int j)
//    {
//        if(head == NULL)
//            return;
//        if(i >= getSize() | j >= getSize())
//        {
//            cout<<"Invalid Index"<<"\n";
//            return;
//        }
//        node * a = head;
//        int temp1;
//        int temp2;
//        int cur_index = 0;
//        while(a != NULL)
//        {
//            if(cur_index == i)
//            {
//                temp1 = a->data;
//            }
//            if(cur_index == j)
//                temp2 = a->data;
//            a = a->nxt;
//            cur_index++;
//        }
//        cur_index =0;
//        node * b = head;
//        while(b != NULL)
//        {
//            if(cur_index == i)
//            {
//                b->data = temp2;
//            }
//            if(cur_index == j)
//                b->data = temp1;
//            b = b->nxt;
//            cur_index++;
//        }
//    }

//    void deleteZero()
//    {
//        if(head == NULL)
//            return;
//        node * a = head;
//        while(a!=NULL)
//        {
//            if(a->data == 0)
//            {
//                if(a->prv != NULL)
//                {
//                    a->prv->nxt = a->nxt;
//                }
//                if(a->nxt != NULL)
//                {
//                    a->nxt->prv = a->prv;
//                }
//
//                node * temp = a;
//                a= a->nxt;
//                if(temp == head)
//                {
//                    head = a;
//                }
//                delete temp;
//            }
//            else
//            {
//
//                a = a->nxt;
//            }
//        }
//    }
};

template <class T>
class Stack
{
    public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }

    T top()
    {
        if(dl.getSize() ==0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }

        return dl.head->data;
    }

    void push(T val)
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

    int getSize()
    {
        return dl.getSize();
    }
};



int main()
{
//    Stack<int>a;
//    Stack<int>tmp;
//
//    a.push(4);
//    a.push(6);
//    a.push(3);
//    a.push(7);
//
//    while(a.getSize() > 0)
//    {
//        tmp.push(a.top());
//        a.pop();
//    }
//
//
//    swap(a, tmp);
//
//
//    while(a.getSize() > 0)
//    {
//        cout<<a.top()<<"\n";
//        a.pop();
//    }


    Stack<int>st;

    st.push(5);
    st.push(2);
    st.push(7);
    st.push(8);
    st.push(3);

    Stack<int>tmp;

    // O(n^2) --> sorting the stack
    while(st.getSize()>0)
    {
        int t = st.top();
        st.pop();
        while(tmp.getSize()>0)
        {
            if(tmp.top() < t)
            {
                break;
            }
            st.push(tmp.top());
            tmp.pop();

        }
        tmp.push(t);
    }

    swap(st,tmp);

    while(st.getSize()>0)
    {
        cout<<st.top()<<"\n";
        st.pop();
    }

    return 0;
}

