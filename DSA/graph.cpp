// WAP TO TRACVERS THE GRAPH USING DFS:

#include <iostream>
using namespace std;

int main()
{
    int n, edges;
    cout << "Enter how many nodes and edges are there: ";
    cin >> n >> edges;
    int adj[n][edges];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < edges; j++)
        {
            adj[i][j] = 0;
        }
    }
    int start_vertex, end_vertex;
    cout << "Enter the start vertex and end vertex of all the nodes\n";
    for (int i = 0; i < edges; i++)
    {
        cin >> start_vertex >> end_vertex;
        adj[start_vertex][end_vertex] = 1;
    }
    cout << "Adjacency matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < edges; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

    // traversing
    int start, queue[n], bfs[n], status[n], f = -1, r = -1;
    cout << "Ekkada nunchi start chesthav ra erripuka: ";
    cin >> start;
    for (int i = 0; i < n; i++)
    {
        status[i] = 0;
    }
    f = r = 0;
    queue[f] = start;
    status[start] = 1;
    while (f != r)
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
        status[w] = 2;
        bfs[k] = w;
        k++;
        for (int a = 0; a < n; a++)
        {
            if ((adj[w][a]) && !status[a])
            {
                queue[++r] = a;
                if (r == 0)
                {
                    f = 0;
                }
                status[a] = 1;
            }
