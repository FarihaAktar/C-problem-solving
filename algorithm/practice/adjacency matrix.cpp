#include<bits/stdc++.h>

using namespace std;

/*
0 ---- 1
      / \
     2---3

      total node = 4
      total edge = 4;
      undirected + unweighted graph

      matrix = no of nodes * n0 of nodes
            = 4 * 4

      if only one edge is used to go from one node to another then matrix[i][j] = 1.

        adjacency matrix -
        --------------

        space complexity - O(n^2)
        time complexity - O(n^2)


*/

int main()
{
    int nodes = 4; // O(1)

    int matrix[nodes][nodes];

    // O(n^2)
    for(int i=0; i<nodes; i++)
    {
        for(int j =0; j<nodes; j++)
        {
            matrix[i][j] = 0;
        }
    }

    //O(1)
    matrix[0][1] = 1;
    matrix[1][0] = 1;

    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[1][3] = 1;
    matrix[3][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    for(int i=0; i<nodes; i++)
    {
        for(int j =0; j<nodes; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
