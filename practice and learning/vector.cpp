#include<bits/stdc++.h>


using namespace std;

// vector built in function
// find
// count
// insert
// erase

int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int i=1; i<=n; i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }

//    reverse(v.begin(), v.end());

    // max element
//    int max = *max_element(v.begin(), v.end());
//    cout<<max<<"\n";

//    min element
//    int min = *min_element(v.begin(), v.end());

//    partially min element from 1 index up to index 5 but not including 5
//    int min = *min_element(v.begin() + 1, v.begin()+5);
//    cout<<min<<"\n";


//    descending order sorting
//    sort(v.rbegin(), v.rend());
//    sort(v.begin(), v.end(), greater<int>());

//    vector<int>:: iterator it;
// sort version for this iterator syntax
    auto it=v.begin();

    for(it=v.begin(); it!= v.end(); it++)
    {
        cout<<*it<<" ";
    }

// for each loop
//    for(auto val:v)
//    {
//        cout<<val<<" ";
//    }

//    for(int val:v)
//    {
//        cout<<val<<" ";
//    }

    return 0;
}
