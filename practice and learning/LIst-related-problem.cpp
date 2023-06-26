
#include<bits/stdc++.h>

using namespace std;



/*
Write a function void deleteValue(list<int> & l , int value)’ -> This function will delete the first occurrence of the element that is equal to the input value from the stl list. 										      10
Sample Input: STL list containing [7, 3, 8, 4, 5, 4], value : 4
Sample Output: STL list containing [7, 3, 8, 5, 4]
*/



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
