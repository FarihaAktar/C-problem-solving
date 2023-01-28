#include<bits/stdc++.h>

using namespace std;

int find_max(vector<int>&v, int n)
{
    if(n == 1)
    {
        return v[0];
    }
    int max_num = find_max(v, n-1);
    if(v[n-1]> max_num)
        max_num = v[n-1];
    return max_num;
}

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<find_max(v,v.size())<<"\n";
    return 0;
}


//int is_palindrom(string s, int num)
//{
//    if(num > s.size())
//    {
//        return 0;
//    }
//    int len = s.size()-num-1;
//    if(s[num] != s[len])
//    {
//        return 1;
//    }
//    return is_palindrom(s, num+1);
//
//}
//
//int main()
//{
//    string s;
//    cin>>s;
//    int flag = is_palindrom(s,0);
//    if(flag)
//        cout<<"NO"<<"\n";
//    else
//        cout<<"YES"<<"\n";
//    return 0;
//}

//
//vector<int>quick_sort(vector<int>&arr)
//{
//    if(arr.size()<=1)
//    {
//        return arr;
//    }
//    int pivot = rand()%(arr.size());
//
//    vector<int>a, b;
//
//    for(int i=0; i<arr.size(); i++)
//    {
//        if(i == pivot)
//        {
//            continue;
//        }
//        if(arr[i]>arr[pivot])
//        {
//            a.push_back(arr[i]);
//        }
//        else
//        {
//            b.push_back(arr[i]);
//        }
//    }
//
//    vector<int>sorted_a = quick_sort(a);
//    vector<int>sorted_b = quick_sort(b);
//    vector<int>sorted_c;
//
//    for(int i=0; i<sorted_a.size(); i++)
//        sorted_c.push_back(sorted_a[i]);
//
//    sorted_c.push_back(arr[pivot]);
//
//
//    for(int i=0; i<sorted_b.size(); i++)
//        sorted_c.push_back(sorted_b[i]);
//
//    return sorted_c;
//
//}
//
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    vector<int>arr(n);
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>arr[i];
//    }
//
//    vector<int>sorted_a = quick_sort(arr);
//
//
//    for(int i=0; i<sorted_a.size(); i++)
//        cout<<sorted_a[i]<<" ";
//
//
//    return 0;
//}



//int main()
//{
//    int n;
//    cin>>n;
//
//    vector<int>arr(n);
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>arr[i];
//    }
//
//    sort(arr.begin(), arr.end());
//
//    auto t = unique(arr.begin(), arr.end());
//
//    arr.resize(distance(arr.begin(), t));
//    int idx = 0;
//
//    while(idx < arr.size())
//    {
//        cout<<arr[idx]<<" ";
//        idx++;
//    }
//
//
//    return 0;
//}




//int main()
//{
//    int n;
//    cin>>n;
//
//    vector<int>arr(n);
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>arr[i];
//    }
//
//    for(int i=0, j=n-1; i<n/2; j--, i++)
//    {
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}
