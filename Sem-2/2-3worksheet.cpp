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

// // C++ program for the above approach

// #include <bits/stdc++.h>
// using namespace std;

// // DSU data structure
// // path compression + rank by union
// class DSU {
// 	int* parent;
// 	int* rank;

// public:
// 	DSU(int n)
// 	{
// 		parent = new int[n];
// 		rank = new int[n];

// 		for (int i = 0; i < n; i++) {
// 			parent[i] = -1;
// 			rank[i] = 1;
// 		}
// 	}

// 	// Find function
// 	int find(int i)
// 	{
// 		if (parent[i] == -1)
// 			return i;

// 		return parent[i] = find(parent[i]);
// 	}

// 	// Union function
// 	void unite(int x, int y)
// 	{
// 		int s1 = find(x);
// 		int s2 = find(y);

// 		if (s1 != s2) {
// 			if (rank[s1] < rank[s2]) {
// 				parent[s1] = s2;
// 			}
// 			else if (rank[s1] > rank[s2]) {
// 				parent[s2] = s1;
// 			}
// 			else {
// 				parent[s2] = s1;
// 				rank[s1] += 1;
// 			}
// 		}
// 	}
// };

// class Graph {
// 	vector<vector<int> > edgelist;
// 	int V;

// public:
// 	Graph(int V) { this->V = V; }

// 	// Function to add edge in a graph
// 	void addEdge(int x, int y, int w)
// 	{
// 		edgelist.push_back({ w, x, y });
// 	}

// 	void kruskals_mst()
// 	{
// 		// Sort all edges
// 		sort(edgelist.begin(), edgelist.end());

// 		// Initialize the DSU
// 		DSU s(V);
// 		int ans = 0;
// 		cout << "Following are the edges in the "
// 				"constructed MST"
// 			<< endl;
// 		for (auto edge : edgelist) {
// 			int w = edge[0];
// 			int x = edge[1];
// 			int y = edge[2];

// 			// Take this edge in MST if it does
// 			// not forms a cycle
// 			if (s.find(x) != s.find(y)) {
// 				s.unite(x, y);
// 				ans += w;
// 				cout << x << " -- " << y << " == " << w
// 					<< endl;
// 			}
// 		}
// 		cout << "Minimum Cost Spanning Tree: " << ans;
// 	}
// };

// // Driver code
// int main()
// {
// 	Graph g(4);
// 	g.addEdge(0, 1, 10);
// 	g.addEdge(1, 3, 15);
// 	g.addEdge(2, 3, 4);
// 	g.addEdge(2, 0, 6);
// 	g.addEdge(0, 3, 5);

// 	// Function call
// 	g.kruskals_mst();

// 	return 0;
// }


#include <iostream>    
#include <algorithm>    
using namespace std;    
const int MAX = 1e4 + 5;    
int id[MAX], nodes, edges;    
pair <long long, pair<int, int> > p[MAX];    
void init()    
{    
    for(int i = 0;i < MAX;++i)    
        id[i] = i;    
}      
int root(int x)    
{    
    while(id[x] != x)    
    {    
        id[x] = id[id[x]];    
        x = id[x];    
    }    
    return x;    
}      
void union1(int x, int y)    
{    
    int p = root(x);    
    int q = root(y);    
    id[p] = id[q];    
}     
long long kruskal(pair<long long, pair<int, int> > p[])    
{    
    int x, y;    
    long long cost, minimumCost = 0;    
    for(int i = 0;i < edges;++i)    
    {    
        x = p[i].second.first;    
        y = p[i].second.second;    
        cost = p[i].first;    
        if(root(x) != root(y))    
        {    
            minimumCost += cost;    
            union1(x, y);    
        }        
    }    
    return minimumCost;    
}     
int main()    
{    
    int x, y;    
    long long weight, cost, minimumCost;    
    init();    
    cout <<"Enter Nodes and edges";    
    cin >> nodes >> edges;    
    for(int i = 0;i < edges;++i)    
    {    
        cout<<"Enter the value of X, Y and edges";    
    cin >> x >> y >> weight;    
        p[i] = make_pair(weight, make_pair(x, y));    
    }    
    sort(p, p + edges);    
    minimumCost = kruskal(p);    
    cout <<"Minimum cost is "<< minimumCost << endl;    
    return 0;    
}  