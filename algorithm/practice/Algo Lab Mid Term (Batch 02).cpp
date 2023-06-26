#include<bits/stdc++.h>
using namespace std;



int rec(int num)
{
    if(num % 10 == 0)
    {
        return 0;
    }
    int m = num / 10;
    return rec(m) + (num % 10);
}


int main()
{
    int num;
    cin>>num;

    int res = rec(num);


    cout<<res;
    return 0;
}


//int main()
//{
//    string s;
//    cin>>s;
//
//    int odd = 0;
//
//    int l = s.size();
//
//    int arr[27];
//
//    for(int i=1; i<27; i++)
//    {
//        arr[i] = 0;
//    }
//
//    for(int i=0; i<l; i++)
//    {
//        arr[(s[i] - 'a')+1]++;
//    }
//
//    for(int i=1; i<27; i++)
//    {
//        if(arr[i] % 2 != 0)
//        {
//            odd++;
//        }
//    }
//
//    if(odd > 1)
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



//const int N = 2002;
//
//int maze[N][N], visited[N][N];
//int n,m;
//int longest_room = 0, length = 1;
//
//int dx[] = {0,0,-1,1};
//int dy[] = {1,-1,0,0};
//
//
//bool is_inside(pair<int,int>coord )
//{
//    int x = coord.first;
//    int y = coord.second;
//
//    if(x >= 0 && x <n && y >= 0 && y < m)
//    {
//        return true;
//    }
//
//    return false;
//}
//
//bool is_safe(pair<int,int>coord )
//{
//    int x = coord.first;
//    int y = coord.second;
//    if(maze[x][y] == -1)
//    {
//        return false;
//    }
//
//    return true;
//}
//
//void bfs(pair<int, int> src)
//{
//    queue<pair<int,int>>q;
//    visited[src.first][src.second] = 1;
//
//    q.push(src);
//
//    while(!q.empty())
//    {
//        pair<int,int>head = q.front();
//        q.pop();
//
//        int x = head.first;
//        int y = head.second;
//
//        for(int i=0; i<4; i++)
//        {
//            int new_x= x+dx[i];
//            int new_y= y+dy[i];
//
//            pair<int,int>adj_node = {new_x, new_y};
//
//            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0)
//            {
//                visited[new_x][new_y] = 1;
//                q.push(adj_node);
//                length++;
//            }
//        }
//
//        longest_room = max(longest_room, length);
//    }
//}
//pair<int,int> find_unvsited()
//{
//    for(int i=0; i<n; i++)
//    {
//        for(int j =0; j<m; j++)
//        {
//            if(visited[i][j] == 0 && maze[i][j] == 0)
//            {
//                return {i,j};
//            }
//        }
//    }
//    return {-1,-1};
//}
//int main()
//{
//    cin>>n>>m;
//
//
//
//    for(int i =0; i<n; i++)
//    {
//        string input;
//        cin>>input;
//
//        for(int j =0; j<m; j++)
//        {
//            if(input[j] == '#')
//            {
//                maze[i][j] = -1;
//            }
//        }
//    }
//
//
//int room_cnt = 0;
//    while(true)
//    {
//        pair<int, int> unvisited_pos = find_unvsited();
//        if(unvisited_pos == pair<int,int>(-1,-1))
//        {
//            break;
//        }
//        bfs(unvisited_pos);
//        length = 1;
//        room_cnt++;
//    }
//
//    cout<<"Rooms - "<<room_cnt<<"\n";
//    cout<<"Length of the longest room - "<<longest_room<<"\n";
//    return 0;
//}






/*
10 10
1 4 201
2 3 238
3 4 40
3 6 231
3 8 45
4 5 227
4 6 58
4 9 55
5 7 14
6 10 242


*/

//const int N = 1e5 + 5;
//const long long INF = 1e18;
//
//vector<pair<int,int>>adj_list[N];
//int visited[N], parent[N];
//long long d[N];
//
//int n, m;
//
//void dijkstra(int src)
//{
//    for(int i = 1 ; i <= n ; i++)
//    {
//        d[i] = INF;
//    }
//    d[src] = 0;
//
//    priority_queue< pair<long long, int> > pq;
//    pq.push( { 0, src} );
//
//    while( !pq.empty() )
//    {
//
//        pair<long long, int> head = pq.top();
//        pq.pop();
//        int selected_node = head.second;
//
//        if(visited[selected_node])
//        {
//            continue;
//        }
//
//        visited[selected_node] = 1;
//
//        for(auto adj_entry: adj_list[selected_node])
//        {
//            int adj_node = adj_entry.first;
//            int edge_cst = adj_entry.second;
//
//            if(d[selected_node] + edge_cst < d[adj_node])
//            {
//                d[adj_node] = d[selected_node] + edge_cst;
//                parent[adj_node] = selected_node;
//                pq.push( { -d[adj_node], adj_node } );
//            }
//        }
//
//    }
//}
//
//int main()
//{
//    cin >> n >> m;
//
//    for(int i = 0 ; i < m ; i++)
//    {
//        int u, v, w;
//        cin >> u >> v >> w;
//        adj_list[u].push_back({ v, w });
//        adj_list[v].push_back({ u, w });
//    }
//
//    int src = 1;
//    dijkstra(src);
//
//      if(visited[n] == 0) {
//        cout<<-1<<endl;
//        return 0;
//    }
//
//
//    int current_node = n;
//    vector<int>path;
//
//    while(true) {
//        path.push_back(current_node);
//        if(current_node == src) {
//            break;
//        }
//        current_node = parent[current_node];
//    }
//    reverse(path.begin(), path.end());
//
//    for(int node: path) {
//        cout<<node<<" ";
//    }
//    cout<<endl;
//
//    return 0;
//}


