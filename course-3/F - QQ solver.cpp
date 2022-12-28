#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cin>>str;

    stringstream obj;
    stringstream obj2;

    int num1;
    int num2;
    obj << str[0];
    obj >> num1;
    obj2 << str[2];
    obj2 >> num2;

    cout<<num1 * num2<<endl;


    return 0;
}
