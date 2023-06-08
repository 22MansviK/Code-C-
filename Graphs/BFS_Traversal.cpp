#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<vector>
using namespace std;

class graph
{
    public:
    unordered_map<int, list<int>> adj;

    

    
};

void bfs(unordered_map<int , list<int> > &adjList, unordered_map<int, bool> visited, vector<int> ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] == 1;
    while(!q.empty())
    {
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);
        
        for(auto i:adjList[frontnode])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] == 1;
            }
        }
    }
}
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int , list<int> > adjList;
        vector<int> ans;
        unordered_map<int, bool> visited
        
        for(int i=0; i<V; i++)
        {
            if(!visited[i])
            {
                bfs(adjList, visited, ans, i);
            }
        }
        return ans;
        
    }
};