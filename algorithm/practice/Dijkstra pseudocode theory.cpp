/*
input - a weighted graph and a source
output - distance of all nodes from the source

space complexity -- O(v)
time complexity -- O(n) + O(n^2) + O(m) --> O(n^2)

- create a distance array 'd' -- O(n)
- initialize all values of 'd' to infinity
- d[src] = 0;
-create a visited array and mark all nodes as unvisited --- O(n)



- for i =0 ti n-1:  --- O(n)
    - pick the 'unvisited' node  with minimum d[node] -- O(n)
    - visited[node] = 1 -- O(1)
    - for all adj_node of node: -- O(E)
     - if d[node] + c(node, adj_node) < d[adj_node]
            - d[adj_node] = d[nodes] + c(node, adj_node)



- output array 'd'

*/
