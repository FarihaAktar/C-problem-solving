//https://codeforces.com/problemset/problem/1033/A

#include<bits/stdc++.h>

using namespace std;

const int N = 1001;
int visited[N][N];

int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};


int main()
{
    int n;
    cin>>n;

    int queen_pos_x, queen_pos_y;
    cin>> queen_pos_x >> queen_pos_y;

    int king_pos_x, king_pos_y;
    cin>> king_pos_x >> king_pos_y;

    int target_pos_x, target_pos_y:
    cin>>target_pos_x >> target_pos_y;

    if(canBobWin())
    {
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}
