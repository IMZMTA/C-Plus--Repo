// #include<iostream>
// using namespace std;

// int prime(int n){
//     int c=1;
//     if(n<=1){
//         return c;
//     }
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             c++;
//         }
//     }
//     return c;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int c=prime(n);
//     if(c==1){
//         cout<<"it is a prime number";
//     }
//     else{
//         cout<<"it is not a prime number";
//     }
//     return 0;
// }

// #include <iostream>
// #include <limits.h>
// #include <list>
// using namespace std;

// class Graph
// {
//     int V;
//     list<int> *adj;
//     bool isCyclicUtil(int v, bool visited[], int parent);

// public:
//     Graph(int V);
//     void addEdge(int v, int w);
//     bool isCyclic();
// };

// Graph::Graph(int V)
// {
//     this->V = V;
//     adj = new list<int>[V];
// }

// void Graph::addEdge(int v, int w)
// {
//     adj[v].push_back(w);
//     adj[w].push_back(v);
// }

// bool Graph::isCyclicUtil(int v, bool visited[], int parent)
// {
//     visited[v] = true;
//     list<int>::iterator i;
//     for (i = adj[v].begin(); i != adj[v].end(); ++i)
//     {
//         if (!visited[*i])
//         {
//             if (isCyclicUtil(*i, visited, v))
//                 return true;
//         }
//         else if (*i != parent)
//             return true;
//     }
//     return false;
// }
// bool Graph::isCyclic()
// {
//     bool *visited = new bool[V];
//     for (int i = 0; i < V; i++)
//         visited[i] = false;
//     for (int u = 0; u < V; u++)
//     {
//         if (!visited[u])
//             if (isCyclicUtil(u, visited, -1))
//                 return true;
//     }
//     return false;
// }
// int main()
// {
//     Graph g1(5);
//     g1.addEdge(1, 0);
//     g1.addEdge(0, 2);
//     g1.addEdge(2, 1);
//     g1.addEdge(0, 3);
//     g1.addEdge(3, 4);
//     g1.isCyclic() ? cout << "Graph g1 contains cycle\n": cout << "Graph g1 doesn't contain cycle\n";

//     Graph g2(3);
//     g2.addEdge(0, 1);
//     g2.addEdge(1, 2);
//     g2.isCyclic() ? cout << "Graph g2 contains cycle\n" : cout << "Graph g2 doesn't contain cycle\n";
//     return 0;
// }

q

