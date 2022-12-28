#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str;

    cin>>str;

    int max_value = 1;
    char s = str[0];

    int current_char = 1;

    for(int i = 1; i<str.size(); i++)
    {
        if(str[i] == s)
        {
            current_char++;
        }
        else
        {
            max_value = max(max_value, current_char);
            current_char = 1;
            s = str[i];
        }
    }
    max_value = max(max_value, current_char);
    cout<<max_value<<"\n";
    return 0;
}
