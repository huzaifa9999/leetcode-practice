//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
     bool check(int root, vector<int>adj[],int vis[],int pvis[])
     
    {
     vis[root]=1;
     pvis[root]=1;
     
     for(auto it: adj[root])
     {
         if(!vis[it])
         {
             if(check(it,adj,vis,pvis)==true) return true;
         }
         else if(pvis[it]==1) return true;
     }
     
     pvis[root]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
    
        
        int vis[V]={0};
        int pvis[V]={0};
        
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            if(check(i,adj,vis,pvis)==true) return true;
        }
    
         
    }
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