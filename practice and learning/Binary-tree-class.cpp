#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int id;
    int value;
    node * Left;
    node * Right;
    node * parent;
};


class BinaryTree
{
public:
    node * root;
    node * allNode[6];
    BinaryTree()
    {
        root = NULL;

    }

    node * createNewNode(int id, int value)
    {
        node * newNode = new node;
        newNode->id = id;
        newNode->value = value;
        newNode->Left = NULL;
        newNode->Right = NULL;
        newNode->parent = NULL;
        return newNode;
    }

    void Insertion(int id, int value)
    {
        node * newNode = createNewNode(id,value);

        if(root == NULL)
        {
            root = newNode;
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node * a = q.front();
            q.pop();

            if(a->Left != NULL)
            {
                q.push(a->Left);
            }
            else{
                a->Left = newNode;
                newNode->parent = a;
                return;
            }
            if(a->Right != NULL)
            {
                q.push(a->Right);
            }
            else{
                a->Right = newNode;
                newNode->parent = a;
                return;
            }



        }
    }

//    void build_binary_tree()
//    {
//
//        for(int i=0; i<6; i++)
//        {
//            allNode[i] = createNewNode(i);
//        }
//        allNode[0]->Left = allNode[1];
//        allNode[0]->Right = allNode[2];
//
//        allNode[1]->Left = allNode[5];
//        allNode[1]->parent = allNode[0];
//
//
//        allNode[2]->Left = allNode[3];
//        allNode[2]->Right = allNode[4];
//        allNode[2]->parent = allNode[0];
//
//        allNode[5]->parent = allNode[1];
//
//        allNode[3]->parent = allNode[2];
//        allNode[4]->parent = allNode[2];
//        root = allNode[0];
//    }
    // breath first search
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
                l = a->Left->id;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            if(a->parent != NULL)
            {
                p = a->parent->id;
            }
            cout<<"Node id = "<<a->id<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<" Parent id =  "<<p<<"\n";

        }
    }


    //dept first search
    void DFS(node *a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        DFS(a->Left);
        DFS(a->Right);
    }

    void Inorder(node *a)
    {
        if(a == NULL)
        {
            return;
        }
        Inorder(a->Left);
        cout<<a->id<<" ";
        Inorder(a->Right);
    }

    void Preorder(node *a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        Preorder(a->Left);
        Preorder(a->Right);
    }

    void Postorder(node *a)
    {
        if(a == NULL)
        {
            return;
        }
        Postorder(a->Left);
        Postorder(a->Right);
        cout<<a->id<<" ";
    }

    void Search(node * a, int value)
    {
        if(a == NULL)
            return;
        if(a->value == value)
        {
            cout<<a->id<<" ";
        }
        Search(a->Left, value);
        Search(a->Right, value);
    }

//    void print_tree_info()
//    {
//
//        for(int i=0; i<6; i++)
//        {
//            int p = -1;
//            int l = -1;
//            int r = -1;
//            if(allNode[i]->parent != NULL)
//            {
//
//                p = allNode[i]->parent->id;
//            }
//            if(allNode[i]->Left != NULL)
//            {
//
//                l = allNode[i]->Left->id;
//            }
//            if(allNode[i]->Right != NULL)
//            {
//
//                r = allNode[i]->Right->id;
//            }
//            cout<<"Node "<<i<<": parent = "<<p<<" , Left Child = "<<l<<" , Right Child = "<<r<<"\n";
//        }
//    }
};
int main()
{
    BinaryTree bt;
//    bt.Insertion(0,3);
//    bt.Insertion(1,5);
//    bt.Insertion(2,6);
//    bt.Insertion(3,10);
//    bt.Insertion(4,10);

    bt.Insertion(20,3);
    bt.Insertion(10,5);
    bt.Insertion(22,6);
    bt.Insertion(5,10);
    bt.Insertion(12,10);
    bt.Insertion(21,10);
    bt.Insertion(25,10);
    bt.Insertion(3,10);
    bt.Insertion(15,10);
    bt.BFS();
//    cout<<"\n";
//    bt.Search(bt.root, 5);
//     cout<<"\n";
//     bt.Search(bt.root, 10);
//    bt.build_binary_tree();
    bt.Postorder(bt.root);
    return 0;
}
