/// SHORTEST PATH BETWEEN TWO GIVEN NODES USING "BFS" THEN "PARENT TRAKING"
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

    ///finding the shortes path between two given nodes
    vector<int> bfsForShortes(map<int, vector<int>> &adjList, int s, int t)
    {
        // for bfs we need
        //->visit map
        map<int, bool> visited;
        //->visit queue
        queue<int> Q;
        //->parent map
        map<int, int> parent;
        // satring bfs
        Q.push(s);
        parent[s] = NULL;
        visited[s] = true;

        while (!Q.empty())
        {
            int temp = Q.front();
            Q.pop();
            for (auto i : adjList[temp])
            {
                if (!visited[i])
                {
                    Q.push(i);
                    visited[i] = true;
                    parent[i] = temp;
                }
                if (i == t)
                    break;
            }
        }
        // creating ans vector to return
        vector<int> ans;
        int at = t;

        /// tracking  parents
        while (at != NULL)
        {
            ans.push_back(at);
            at = parent[at];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
    {
        // Write your code here
        // making a graph
        map<int, vector<int>> adjList;
        for (auto i : edges)
        {
            adjList[i.first].push_back(i.second);
            adjList[i.second].push_back(i.first);
        }

        // now
        return bfsForShortes(adjList, s, t);
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
}
