#include<bits/stdc++.h>

using namespace std;




//const int N = 1e5;
//
//int visited[N];
//vector<int>adj_list[N];
//
//int dfs(int node)
//{
//    visited[node] = 1;
//    for(auto adj_node: adj_list[node])
//    {
//        if(visited[adj_node] == 0)
//        {
//            dfs(adj_node);
//        }
//    }
//}
//
//
//int main()
//{
//    int nodes, edges;
//    cin>>nodes>>edges;
//
//    for(int i=0; i<edges; i++)
//    {
//        int u, v;
//        cin>>u>>v;
//        adj_list[u].push_back(v);
//        adj_list[v].push_back(u);
//    }
//
//    int num = 0;
//
//    for(int i=0; i<nodes; i++)
//    {
//        if(visited[i] == 0)
//        {
//            dfs(i);
//            num++;
//        }
//    }
//
//    cout<<num<<"\n";
//
//
//    return 0;
//}




//const int N = 1e5;
//
//int color[N];
//int visited[N];
//
//vector<int>adj_list[N];
//
//bool dfs(int node)
//{
//    visited[node] = 1;
//
//    for(auto adj_node: adj_list[node])
//    {
//        if(visited[adj_node] == 0)
//        {
//            if(color[node] == 1)
//            {
//                color[adj_node] =2;
//            }
//            else
//            {
//                color[adj_node] = 1;
//            }
//
//            bool is_bipartite = dfs(adj_node);
//            if(!is_bipartite)
//            {
//                return false;
//            }
//        }
//        else
//        {
//            if(color[node] == color[adj_node])
//            {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//
//int main()
//{
//    int nodes, edges;
//    cin>>nodes>>edges;
//
//    for(int i=0; i<edges; i++)
//    {
//        int u, v;
//        cin>>u>>v;
//        adj_list[u].push_back(v);
//        adj_list[v].push_back(u);
//    }
//
//    bool is_bipartite = true;
//
//    for(int i=0; i<nodes; i++)
//    {
//        if(visited[i] == 0)
//        {
//            color[i] = 1;
//            bool bipartite = dfs(i);
//            if(!bipartite)
//            {
//                is_bipartite = false;
//                break;
//            }
//        }
//    }
//
//    if(is_bipartite)
//    {
//        cout<<"YES"<<"\n";
//    }
//    else
//    {
//        cout<<"NO"<<"\n";
//    }
//    return 0;
//}

//const int N = 1e5;
//vector<int>adj_list[N];
//int visited[N];
//
//
//bool detect_cycle(int node)
//{
//    visited[node] = 1;
//
//    for(int adj_node: adj_list[node])
//    {
//        if(visited[adj_node] == 0)
//        {
//            bool cycle_detected  = detect_cycle(adj_node);
//            if(cycle_detected)
//            {
//                return true;
//            }
//        }
//        else if(visited[adj_node] == 1)
//        {
//            return true;
//        }
//    }
//    visited[node] = 2;
//    return false;
//}
//
//
//
//int main()
//{
//    int nodes, edges;
//    cin>>nodes>>edges;
//
//    for(int i=0; i<edges; i++)
//    {
//        int u, v;
//        cin>>u>>v;
//
//        adj_list[u].push_back(v);
//
//    }
//
//    bool cycle_detected = false;
//
//    for(int i=0; i<nodes; i++)
//    {
//        if(visited[i] == 0)
//        {
//            bool got_cycle = detect_cycle(i);
//            if(got_cycle)
//            {
//                cycle_detected = true;
//                break;
//            }
//        }
//    }
//    if(cycle_detected)
//    {
//        cout<<"YES"<<"\n";
//    }
//    else{
//        cout<<"NO"<<"\n";
//    }
//    return 0;
//}

/*
6 7
0 1
0 3
0 4
1 2
1 5
2 4
4 5

*/

//const int N = 1000;
//
//vector<int>adj_list[N];
//
//int visited[N];
//int level[N];
//
//void bfs(int src)
//{
//
//    queue<int>q;
//    visited[src] = 1;
//    level[src] = 0;
//    q.push(src);
//
//    while(!q.empty())
//    {
//        int head = q.front();
//        q.pop();
//
//        for(auto adj_node : adj_list[head])
//        {
//            if(visited[adj_node] == 0)
//            {
//                visited[adj_node] = 1;
//                level[adj_node] = level[head] + 1;
//                q.push(adj_node);
//            }
//        }
//    }
//
//}
//
//int main()
//{
//    int nodes, edges;
//    cin>>nodes>>edges;
//
//    for(int i=0; i<edges; i++)
//    {
//        int u, v;
//        cin>>u>>v;
//        adj_list[u].push_back(v);
//        adj_list[v].push_back(u);
//    }
//
//
//    int src = 0;
//    bfs(src);
//
//    for(int i=0; i<nodes; i++)
//    {
//        cout<<"node "<< i <<" -> "<<"level: "<<level[i]<<"\n";
//    }
//
//    return 0;
//}

