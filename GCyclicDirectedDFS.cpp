/*
using  DFS, DfsActiveInStack element stack
*/
#include <bits/stdc++.h>
using namespace std;
// class tampleting
template <typename T>
class Giraff
{
public:
    // unordered_map<T, list<T>> adjList; // most suitable way, can have any differnet nodes
    //  ->USE FULL IN DISCONNECTED GRAPHS//
    //->Number of nodes given
    vector<vector<T>> adjList; // when nodes are defiened from 0 to n-1
    int size;
    // Resizing vetor//
    Giraff(int n)
    {
        adjList.resize(n);
        size = n;
    }

    void add_edge(T u, T v, bool isDir = 0)
    {
        adjList[u].push_back(v);
        if (isDir == 0)
            adjList[v].push_back(u);
    }

    void display_graph()
    {
        for (int i = 0; i < size; i++)
        {
            cout << endl;
            cout << i << "->";
            for (auto j : adjList[i])
            {
                cout << j << ",";
            }
        }
    }

    bool isycleDFS(int node, unordered_map<int, vector<int>> &adj, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited)
    {

        visited[node] = true;
        dfsVisited[node] = true;

        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                if (isycleDFS(neighbour, adj, visited, dfsVisited))
                {
                    return true;
                }
            }
            else if (dfsVisited[neighbour])
            {
                return true;
            }
        }
        dfsVisited[node] = false;
        return false;
    }

    int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
    {
        unordered_map<int, vector<int>> adj;
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].push_back(v);
        }

        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsVisited;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (isycleDFS(i, adj, visited, dfsVisited))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
};
int main()
{
    cout << "Give the map:";
    cout << "\n Number of nodes: and edges: ";
    int n, m, u, v;
    cin >> n >> m;
    Giraff<int> G1(n);
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        G1.add_edge(u, v);
    }
    G1.display_graph();
}
