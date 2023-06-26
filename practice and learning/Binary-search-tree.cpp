#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int value;
    node * Left;
    node * Right;
};

class BST
{
public:
    node * root;
    BST()
    {
        root = NULL;
    }

    node * CreateNewNode(int value)
    {
        node * newNode = new node;
        newNode->value = value;
        newNode->Left = NULL;
        newNode->Right = NULL;
        return newNode;
    }

    void BFS()
    {
        if(root == NULL)
            return;
        queue<node *>q;
        q.push(root);

        while(!q.empty())
        {
            node * a = q.front();
            q.pop();

            int p = -1, l =-1, r =-1;
            if(a->Left != NULL)
            {
                l = a->Left->value;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r = a->Right->value;
                q.push(a->Right);
            }

            cout<<"Node id = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"\n";

        }
    }

    void Insert(int value)
    {
        node * newNode = CreateNewNode(value);
        if(root == NULL)
        {
            root = newNode;
            return;
        }
        node * cur = root;
        node * prv = NULL;
        while(cur != NULL)
        {
            if(newNode->value > cur->value)
            {
                prv = cur;
                cur = cur->Right;

            }
            else{
                prv = cur;
                cur = cur->Left;
            }
        }

        if(newNode->value > prv->value )
        {
            prv->Right = newNode;
        }
        else{
            prv->Left = newNode;
        }
    }

    bool Search(int value)
    {
        node * cur = root;
        while(cur != NULL)
        {
            if(value > cur->value)
            {
                cur = cur->Right;
            }
            else if(value < cur->value)
            {
                cur = cur->Left;
            }
            else{
                return true;
            }
        }
        return false;
    }

    void Delete(int value)
    {
        node * cur  = root;
        node * prv = NULL;
        while(cur != NULL)
        {
            if(value > cur->value)
            {
                prv = cur;
                cur = cur->Right;
            }
            else if(value < cur->value)
            {
                prv = cur;
                cur =cur->Left;
            }
            else{
                break;
            }
        }
        if(cur == NULL)
        {
            cout<<"Value is not present in BST!\n";
            return;
        }
        //case-1: both child is null
        if(cur->Left == NULL && cur->Right == NULL)
        {
            if(prv->Left->value == cur->value)
            {
                prv->Left = NULL;
            }
            else
            {
              prv->Right = NULL;
            }
            delete cur;
            return;
        }
        //case -2: node has only one child
        if(cur->Left == NULL && cur->Right != NULL)
        {
            if(prv->Left->value == cur->value)
            {
                prv->Left = cur->Right;
            }
            else{
                prv->Right = cur->Right;
            }
            delete cur;
            return;


        }
        //case-3: node has two child
        node * tmp = cur->Right;
        while(tmp->Left != NULL)
        {
            tmp = tmp->Left;
        }
        int saved = tmp->value;
        Delete(saved);
        cur->value = saved;
    }
};


int main()
{
    BST bst;
    bst.Insert(20);
    bst.Insert(10);
    bst.Insert(22);
    bst.Insert(5);
    bst.Insert(12);
    bst.Insert(21);
    bst.Insert(25);
    bst.Insert(3);
    bst.Insert(15);

    bst.BFS();
//    cout<<bst.Search(1)<<"\n";
//    cout<<bst.Search(8)<<"\n";

//    bst.Delete(6);
//    bst.BFS();
    return 0;
}
