#include<bits/stdc++.h>

using namespace std;

//class MaxHeap
//{
//public:
//    vector<int>nodes;
//
//    MaxHeap()
//    {
//
//    }
//
//
//    void up_heapify(int idx)
//    {
//        while(idx > 0 && nodes[idx] > nodes[(idx -1)/2])
//        {
//            swap(nodes[idx], nodes[(idx -1)/2]);
//            idx = (idx -1)/2;
//        }
//    }
//
//    void insert(int x)
//    {
//        nodes.push_back(x);
//        up_heapify(nodes.size() -1);
//    }
//
//
//
//    void printHeap()
//    {
//        for(int i=0; i<nodes.size(); i++)
//        {
//            cout<<nodes[i]<< " ";
//        }
//        cout<<"\n";
//    }
//
//    void down_heapify(int idx)
//    {
//        while(1)
//        {
//            int largest = idx;
//            int l = 2 * idx + 1;
//            int r = 2 * idx + 2;
//
//            if(l<nodes.size() && nodes[largest] < nodes[l])
//            {
//                largest = l;
//            }
//            if(r < nodes.size() && nodes[largest] < nodes[r])
//            {
//                largest = r;
//            }
//            if(largest == idx)
//                break;
//            swap(nodes[idx],nodes[largest]);
//            idx = largest;
//        }
//    }
//
//    void Delete(int idx)
//    {
//        if(idx >= nodes.size())
//            return;
//        swap(nodes[idx], nodes[nodes.size()-1]);
//        nodes.pop_back();
//        down_heapify(idx);
//    }
//
//    int getMax()
//    {
//        if(nodes.empty())
//        {
//            cout<<"Heap is empty!\n";
//            return -1;
//        }
//
//        return nodes[0];
//    }
//
//
//};
//
//
//class MinHeap{
//public:
//    MaxHeap mx;
//    void insert(int x)
//    {
//	//Write your code here
//        mx.insert(-x);
//    }
//    void Delete(int idx)
//    {
//        //Write your code here
//        mx.Delete(idx);
//
//    }
//    int getMin()
//    {
//        //Write your code here
//        return -mx.getMax();
//    }
//};
//
//
//int main()
//{
//    MinHeap mh;
//    mh.insert(10);
//    mh.insert(9);
//    mh.insert(8);
//    mh.insert(2);
//
//    mh.Delete(0);
//    cout<<mh.getMin()<<"\n";
//    return 0;
//}


//set<int> Union(set<int>s1, set<int>s2)
//{
//    set<int> u;
//    for(auto it:s1)
//    {
//        u.insert(it);
//    }
//
//    for(auto it:s2)
//    {
//        u.insert(it);
//    }
//
//    return u;
//}
//
//int main()
//{
//    int n1, n2;
//    cin>>n1;
//    set<int>s1, s2;
//
//    for(int i=0; i<n1; i++)
//    {
//        int in;
//        cin>>in;
//        s1.insert(in);
//    }
//
//    cin>>n2;
//    for(int i=0; i<n2; i++)
//    {
//        int in;
//        cin>>in;
//        s2.insert(in);
//    }
//
//    set<int>ans = Union(s1, s2);
//
//    for(auto it:ans)
//    {
//        cout<<it<<" ";
//    }
//    cout<<"\n";
//
//    return 0;
//}

//
//int main()
//{
//    int n;
//    cin>>n;
//
//    map<string, int> mp;
//
//    for(int i=0; i<n; i++)
//    {
//        string in;
//        cin>>in;
//
//
//        if(mp.count(in))
//        {
//            cout<<mp[in]<<"\n";
//        }
//        else
//        {
//            cout<<-1<<"\n";
//        }
//
//
//        mp[in] = i;
//    }
//    return 0;
//}

