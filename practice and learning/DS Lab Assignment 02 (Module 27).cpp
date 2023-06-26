#include<bits/stdc++.h>

using namespace std;

void deleteValue(list<int> & l, int value)
{
    list<int>::iterator it = l.begin();

    while(it != l.end())
    {
        if(*it == value)
        {
            l.erase(it);
            break;
        }
        it++;
    }

}

int main()
{
    list<int>l = {7, 4, 3, 8,  5, 4};
    // [7, 3, 8, 4, 5, 4]


    deleteValue(l,4);
    auto it = l.begin();

    while(it != l.end())
    {
        cout<<*it<<" ";
        it++;
    }
    return 0;
}


//string is_palindrom(string s)
//{
//    deque<char>dq;
//
//    for(int i=0; i<s.size(); i++)
//    {
//        dq.push_back(s[i]);
//    }
//
//    while(dq.size() > 1)
//    {
//        char fst = dq.front();
//        char lst = dq.back();
//
//        if(fst != lst)
//        {
//            return "No";
//
//        }
//        dq.pop_front();
//        dq.pop_back();
//    }
//
//    return "Yes";
//}
//
//int main()
//{
//    string s;
//    cin>>s;
//
//
//    cout<<is_palindrom(s)<<"\n";
//
//
//    return 0;
//}



//
//int main()
//{
//    string s;
//    cin>>s;
//    int num = s.size()/ 2;
//
//    deque<char>dq;
//
//    for(int i=0; i<s.size(); i++)
//    {
//        dq.push_back(s[i]);
//    }
//
//    for(int i=0; i<num; i++)
//    {
////        cout<<s[i]<<"\n";
//        if(dq.size() <= 1)
//        {
//            break;
//        }
//        char op1 = dq.front();
//        char op2 = dq.back();
//
//        if(op1 == op2)
//        {
//            dq.pop_front();
//            dq.pop_back();
//        }
//    }
//
//    if(dq.size() <= 1)
//    {
//        cout<<"Yes\n";
//    }
//    else
//    {
//        cout<<"No\n";
//    }
//    return 0;
//}
//
//template <class T>
//class node
//{
//public:
//    T data;
//    node * nxt;
//    node * prev;
//
//};
//
//template <class T>
//class Deque
//{
//public:
//    node<T> * head;
//    node<T> * tail;
//    int sz;
//
//    Deque()
//    {
//        head = NULL;
//        tail = NULL;
//        sz = 0;
//    }
//
//    node<T> * createNewNode(T data)
//    {
//        node<T> * newNode = new node<T>;
//        newNode->data = data;
//        newNode->nxt = NULL;
//        newNode->prev = NULL;
//        return newNode;
//    }
//
//    void push_front(T value)
//    {
//        node<T> * newNode = createNewNode(value);
//        if(sz == 0)
//        {
//            head = newNode;
//            tail = newNode;
//            sz++;
//            return;
//        }
//
//        head->prev = newNode;
//        newNode->nxt = head;
//        head = newNode;
//        sz++;
//    }
//
//    void push_back(T value)
//    {
//        node<T> * newNode = createNewNode(value);
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
//
//    }
//
//    void pop_front()
//    {
//        if(sz == 0)
//        {
//            cout<<"Deque is empty!\n";
//            return;
//        }
//        if(sz == 1)
//        {
//            delete head;
//            head = NULL;
//            tail = NULL;
//            sz--;
//            return;
//        }
//
//        node<T> * a= head;
//        head = head->nxt;
//        head->prev = NULL;
//        delete a;
//        sz--;
//
//    }
//
//    void pop_back()
//    {
//        if(sz == 0)
//        {
//            cout<<"Deque is empty!\n";
//            return;
//        }
//        if(sz == 1)
//        {
//            delete tail;
//            head = NULL;
//            tail = NULL;
//            sz--;
//            return;
//        }
//
//        node<T> * a = tail;
//        tail = tail->prev;
//        tail->nxt = NULL;
//        delete a;
//        sz--;
//    }
//
//    T front()
//    {
//        if(sz == 0)
//        {
//            cout<<"Deque is empty!\n";
//            T a;
//            return a;
//        }
//        return head->data;
//    }
//
//    T back()
//    {
//        if(sz == 0)
//        {
//            cout<<"Deque is empty!\n";
//            T a;
//            return a;
//        }
//        return tail->data;
//    }
//
//    int size()
//    {
//        return sz;
//    }
//
//
//
//};
//
//int main()
//{
//    cout<<"Integer : \n";
//    Deque<int> id;
//    id.push_front(2);
//    id.push_front(1);
//    id.push_back(3);
//    id.push_back(4);
//
//    while(id.size())
//    {
//        cout<<id.front()<<"\n";
//        id.pop_front();
//    }
//
////    while(id.size())
////    {
////        cout<<id.back()<<"\n";
////        id.pop_back();
////    }
//
//    cout<<"String : \n";
//    Deque<char> cd;
//    cd.push_front('b');
//    cd.push_front('a');
//    cd.push_back('c');
//    cd.push_back('d');
//
//        while(cd.size())
//    {
//        cout<<cd.front()<<"\n";
//        cd.pop_front();
//    }
//    return 0;
//}




