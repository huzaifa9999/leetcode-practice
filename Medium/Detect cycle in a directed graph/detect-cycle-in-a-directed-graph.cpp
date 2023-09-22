//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    //  bool check(int root, vector<int>adj[],int vis[],int pvis[])
     
    // {
    //  vis[root]=1;
    //  pvis[root]=1;
     
    //  for(auto it: adj[root])
    //  {
    //      if(!vis[it])
    //      {
    //          if(check(it,adj,vis,pvis)==true) return true;
    //      }
    //      else if(pvis[it]==1) return true;
    //  }
     
    //  pvis[root]=0;
    //     return false;
    // }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
    
        
    //     int vis[V]={0};
    //     int pvis[V]={0};
        
    // for(int i=0;i<V;i++)
    // {
    //     if(!vis[i])
    //     {
    //         if(check(i,adj,vis,pvis)==true) return true;
    //     }
    
         
    // }
    //   return false;
    
    vector<int>topo;
    queue<int>q;
    int indegree[V]={0};
    for(int i=0;i<V;i++)
    {
        for(auto it: adj[i])
        {
            indegree[it]++;
        }
    }
    
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0) q.push(i);
    }
    
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it: adj[node])
        {
            indegree[it]--;
            if(indegree[it]==0) q.push(it);        }
    }
    
    if(topo.size()!=V) return true;
    return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends