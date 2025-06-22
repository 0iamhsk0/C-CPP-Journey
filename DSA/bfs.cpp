/******************************************************************************
BFS uses queue
*******************************************************************************/

// dfs uses stack
#include <iostream>
using namespace std;

int main()
{
    int n, edges, i, j;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> edges;
    int adj[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }
    int source_vertex, dest_vertex;
    cout << "Enter the source_vertex and destination vertex of all edges: ";
    for (i = 0; i < edges; i++)
    {
        cin >> source_vertex >> dest_vertex;
        adj[source_vertex][dest_vertex] = 1;
    }
    cout << "Adjacency matrix is: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    int start, queue[n], bfs[n], status[n], f = -1, r = -1, k = 0;
    for (i = 0; i < n; i++)
    {
        status[i] = 0;
    }
    cout << "Enter the stating vertex: ";
    cin >> start;
    f = r = 0;
    queue[r] = start;
    status[start] = 1;
    while (f != -1)
    {
        int w = queue[f];
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            f++;
        }
        bfs[k++] = w;
        status[w] = 2;
        for (int a = 0; a < n; a++)
        {
            if (adj[w][a] == 1 && status[a] == 0)
            {
                queue[++r] = a;
                if (f == -1)
                {
                    f = 0;
                }
                status[a] = 1;
            }
        }
    }
    cout << "BFS is :" << endl;
    for (i = 0; i < k; i++)
    {
        cout << bfs[i] << " ";
    }
    return 0;
}