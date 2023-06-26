#include<bits/stdc++.h>


using namespace std;

/*
Red+Blue = Purple
Red+Green = Yellow
Blue+Green = Cyan

*/

// contest ans solutions - https://github.com/S-M-Mazharul-Islam-RIfat/Phitron-Monthly-Contest-Solutions-March-2023-Batch-02-?fbclid=IwAR0FKkD4CWHe42RIsFdXx56JRXCVvprphXwDXm51Y5zDjtzEa2gE76Wcv1M

char colors(char c1, char c2)
{
    if ((c1 == 'R' && c2 == 'B') || (c1 == 'B' && c2 == 'R'))
    {
        return 'P';
    }
    else if ((c1 == 'R' && c2 == 'G') || (c1 == 'G' && c2 == 'R'))
    {
        return 'Y';
    }
    else if ((c1 == 'B' && c2 == 'G') || (c1 == 'G' && c2 == 'B'))
    {
        return 'C';
    }
    else if (c1 == c2)
    {
        return ' ';
    }
    else
    {
        return ' ';
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        deque<char> box;

        for (int i = 0; i < n; i++)
        {
            box.push_back(s[i]);
        }

        deque<char>mixed;

        while(!box.empty())
        {
            char c1 = box.front();
            box.pop_front();
            if(!box.empty())
            {
                char c2 = box.front();
                box.pop_front();
                char mixedColor = colors(c1, c2);
                if (mixedColor != ' ')
                {
                    mixed.push_back(mixedColor);
                }

            }
            else
            {
                mixed.push_back(c1);
            }

        }

        deque<char> finalColors;

        while (!mixed.empty())
        {
            char color = mixed.front();
            mixed.pop_front();
            if (!finalColors.empty() && finalColors.front() == color)
            {
                finalColors.pop_front();
            }
            else     // The color did not vanish
            {
                finalColors.push_back(color);
            }
        }

        if (finalColors.empty())
        {
            cout << " " << endl;
        }
        else
        {
            while (!finalColors.empty())
            {
                cout << finalColors.front();
                finalColors.pop_front();
            }
            cout << endl;
        }

    }
    return 0;
}


//int main()
//{
//    string s;
//    cin>>s;
//    stack<char>st;
//
//    for(int i=0; i<s.size(); i++)
//    {
//        char c = s[i];
//        if(c == '{') st.push(c);
//        else if (c =='}' && !st.empty() && st.top() == '{')
//        {
//            st.pop();
//        }
//        else st.push(c);
//
//    }
//
//    if(st.empty())
//    {
//        cout<<s.size()<<"\n";
//    }
//    else
//    {
//        cout<<0<<"\n";
//    }
//    return 0;
//}

//int main()
//{
//    int q;
//    cin>>q;
//
//    int op1, op2;
//
//    priority_queue<int>pq;
//    while(q--)
//    {
//        cin>>op1;
//        if(op1 != 2)
//        {
//            cin>>op2;
//            pq.push(op2);
//        }
//        if(op1 == 2)
//        {
//            cout<<pq.top()<<"\n";
//            pq.pop();
//        }
//    }
//    return 0;
//}

//int main()
//{
//    long long int num;
//    cin>>num;
//
//    long long int index = 1, odd = 0, even = 0;
//
//    while(num > 0)
//    {
//        int digit = num % 10;
//        num /= 10;
//        if(index % 2 == 1)
//        {
//
//            odd += digit;
//        }
//        else if(index % 2 == 0)
//        {
//
//             even += digit;
//        }
//        index++;
//    }
//
//    long long int ans = abs(odd - even);
//    if(ans % 11 == 0)
//    {
//        cout<<"YES\n";
//    }else
//    {
//        cout<<"NO\n";
//    }
//
//
//    return 0;
//}
