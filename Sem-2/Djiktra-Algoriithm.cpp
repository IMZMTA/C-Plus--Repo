// #include <iostream>
// #include <limits.h>
// using namespace std;

// int miniDist(int distance[], bool Tset[]) // finding minimum distance
// {
//     int minimum = INT_MAX, ind;

//     for (int k = 0; k < 6; k++)
//     {
//         if (Tset[k] == false && distance[k] <= minimum)
//         {
//             minimum = distance[k];
//             ind = k;
//         }
//     }
//     return ind;
// }

// void DijkstraAlgo(int graph[6][6], int src) // adjacency matrix
// {
//     int distance[6]; // // array to calculate the minimum distance for each node
//     bool Tset[6];    // boolean array to mark visited and unvisited for each node

//     for (int k = 0; k < 6; k++)
//     {
//         distance[k] = INT_MAX;
//         Tset[k] = false;
//     }

//     distance[src] = 0; // Source vertex distance is set 0

//     for (int k = 0; k < 6; k++)
//     {
//         int m = miniDist(distance, Tset);
//         Tset[m] = true;
//         for (int k = 0; k < 6; k++)
//         {
//             // updating the distance of neighbouring vertex
//             if (!Tset[k] && graph[m][k] && distance[m] != INT_MAX && distance[m] + graph[m][k] < distance[k])
//                 distance[k] = distance[m] + graph[m][k];
//         }
//     }
//     cout << "Vertex\t\tDistance from source vertex" << endl;
//     for (int k = 0; k < 6; k++)
//     {
//         char str = 65 + k;
//         cout << str << "\t\t\t" << distance[k] << endl;
//     }
// }

// int main()
// {
//     int graph[6][6] = {
//         {0, 1, 2, 0, 0, 0},
//         {1, 0, 0, 5, 1, 0},
//         {2, 0, 0, 2, 3, 0},
//         {0, 5, 2, 0, 2, 2},
//         {0, 1, 3, 2, 0, 1},
//         {0, 0, 0, 2, 1, 0}};
//     DijkstraAlgo(graph, 0);
//     return 0;
// }

#include <stdio.h>
using namespace std;

int parent[9];
int find(int);
int uni(int, int);
int main()
{
    int i, j, k, a, b, u, v, n, ne = 1;
    int min, mincost = 0, cost[9][9];
    printf("\nEnter the no.of vertices:");
    scanf("%d", &n);
    printf("\n enter the cost adjacency matrix :\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }
    printf("the edges of minimum cost spinning tree are ::\n");
    while (ne < n)
    {
        for (i = 1, min = 999; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if (uni(u, v))
        {
            printf("%d edge (%d,%d) =%d\n", ne++, a, b, min);
            mincost += min;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\n Minimum cost =%d\n", mincost);
}

int find(int i)
{
    while (parent[i])
        i = parent[i];
    return i;
}

int uni(int i, int j)
{
    if (i != j)
    {
        parent[j] = i;
        return 1;
    }
    return 0;
}