//const int N = 1e3 + 3;
//const long long INF = 1e18;
//long long d[N][N];
//
//
//int main() {
//    int n, m, q;
//    cin >> n >> m >> q;
//
//    for(int i = 1 ; i <= n ; i++) {
//        for(int j = 1 ; j <= n ; j++) {
//            d[i][j] = INF;
//        }
//    }
//
//    for(int i = 0 ; i < m ; i++) {
//        int u, v;
//        long long w;
//        cin >> u >> v >> w;
//        d[u][v] = min(d[u][v], w);
//        d[v][u] = min(d[v][u], w);
//    }
//
//    for(int i = 1 ; i <= n ; i++) {
//        d[i][i] = 0;
//    }
//
//
//    for(int k = 1 ; k <= n ; k++) {
//        for(int u = 1 ; u <= n ; u++) {
//            for(int v = 1 ; v <= n ; v++) {
//                d[u][v] = min(d[u][v], d[u][k] + d[k][v] );
//            }
//        }
//    }
//
//    for(int i = 0 ; i < q ; i++) {
//        int u, v;
//        cin >> u >> v;
//        if(d[u][v] == INF) {
//            cout << -1 << "\n";
//        }
//        else {
//            cout << d[u][v] << "\n";
//        }
//    }
//
//    return 0;
//
//}








//const int N = 1e5 +5;
//const long long INF = 1e18;
//
//vector<pair<int, int>> adj_list[N];
//long long d[N];
//
//int parent[N];
//
//int main()
//{
//    int n, m;
//    cin>>n>>m;
//
//    for(int i=1; i<=n; i++)
//    {
//        d[i]= INF;
//    }
//
//    for(int i =0; i<m; i++)
//    {
//        int u,v,w;
//        cin>> u>> v >>w;
//
//        adj_list[u].push_back({v, w});
//    }
//
//    bool negative_cycle = false;
//    int last_updated_node = -1;
//
//
//    for(int i=1; i<=n; i++)
//    {
//        for(int node =1; node<=n; node++)
//        {
//            for(pair<int, int> adj_node: adj_list[node])
//            {
//                int u = node;
//                int v = adj_node.first;
//                int w = adj_node.second;
//
//                if(d[u] + w < d[v])
//                {
//                    d[v] = d[u] + w;
//                    parent[v] = u;
//                    if(i == n)
//                    {
//                        negative_cycle = true;
//                        last_updated_node = v;
//                    }
//                }
//            }
//        }
//    }
//
//    if(negative_cycle == true)
//    {
//        cout<<"YES"<<endl;
//        int selected_node = last_updated_node;
//
//        for(int i = 1 ; i <= n-1 ; i++)
//        {
//            selected_node = parent[selected_node];
//        }
//
//        int first_node = selected_node;
//
//        vector<int>cycle;
//        cycle.push_back(selected_node);
//
//        while(true)
//        {
//            selected_node = parent[selected_node];
//
//            cycle.push_back(selected_node);
//            if(selected_node == first_node)
//            {
//                break;
//            }
//        }
//
//        reverse(cycle.begin(), cycle.end());
//
//        for(int node: cycle)
//        {
//            cout<<node<<" ";
//        }
//        cout<<endl;
//    }
//    else
//    {
//        cout<<"NO"<<endl;
//    }
//    return 0;
//}



/*
5 7
1 2 3
2 4 -8
4 1 2
1 3 2
2 3 1
2 5 5
4 5 2

*/
//const int N = 1e5 + 5;
//const int INF = 1e9;
//
//vector< pair<int, int> >adj_list[N];
//int d[N];
//
//int main() {
//
//    int n, m;
//    cin >> n >> m;
//
//    for(int i = 1 ; i <=  n ; i++) {
//        d[i] = INF;
//    }
//
//    for(int i = 0 ; i < m ; i++) {
//        int u, v, w;
//        cin >> u >> v >> w;
//        adj_list[u].push_back({ v, w });
//    }
//
//    int src = 1;
//
//    d[src] = 0;
//
//    bool negative_cycle = false;
//
//    for(int i = 1 ; i <= n ; i++) {
//        for(int node = 1 ; node <= n ; node++) {
//            for(pair<int, int> adj_node: adj_list[node]) {
//                int u = node;
//                int v = adj_node.first;
//                int w = adj_node.second;
//                if(d[u] + w < d[v]) {
//                    d[v] = d[u] + w;
//                    if(i == n) {
//                        negative_cycle = true;
//                    }
//                }
//            }
//
//
//        }
//    }
//    if(negative_cycle == true) {
//        cout<<"YES"<<endl;
//    }
//    else {
//        cout<<"NO"<<endl;
//    }
//    cout<<endl;
//    return 0;
//}
