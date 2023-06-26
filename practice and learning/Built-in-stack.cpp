#include<bits/stdc++.h>

using namespace std;


int main()
{
    stack<int> st;

    //O(1)
    st.push(10);
    st.push(20);
    st.push(30);

//O(1)
    cout<<st.size()<<"\n";
//    O(1);
    st.pop();
//    O(1)
    cout<<st.top()<<"\n";

    return 0;
}
