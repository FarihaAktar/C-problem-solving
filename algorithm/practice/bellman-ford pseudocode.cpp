// Pseudocode: Bellman-Ford

Input -> A weighted graph & a src node with negative edges (with no negative cycles)
Ouput -> Shortest distance from src node to all other nodes


n -> number of nodes in graph
m -> number of edges in graph


time complexity -> O(n*m)
Space Complexity -> O(n)


/*
u ----> v

d[u] + c(u,v) < d[v]
=> d[v] = d[u] + c(u,v)

*/

- create a distance array "d" with all values to infinity
- d[src] = 0


- for i = 1 to n-1:
    - for all edge e(u, v, w):
        - if d[u] + w < d[v]:
            - d[v] = d[u] + w

- print the distance array "d"