//
//int evaluate_ans(int x, int y, char s)
//{
//
//    switch(s)
//    {
//    case '+':
//        return x + y;
//
//    case '-':
//        return x - y;
//
//    case '*':
//        return  x * y;
//
//    case '/':
//        return x / y;
//
//    }
//}
//
//
//int prec(char s)
//{
//    if(s == '+' || s == '-')
//    {
//        return 1;
//    }
//    else if(s == '*' || s == '/')
//    {
//        return 2;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//
//int main()
//{
//    string s;
//    cin>>s;
//
//    stack<char> op;
//    stack<int> value;
//
//    for(int i=0; i<s.size(); i++)
//    {
//        char curr = s[i];
//        if(isdigit(curr))
//        {
//            value.push(curr - '0');
//        }
//
//        else if(curr == '(')
//        {
//            op.push(curr);
//        }
//        else if(curr == ')')
//        {
//            while(op.size() && op.top() != '(')
//            {
//                int num2 = value.top();
//                value.pop();
//                int num1 = value.top();
//                value.pop();
//                char opt = op.top();
//                op.pop();
//                int ans = evaluate_ans(num1, num2, opt);
//                value.push(ans);
//            }
//            op.pop();
//        }
//        else
//        {
//            while(op.size() && prec(op.top()) >= prec(curr))
//            {
//                int num2 = value.top();
//                value.pop();
//                int num1 = value.top();
//                value.pop();
//                char opt = op.top();
//                op.pop();
//                int ans = evaluate_ans(num1, num2, opt);
//                value.push(ans);
//            }
//            op.push(curr);
//        }
//    }
//
//    while(!op.empty())
//    {
//        int num2 = value.top();
//        value.pop();
//        int num1 = value.top();
//        value.pop();
//        char opt = op.top();
//        op.pop();
//        int ans = evaluate_ans(num1, num2, opt);
//        value.push(ans);
//    }
//
//    cout<<value.top()<<"\n";
//    return 0;
//}



//int prec(char s)
//{
//    if(s == '+' || s == '-')
//    {
//        return 1;
//    }
//    else if(s == '*' || s == '/')
//    {
//        return 2;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    string s;
//    cin>>s;
//
//    stack<char> st;
//    string postfix = "";
//
//    for(int i=0; i<s.size(); i++)
//    {
//        char now = s[i];
//        if(now >= 'a' && now <= 'z')
//        {
//            postfix += now;
//        }
//        else if(now == '(')
//        {
//            st.push('(');
//        }
//        else if(now == ')')
//        {
//            while(st.size() && st.top() != '(')
//            {
//                postfix += st.top();
//                st.pop();
//            }
//            st.pop();
//        }
//        else
//        {
//            while(st.size() && prec(st.top()) >= prec(now))
//            {
//                postfix += st.top();
//                st.pop();
//            }
//            st.push(now);
//        }
//    }
//
//    while(st.size())
//    {
//        postfix += st.top();
//        st.pop();
//    }
//
//    cout<<postfix<<"\n";
//    return 0;
//}


