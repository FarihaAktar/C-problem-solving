/*
input - a weighted graph and a source
output - distance of all nodes from the source

------note-- this algorithm works well with sparce graph

space complexity -- O(v)
time complexity -- O(m log n)

n -> V
m -> E

- create a distance array 'd' -- O(n)
- initialize all values of 'd' to infinity
- d[src] = 0;
- create a visited array and mark all nodes as unvisited --- O(n)
- take an empty priority_queue "pq"
- pq.push({0, src})


- while the priority queue is not empty -- O(E)
    - head_distance, head = pq.front()
    - pq.pop() --  O(log E)
    - if visited[head] = 1 continue
    - visited[head] = 1
    - for all adj_node of node: -- O(E)
     - if d[node] + c(node, adj_node) < d[adj_node]
            - d[adj_node] = d[nodes] + c(node, adj_node)
            - pq.push({d[adj_node], adj_node}) -- O(log E)




- output array 'd'



O(n) + O(E log E) + O(E log E)
-> O(|E| log |E|)   // E => v^2
-> O(|E| log |v^2|)
-> O(2{E| log |v|)
-> O(|E| log |V|)  \\ base  -2

*/
