#include <bits/stdc++.h>
using namespace std;
// class tampleting
template <typename T>
class Giraff
{
public:
    unordered_map<T, list<T>> adjList; // most suitable way, can have any differnet nodes
    // vector<vector<T>> adjList(n);// when nodes are defiened from 0 to n
    void add_edge(T u, T v, bool isDir = 0)
    {
        adjList[u].push_back(v);
        if (isDir == 0)
            adjList[v].push_back(u);
    }

    void display_graph()
    {
        for (auto i : adjList)
        {
            cout << endl;
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
        }
    }
    void dfsForTopology(int i, unordered_map<int, vector<int>> &adj, stack<int> &ans, vector<bool> &visited)
    {
        visited[i] = true;

        for (auto j : adj[i])
        {
            if (!visited[j])
                dfs(j, adj, ans, visited);
        }
        ans.push(i);
    }
    vector<int> topologicalSort(int v)
    {
        // Write your code here
        // create the graph
        /*unordered_map<int, vector<int>> adjList;
        for (auto i : edges)
        {
            adjList[i[0]].push_back(i[1]);
        }
        */
        // creating ans vector
        stack<int> ans;
        // dfs
        /// dfs visit map
        vector<bool> visited(v, false);

        // for(auto i:adjList){
        // for a directed graph, start from 0th element always
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                dfs(i, adjList, ans, visited);
            }
        }
        vector<int> ret;
        while (!ans.empty())
        {
            ret.push_back(ans.top());
            ans.pop();
        }
        return ret;
    }
};
int main()
{
    Giraff<int> G1;
    cout << "Give the map:";
    cout << "\n Number of nodes: ";
    int n, u, v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        G1.add_edge(u, v);
    }
    G1.display_graph();
    
}
