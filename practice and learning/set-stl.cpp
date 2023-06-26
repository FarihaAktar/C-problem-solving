#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>st;

//    insert -> O(logn)
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);

    // print -> O(n)
    for(auto i:st)
        cout<<i<<" ";
    cout<<"\n";

    for(auto i=st.begin(); i!=st.end(); i++)
        cout<<*i<<" ";
    cout<<"\n";

    //size -> O(1)
    cout<<st.size()<<"\n";

    //erase -> O(logn)

    st.erase(5);

    for(auto i:st)
        cout<<i<<" ";
    cout<<"\n";

//    find -> O(logn)

    if(st.find(7) != st.end())
        cout<<"found\n";
    return 0;
}
