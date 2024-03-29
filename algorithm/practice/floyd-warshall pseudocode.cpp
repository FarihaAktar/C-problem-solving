// Pseudocode: Floyd-Warshall

Input -> A weighted graph as an adjacency matrix
Output -> All pair shortest distance

Time complexity ->  O(V^3)
Space Complexity -> O(V^2)


- create a distance_matrix "d" where d[i][j] = x where there is a direct
  edge from node "i" to node "j" and the cost is "x"
- for all node "i" d[i][i] = 0
- for all nodes "i" & "j" where there isn't any direct edge from "i" to "j",
    d[i][j] = INF


- for all node "k" -> O(1)
    - for all node "u" -> O(1)
        - for all node "v" -> O(1)
            - d[u][v] = min(d[u][v], d[u][k] + d[k][v] )    => O(1)

- output all pair shortest distance "d"
