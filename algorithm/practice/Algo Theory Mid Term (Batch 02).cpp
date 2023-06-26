#include<bits/stdc++.h>

using namespace std;


const int maxN = 1010;
char grid[maxN][maxN];
bool visited[maxN][maxN];
pair<int, int> parent[maxN][maxN];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
char dir[4] = { 'D','R','U','L' };
int end_x, end_y;


void bfs(int x, int y, int n, int m)
{
    queue<pair<int, int>> q;
    q.push({ x,y });
    visited[x][y] = true;
    parent[x][y] = { -1,-1 };
    while (!q.empty())
    {
        pair<int, int> u = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int dx_, dy_;
            dx_ = u.first + dx[i];
            dy_ = u.second + dy[i];
            if(dx_ < 1 || dx_ > n || dy_ < 1 || dy_ > m)
            {
                end_x = u.first;
                end_y = u.second;
                break;
            }
            if (dx_ >= 1 && dx_ <= n && dy_ >= 1 && dy_ <= m && !visited[dx_][dy_] && grid[dx_][dy_] != '#'&& grid[dx_][dy_] != '#' && grid[dx_][dy_] != 'M')
            {
                visited[dx_][dy_] = true;
                q.push({ dx_,dy_ });
                parent[dx_][dy_] = u;
            }
        }
    }

}


int main()
{
    int n, m;
    cin >> n >> m;
    int start_x, start_y;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                start_x = i;
                start_y = j;
            }
        }
    }
    bfs(start_x, start_y, n, m);
    if (visited[end_x][end_y])
    {
        cout << "YES" << '\n';
        vector<pair<int, int>> path;
        path.push_back({ end_x,end_y });
        int x = end_x, y = end_y;
        while (parent[x][y] != make_pair(-1, -1))
        {
            pair<int, int> p = parent[x][y];
            x = p.first, y = p.second;
            path.push_back({ x,y });
        }
        reverse(path.begin(), path.end());
        string ans;
        for (int i = 0; i < path.size() - 1; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int dx_, dy_;
                dx_ = path[i].first + dx[j];
                dy_ = path[i].second + dy[j];
                if (dx_ == path[i + 1].first && dy_ == path[i + 1].second)
                {
                    ans.push_back(dir[j]);
                    break;
                }
            }
        }
        cout << ans.size() << '\n';
        cout << ans << '\n';
    }
    else
        cout << "NO" << '\n';
    return 0;
}

//const int N = 2e5 + 5;
//
//vector<int>adj_list[N];
//int visited[N];
//
//
//void bfs(int src)
//{
//    visited[src] = 1;
//    queue<int>q;
//    q.push(src);
//
//    while(!q.empty())
//    {
//        int head = q.front();
//        q.pop();
//
//        for(int adj_node: adj_list[head])
//        {
//            if(visited[adj_node] == 0)
//            {
//
//                visited[adj_node] = 1;
//                q.push(adj_node);
//            }
//        }
//    }
//}
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//
//    for(int i = 0 ; i < m ; i++)
//    {
//        int u, v;
//        cin >> u >> v;
//        adj_list[u].push_back(v);
//        adj_list[v].push_back(u);
//    }
//
//    bfs(1);
//    int dest_node = n;
//
//    if(visited[dest_node] == 0)
//    {
//        cout<<"NO"<<"\n";
//    }
//    else
//    {
//        cout<<"YES"<<"\n";
//    }
//
//    return 0;
//}

//int sum(int n, int arr[])
//{
//    if(n == 0)
//    {
//        return 0;
//    }
//
//        return arr[n-1] + sum(n-1, arr);
//
//
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//
//    int arr[n];
//
//    for(int i=0; i<n; i++)
//    {
//        int s;
//        cin>>s;
//        arr[i] = s;
//    }
//
//    int ans = sum(n, arr);
//    cout<<ans<<"\n";
//
//
//    return 0;
//}


//const int N = 2e5;
//
//vector<int>adj_list[N];
//int visited[N];
//int parent[N];
//
//bool detect_cycle(int node)
//{
//    visited[node] = 1;
//
//    for(int adj_node: adj_list[node])
//    {
//        if(adj_node == parent[node])
//        {
//            continue;
//        }
//
//        if(visited[adj_node] == 0)
//        {
//            parent[adj_node] = node;
//            bool got_cycle = detect_cycle(adj_node);
//            if(got_cycle)
//            {
//                return true;
//            }
//        }
//        else if(visited[adj_node] == 1)
//        {
//            return true;
//        }
//
//    }
//    visited[node] = 2;
//    return false;
//}
//
//int main()
//{
//    int n,m;
//    cin>>n>>m;
//
//    for(int i=0; i<m; i++)
//    {
//        int u,v;
//        cin>>u>>v;
//
//        adj_list[u].push_back(v);
//        adj_list[v].push_back(u);
//    }
//
//    bool cycle_exist = false;
//
//    for(int i=1; i<=n; i++)
//    {
//        if(visited[i] == 0)
//        {
//            bool got_cycle = detect_cycle(i);
//            if(got_cycle)
//            {
//                cycle_exist = true;
//                break;
//            }
//        }
//    }
//
//    if(cycle_exist)
//    {
//        cout<<"Cycle Exist"<<"\n";
//    }
//    else
//    {
//        cout<<"No Cycle"<<"\n";
//    }
//    return 0;
//}
