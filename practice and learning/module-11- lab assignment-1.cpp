#include<bits/stdc++.h>

using namespace std;

vector<int> merge_sort(vector<int>&a, int k)
{

    if(a.size()<= 1)
        return a;
    int mid = a.size()/2;

    vector<int>b,c;

    for(int i=0; i<mid; i++)
    {
        b.push_back(a[i]);
    }

    for(int i= mid; i<a.size(); i++)
        c.push_back(a[i]);

    vector<int>sorted_b = merge_sort(b, k);
    vector<int>sorted_c = merge_sort(c, k);
    int counts =0;

    int idx1 = 0;
    int idx2 = 0;

    int sz = a.size();

    for(int i=0; i<sz; i++)
    {
        cout<<"b - "<<sorted_b[idx1]<<" ";
        cout<<"c - "<<sorted_c[idx2]<<" ";
        idx1++;
        idx2++;
        cout<<"\n";

    }

//    cout<< counts;



}

int main()
{
    int n, k, s, counts;

    cin>>n;

    vector<int>a;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        a.push_back(s);
    }

    cin>>k;

//    counts =
    merge_sort(a, k);
//    cout<<counts<<"n";
    return 0;
}

//
//vector<int> even_generator(vector<int>a)
//{
//    vector<int>evenArr;
//    for(int i=0; i<a.size(); i++)
//    {
//        if(a[i] % 2 == 0)
//        {
//            evenArr.push_back(a[i]);
//        }
//    }
//
//    return evenArr;
//}
//
//int main()
//{
//    vector<int>a = {2, 3, 4, 5,67, 60, 46};
//
//    vector<int>evenNum = even_generator(a);
//
//    for(int i =0; i<evenNum.size(); i++)
//    {
//        cout<<evenNum[i]<<" ";
//    }
//    return 0;
//}


//int main()
//{
//    int n, s;
//    cin>>n;
//
//    vector<int>arr;
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>s;
//        arr.push_back(s);
//    }
//
//    int a, b;
//
//    cin>>a>>b;
//
//    arr.erase(arr.begin() + (a-1), arr.begin() + b);
//
//    for(int i=0; i<arr.size(); i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//
//    return 0;
//}




//question - 6

//void binarySearch(vector<int>a, int k)
//{
//    int low=0, high = a.size()-1;
//
//    while(low<=high)
//    {
//        int mid = (low+high)/2;
//        if(a[mid] == k)
//        {
//            if(a[mid -1] == k | a[mid +1] == k)
//            {
//                cout<<"YES"<<"\n";
//                return;
//            }
//            else
//            {
//                cout<<"NO"<<"\n";
//                return;
//            }
//        }
//        if(a[mid] > k)
//        {
//            high = mid -1;
//        }
//        else
//        {
//            low = mid +1;
//        }
//
//    }
//}
//
//
//int main()
//{
//    int n, s,k;
//    cin>>n;
//    vector<int>a;
//
//    for(int i=1; i<=n; i++)
//    {
//        cin>>s;
//        a.push_back(s);
//    }
//
//    cin>>k;
//
//    binarySearch(a, k);
//
//    return 0;
//}

// question - 5

//
//class Node
//{
//public:
//    int data;
//    Node * nxt;
//
//
//};
//
//class LinkedList
//{
//
//public:
//    Node * head;
//
//    LinkedList()
//    {
//        head = NULL;
//    }
//
//    Node * CreateNewNode(int value)
//    {
//        Node * newnode = new Node;
//        newnode->data = value;
//        newnode->nxt = NULL;
//        return newnode;
//    }
//
//    void InsertAtHead(int value)
//    {
//        Node * a = CreateNewNode(value);
//        if(head == NULL)
//        {
//            head = a;
//            return;
//        }
//        a->nxt = head;
//        head = a;
//    }
//
//    int getSize()
//    {
//        Node * a = head;
//        int index =0;
//        while(a != NULL)
//        {
//            index++;
//            a = a->nxt;
//        }
//
//        return index;
//    }
//
//    int getValue(int value)
//    {
//        Node * a= head;
//        int index =0;
//        while(a!= NULL)
//        {
//            if(index == value)
//            {
//                return a->data;
//            }
//            index++;
//            a = a->nxt;
//        }
//        return -1;
//    }
//
//    void printReverse()
//    {
//        printReverse(head);
//        cout<<"\n";
//    }
//
//    void swapFirst()
//    {
//        if(head && head->nxt)
//        {
//            int temp = head->data;
//            head->data = head->nxt->data;
//            head->nxt->data = temp;
//        }
//    }
//
//
//
//    void Traverse()
//    {
//        Node * a = head;
//        while(a!= NULL)
//        {
//            cout<<a->data<<" ";
//            a = a->nxt;
//        }
//        cout<<"\n";
//    }
//
//    int SearchDistictValue(int value)
//    {
//        Node * a = head;
//        int index =0;
//        while(a!= NULL)
//        {
//            if(a->data == value)
//            {
//                return index;
//            }
//            a = a->nxt;
//            index++;
//        }
//        return -1;
//    }
//
//    void SearchAllValue(int value)
//    {
//        Node * a = head;
//        int index =0;
//        while(a!= NULL)
//        {
//            if(a->data == value)
//            {
//                cout<<value<<" is found at "<<index<<"\n";
//            }
//            a = a->nxt;
//            index++;
//        }
//
//    }
//
//private:
//    void printReverse(Node * head)
//    {
//        if(head == NULL)
//        {
//            return;
//        }
//        printReverse(head->nxt);
//        cout<<head->data<<" ";
//    }
//
//};
//
//int main()
//{
//    LinkedList l;
//
//    cout<<l.getSize()<<"\n";
//    l.InsertAtHead(5);
//    cout<<l.getSize()<<"\n";
//    l.InsertAtHead(6);
//    l.InsertAtHead(30);
//    cout<<l.getSize()<<"\n";
//    l.InsertAtHead(20);
//    l.InsertAtHead(30);
//
//    cout<<l.getValue(2)<<"\n";
//
//    cout<<l.getValue(6)<<"\n";
//
//    l.printReverse();
//    l.Traverse();
//    l.swapFirst();
//    l.Traverse();
//    l.printReverse();
//
//
//    return 0;
//}