//template <class T>
//class node
//{
//public:
//    T data;
//    node * nxt;
//};
//
//template<class T>
//class SinglyLinkedList
//{
//public:
//    node<T> * head;
//    int sz;
//
//    SinglyLinkedList()
//    {
//        head = NULL;
//        sz = 0;
//    }
//
//
//    node<T> * createNewNode(T data)
//    {
//        node<T> * newNode = new node<T>;
//        newNode->data = data;
//        newNode->nxt = NULL;
//        return newNode;
//    }
//
//    void insertAtHead(T value)
//    {
//        sz++;
//        node<T> * newNode = createNewNode(value);
//        if(head == NULL)
//        {
//            head = newNode;
//            return;
//        }
//        newNode->nxt = head;
//        head = newNode;
//    }
//
//    void deleteAtHead()
//    {
//        if(head == NULL)
//        {
//            return;
//        }
//        node<T> * a = head;
//        head = a->nxt;
//        delete a;
//        sz--;
//    }
//
//    int getSize()
//    {
//        return sz;
//    }
//
//};
//
//template <class T>
//class Stack
//{
//public:
//    SinglyLinkedList<T> sl;
//
//
//    T top()
//    {
//        if(sl.getSize() == 0)
//        {
//            cout<<"Stack is empty\n";
//            T a;
//            return a;
//        }
//
//        return sl.head->data;
//    }
//
//    void push(T value)
//    {
//        sl.insertAtHead(value);
//    }
//
//    void pop()
//    {
//        if(sl.getSize() == 0)
//        {
//            cout<<"Stack is empty!\n";
//            return;
//        }
//        sl.deleteAtHead();
//    }
//
//    int size()
//    {
//        return sl.getSize();
//    }
//};
//
//int main()
//{
//    Stack<int> IS;
//    IS.push(3);
//    IS.push(2);
//    IS.push(1);
//
//    cout<<"Integer : \n";
//    cout<<"Size : "<<IS.size()<<"\n";
//    cout<<"Top : "<<IS.top()<<"\n";
//    IS.pop();
//    cout<<"Top : "<<IS.top()<<"\n";
//    IS.pop();
//    cout<<"Top : "<<IS.top()<<"\n";
//    IS.pop();
//    cout<<"Size : "<<IS.size()<<"\n";
//
//    Stack<char> cs;
//    cs.push('c');
//    cs.push('b');
//    cs.push('a');
//
//
//    cout<<"Character : \n";
//    cout<<"Size : "<<cs.size()<<"\n";
//    cout<<"Top : "<<cs.top()<<"\n";
//    cs.pop();
//    cout<<"Top : "<<cs.top()<<"\n";
//    cs.pop();
//    cout<<"Top : "<<cs.top()<<"\n";
//    cs.pop();
//    cout<<"Size : "<<cs.size()<<"\n";
//    return 0;
//}

//
//template <class T>
//class Queue
//{
//public:
//    T * a;
//    int array_cap;
//    int l, r;
//    int sz;
//
//    Queue()
//    {
//        a = new T[1];
//        array_cap = 1;
//        l = 0;
//        r = -1;
//        sz =0;
//    }
//
//    void increase_size()
//    {
//        T * tmp = new T[array_cap * 2];
//        for(int i =0; i<array_cap; i++)
//        {
//            tmp[i] = a[i];
//        }
//        swap(tmp, a);
//        array_cap = array_cap * 2;
//        delete [] tmp;
//    }
//
//    void enqueue(T val)
//    {
//        if(sz == array_cap)
//        {
//            increase_size();
//        }
//        r++;
//        a[r] = val;
//        sz++;
//    }
//
//    void dequeue()
//    {
//        if(sz == 0)
//        {
//            cout<<"Queue is empty\n";
//            return;
//        }
//        l++;
//        sz--;
//    }
//
//    T front()
//    {
//        if(sz == 0)
//        {
//            cout<<"Queue is empty\n";
//            T n;
//            return n;
//        }
//        return a[l];
//    }
//
//    int size()
//    {
//        return sz;
//    }
//
//};
//
//
//int main()
//{
//    Queue<int>iq;
//    iq.enqueue(1);
//    iq.enqueue(2);
//    iq.enqueue(4);
//
//    cout<<"Integer: \n";
//    cout<<"Size : "<<iq.size()<<"\n";
//    cout<<iq.front()<<"\n";
//    iq.dequeue();
//    cout<<iq.front()<<"\n";
//    iq.dequeue();
//    cout<<iq.front()<<"\n";
//    iq.dequeue();
//    cout<<"Size : "<<iq.size()<<"\n";
//
//
//    cout<<"Double: \n";
//    Queue<double>cq;
//    cq.enqueue(1.3);
//    cq.enqueue(3.4);
//    cq.enqueue(7.2);
//
//    cout<<"Size : "<<cq.size()<<"\n";
//    cout<<cq.front()<<"\n";
//    cq.dequeue();
//    cout<<cq.front()<<"\n";
//    cq.dequeue();
//    cout<<cq.front()<<"\n";
//    cq.dequeue();
//    cout<<"Size : "<<cq.size()<<"\n";
//    return 0;
//}