//class node
//{
//public:
//    int value;
//    node * Left;
//    node * Right;
//
//};
//
//class BST
//{
//public:
//    node * root;
//
//    BST()
//    {
//        root = NULL;
//    }
//
//    node * createNewNode(int value)
//    {
//        node * newNode = new node;
//        newNode->value = value;
//        newNode->Left = NULL;
//        newNode->Right = NULL;
//        return newNode;
//    }
//
//    void Insert(int value)
//    {
//        node * newNode = createNewNode(value);
//        if(root == NULL)
//        {
//            root = newNode;
//            return;
//        }
//        node * cur = root;
//        node * prv = NULL;
//        while(cur != NULL)
//        {
//            if(newNode->value > cur->value)
//            {
//                prv = cur;
//                cur = cur->Right;
//            }
//            else
//            {
//                prv = cur;
//                cur = cur->Left;
//            }
//        }
//
//        if(prv->value < newNode->value)
//        {
//            prv->Right = newNode;
//        }
//        else
//        {
//            prv->Left = newNode;
//        }
//    }
//
//    bool Search(int value)
//    {
//        node * cur = root;
//        while(cur != NULL)
//        {
//            if(value > cur->value)
//            {
//                cur = cur->Right;
//            }
//            else if( value < cur->value)
//            {
//                cur = cur->Left;
//            }
//            else
//            {
//                return true;
//            }
//        }
//        return false;
//
//    }
//};
//
//int main()
//{
//    BST bst;
//    bst.Insert(10);
//    bst.Insert(20);
//    bst.Insert(25);
//    bst.Insert(50);
//    bst.Insert(8);
//    bst.Insert(9);
//    cout<<bst.Search(10)<<"\n";
//    cout<<bst.Search(9)<<"\n";
//    cout<<bst.Search(20)<<"\n";
//    cout<<bst.Search(60)<<"\n";
//
//    return 0;
//}


//int main()
//{
//    int n;
//    cin>>n;
//
//    deque<int> dq;
//
//    for(int i=0; i<n; i++)
//    {
//        int input;
//        cin>>input;
//        dq.push_back(input);
//    }
//
//
//    while(!dq.empty())
//    {
//        if(dq.size() == 1)
//        {
//            cout<<dq.front()<<" ";
//            break;
//        }
//        if(dq.back() < dq.front())
//        {
//            cout<<dq.back()<< " ";
//            dq.pop_back();
//        }
//        else{
//            cout<<dq.front()<<" ";
//            dq.pop_front();
//        }
//    }
//
//    return 0;
//}

//const int SIZE = 100;
//
//class Queue
//{
//public:
//    int arr[SIZE];
//    int l, r;
//
//    Queue()
//    {
//        l = 0;
//        r =-1;
//    }
//
//    void enqueue(int value)
//    {
//        if(r + 1 >= SIZE)
//        {
//            cout<<"Queue is full!\n";
//            return;
//        }
//        r++;
//        arr[r] = value;
//    }
//
//    void dequeue()
//    {
//        if(l > r)
//        {
//            cout<<"Queue is empty!\n";
//            return;
//        }
//        l++;
//    }
//
//    int front()
//    {
//        if(l > r)
//        {
//            cout<<"Queue is empty!\n";
//            return -1;
//        }
//        return arr[l];
//    }
//};
//
//int main()
//{
//    Queue q;
//    q.enqueue(2);
//    q.enqueue(3);
//    q.enqueue(4);
//
//    cout<<q.front()<<"\n";
//    q.dequeue();
//
//    cout<<q.front()<<"\n";
//    q.dequeue();
//
//    cout<<q.front()<<"\n";
//    q.dequeue();
//
//    q.dequeue();
//
//    return 0;
//}

//int main()
//{
//    string s;
//    cin>>s;
//
//    stack<char> st;
//    for(int i=0; i< s.size(); i++)
//    {
//        if(i == 0)
//        {
//            st.push(s[i]);
//        }
//        else
//        {
//            if(st.size() >= 1)
//            {
//                if(st.top() == '(' && s[i] == ')')
//                {
//                    st.pop();
//                }
//                else if(st.top() == '{' && s[i] == '}')
//                {
//                    st.pop();
//                }
//                else if(st.top() == '[' && s[i] == ']')
//                {
//                    st.pop();
//                }
//                else
//                {
//                    st.push(s[i]);
//                }
//            }
//            else
//            {
//                st.push(s[i]);
//            }
//        }
//    }
//
//    if(st.empty())
//    {
//        cout<<"Yes\n";
//    }
//    else{
//        cout<<"No\n";
//    }
//    return 0;
//}


//class Node
//{
//public:
//    int data;
//    Node * nxt;
//    Node * prev;
//};
//
//class DoublyLinkedList
//{
//public:
//    Node * head;
//    Node * tail;
//    int sz;
//
//    DoublyLinkedList()
//    {
//        head = NULL;
//        tail = NULL;
//        sz = 0;
//    }
//
//    Node * CreateNewNode(int data)
//    {
//        Node * newNode = new Node;
//        newNode->data = data;
//        newNode->nxt = NULL;
//        newNode->prev = NULL;
//
//        return newNode;
//    }
//
//    void insertHead(int value)
//    {
//        Node * newNode = CreateNewNode(value);
//        if(sz == 0)
//        {
//            head = newNode;
//            tail = newNode;
//            sz++;
//            return;
//        }
//
//        Node * temp = head;
//        newNode->nxt = temp;
//        temp->prev = newNode;
//        head = newNode;
//        sz++;
//    }
//
//    void insertTail(int value)
//    {
//        Node * newNode = CreateNewNode(value);
//        if(sz == 0)
//        {
//            head = newNode;
//            tail = newNode;
//            sz++;
//            return;
//        }
//        tail->nxt = newNode;
//        newNode->prev = tail;
//        tail = newNode;
//        sz++;
//    }
//
//    void insertMid(int value)
//    {
//
//        Node * newNode = CreateNewNode(value);
//        if(sz == 0)
//        {
//            insertHead(value);
//            return;
//        }
//        if(sz == 1)
//        {
//            head->nxt = newNode;
//            newNode->prev = head;
//            tail = newNode;
//            sz++;
//            return;
//        }
//        int mid =  (sz /2) ;
//        int curr_idx = 0;
//        Node * temp = head;
//        while(curr_idx != mid -1)
//        {
//            temp = temp->nxt;
//            curr_idx++;
//        }
//
//        newNode->nxt = temp->nxt;
//        newNode->prev = temp;
//        Node * a = temp->nxt;
//        a->prev = newNode;
//        temp->nxt = newNode;
//        sz++;
//    }
//
//    void print()
//    {
//        Node * a = head;
//        while(a != NULL)
//        {
//            cout<<a->data<<" ";
//            a= a->nxt;
//        }
//        cout<<"\n";
//    }
//
//    void Merge(DoublyLinkedList a)
//    {
//        //Merge a at the back of this linked-list
//        //Write your code
//        if(head == NULL)
//        {
//            head = a.head;
//            tail = a.tail;
//            sz += a.size();
//            return;
//        }
//
//        tail->nxt = a.head;
//        a.head->prev = tail;
//        tail = a.tail;
//        sz += a.size();
//
//    }
//
//    int size()
//    {
//        return sz;
//    }
//
//};
//
//int main()
//{
//    DoublyLinkedList dl;
//    dl.insertHead(4);
//    dl.insertHead(3);
//    dl.insertHead(2);
//    dl.insertTail(5);
//    dl.insertTail(6);
//    dl.insertMid(1);
//    dl.insertMid(8);
//
//    dl.print();
//
//    DoublyLinkedList b;
//    b.insertHead(10);
//    b.insertTail(50);
//    b.insertMid(30);
//    b.insertHead(9);
//    b.insertTail(100);
//
//
//    b.print();
//
//    dl.Merge(b);
//
//    dl.print();
//    b.print();
//
//    cout<<dl.size()<<"\n";
//
//    return 0;
//}

//vector<string> merge_sort(vector<string>&st)
//{
//    if(st.size() <= 1)
//        return st;
//    int mid = st.size()/2;
//
//    vector<string> b,c;
//
//    for(int i=0; i<mid; i++)
//    {
//        b.push_back(st[i]);
//    }
//
//    for(int i=mid; i<st.size(); i++)
//    {
//        c.push_back(st[i]);
//    }
//
//    vector<string>sorted_b = merge_sort(b);
//    vector<string>sorted_c = merge_sort(c);
//    vector<string>sorted_a;
//
//    int idx1 = 0;
//    int idx2 = 0;
//
//    int sz = st.size();
//
//    for(int i=0; i<sz; i++)
//    {
//        if(idx1 == sorted_b.size())
//        {
//            sorted_a.push_back(sorted_c[idx2]);
//            idx2++;
//        }
//        else if(idx2 == sorted_c.size())
//        {
//            sorted_a.push_back(sorted_b[idx1]);
//            idx1++;
//        }
//        else if(sorted_b[idx1] < sorted_c[idx2])
//        {
//            sorted_a.push_back(sorted_b[idx1]);
//            idx1++;
//        }
//        else{
//            sorted_a.push_back(sorted_c[idx2]);
//            idx2++;
//        }
//    }
//
//    return sorted_a;
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    vector<string> st;
//    for(int i=0; i<n; i++)
//    {
//        string input;
//        cin>>input;
//        st.push_back(input);
//    }
//    vector<string>ans = merge_sort(st);
//
//    for(int i=0; i<n; i++)
//    {
//        cout<<ans[i]<<" ";
//    }
//
//    return 0;
//}
