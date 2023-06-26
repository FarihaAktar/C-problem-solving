#include<bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int>st;

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
    // it will erase all the similar value
    st.erase(5);

    //it will delete only the first element that is found. also we have to make sure the element is exist before doing this operation or it will crash. it providing the memory address rather than the value.
    st.erase(st.find(3));

    for(auto i:st)
        cout<<i<<" ";
    cout<<"\n";

//    find -> O(logn)

    if(st.find(7) != st.end())
        cout<<"found\n";
    return 0;
}
