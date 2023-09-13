//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    
    //BFS
    // bool check(int root, vector<int>adj[],int vis[])
    // {
    //      vis[root]=1;
        
    //     queue<pair<int,int>>q;
        
    //     q.push({root,-1});
        
       
        
    //     while(!q.empty())
    //     {
    //         int node= q.front().first;
    //         int level= q.front().second;
    //         q.pop();
    //         for(auto it: adj[node])
    //         {
    //             if(!vis[it])
    //             { vis[it]=1;
    //                 q.push({it,node});
    //             }
    //           else if(level!=it) return true;
                
    //         }
    //     }
        
    // return false;
        
    // }
    
    
    bool dfs(int root,int level,vector<int>adj[],int vis[])
    {
        vis[root]=1;
        
        for(auto it : adj[root])
        {
            if(!vis[it])
            {
                if(dfs(it,root,adj,vis)==true) return true;
            }
            else if(it!=level) return true;
        }
        
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        
        int vis[V]={0};
        
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            if(dfs(i,-1,adj,vis)==true) return true;
        }
    }
        return false;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends