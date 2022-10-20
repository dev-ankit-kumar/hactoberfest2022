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

    string cycleDetection()
    {
        // Write your code here.
        // adj list made
        /*for (auto i : edges)
        {
            adjList[i[0]].push_back(i[1]);
            adjList[i[1]].push_back(i[0]);
        }*/
        // bfs to detect cycle
        /// visited map
        map<int, bool> visited;
        /// traversal queue
        queue<int> Q;
        /// parent queue
        queue<int> P;
        ///traversal for disconnected graph
        for (auto i : adjList)
        {
            if (!visited[i.first])
            {
                ///pushing elemnt
                Q.push(i.first);
                visited[i.first] = true;
                //pushing parent
                P.push(NULL);

                while (!Q.empty())
                {
                    int temp = Q.front();
                    Q.pop();
                    ///parent of poped element taken
                    int parent = P.front();
                    P.pop();
                    for (auto j : adjList[temp])
                    {
                        if (!visited[j])
                        {
                            Q.push(j);
                            P.push(temp);
                            visited[j] = true;
                        }
                        ///if encountered *visited* adjecent element is not the preant then there must be cycle
                        else if (j != parent)
                            return "Yes";
                    }
                }
            }
        }
        return "No";
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
    cout<<G1.cycleDetection();
}