// question - 4

//int binarySearch(vector<int>a, int k)
//{
//    int low = 0, high = a.size() - 1;
//
//    while(low<=high)
//    {
//        int mid = (low + high)/2;
//        if(a[mid] == k)
//        {
//            return 1;
//        }
//        if(a[mid] > k)
//            high = mid - 1;
//        else
//            low = mid + 1;
//    }
//
//    return 0;
//
//}
//
//int main()
//{
//    int n1, n2,s;
//
//    cin>>n1;
//    vector<int>a1;
//    for(int i=1; i<=n1; i++)
//    {
//        cin>>s;
//        a1.push_back(s);
//    }
//
//    cin>>n2;
//    vector<int>a2;
//    for(int i=1; i<=n2; i++)
//    {
//        cin>>s;
//        a2.push_back(s);
//    }
//
//    sort(a2.begin(), a2.end());
//
//    int counts = 0;
//    for(int i=0; i<n1; i++)
//    {
//        int value = binarySearch(a2, a1[i]);
//        counts += value;
//    }
//
//    if(counts == a1.size())
//    {
//        cout<<"YES"<<"\n";
//    }
//    else
//        cout<<"NO"<<"\n";
//
//    return 0;
//}

//int return_sum(vector<int>a, int k)
//{
//    if(a.size()<=1)
//    {
//        return a;
//    }
//
//    vector<int>b, c;
//
//    int mid = a.size()/2;
//
//    for(int i=0; i<mid; i++)
//    {
//        b.push_back(a[i]);
//    }
//
//    for(int i=mid; i<a.size(); i++)
//    {
//        c.push_back(a[i]);
//    }
//
//    vector<int>part_b = return_sum(b);
//    vector<int>part_c = return_sum(c);
//    int counts = 0;
//
//    int idxb =0;
//    int idxc =0;
//
//    for(int i =0; i<a.size(); i++)
//    {
//        if(part_b[idxb] + part_c[idxc] == k)
//        {
//            count++;
//        }
//        idxb++;
//        idxc++;
//    }
//}
//
//int main()
//{
//
//    return 0;
//}

















//question -2
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    vector<int>arr;
//
//    int input;
//    for(int i=1; i<=n-1; i++)
//    {
//        cin>>input;
//        arr.push_back(input);
//    }
//
//    sort(arr.begin(), arr.end());
//
//    int num = 1;
//
//    for(int i=0; i<n-1; i++)
//    {
//        if(arr[i] != num)
//        {
//            cout<<num<<"\n";
//            return 0;
//        }
//
//        num++;
//    }
//    return 0;
//}



// question - 1

//
//vector<int> quick_sort(vector<int>&a)
//{
//    if(a.size() <= 1)
//    {
//        return a;
//    }
//
//    vector<int> b, c;
//
//    int pivot = rand()%(a.size());
//
//    for(int i=0; i<a.size(); i++)
//    {
//        if(i == pivot)
//        {
//            continue;
//        }
//        if(a[i] > a[pivot])
//        {
//            b.push_back(a[i]);
//        }
//        else
//        {
//            c.push_back(a[i]);
//        }
//    }
//
//    vector<int> sorted_b = quick_sort(b);
//    vector<int> sorted_c = quick_sort(c);
//    vector<int> sorted_a;
//
//    for(int i=0; i<sorted_b.size(); i++)
//    {
//        sorted_a.push_back(sorted_b[i]);
//    }
//
//    sorted_a.push_back(a[pivot]);
//
//    for(int i=0; i<sorted_c.size(); i++)
//    {
//        sorted_a.push_back(sorted_c[i]);
//    }
//
//    return sorted_a;
//}
//
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    vector<int>a;
//
//    for(int i=1; i<=n; i++)
//    {
//        int input;
//
//        cin>>input;
//        a.push_back(input);
//    }
//
//    vector<int>sorted_a = quick_sort(a);
//
//
//    for(int i=0; i<sorted_a.size(); i++)
//        cout<<sorted_a[i]<<" ";
//
//
//    return 0;
//}
