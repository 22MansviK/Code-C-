#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool isCyclicBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
{
    unordered_map<int, int> parent;

    parent[src] == -1
    visited[src] == 1;
    queue<int> q;
    q.push(src);
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // create adjacency list
    unordered_map<int, list<int>> adj;
    for(int i=0; i<m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // to handle disconnected components
    unordered_map<int, bool> visited;
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            bool ans = isCyclicBFS(i, visited, adj);
            if(ans == 1)
            {
                return "Yes";
            }
        }
    }
    return "No";
}

int main()
 {
    int n;
    cout<< "Enter the number of edges"<< endl;
    cin>>n;

    int m;
    cout<<"Enter the number of nodes"<< endl;
    cin>>m;
    graph<int> g;
    for(int i=0; i<m;i++)
    {
        int u, v;
        cin>> u>>v;
        g.addEdge(u,v,1);

    }

    g.printAdjacent(); 

    
    

    return 0;
 }