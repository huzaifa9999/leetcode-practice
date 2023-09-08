class Solution {
public:
    
    void dfs(int i,vector<int>adj[],int vis[])
    {
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                vis[it]=1;
                dfs(it,adj,vis);
            }
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<int>adj[v];
            int vis [v];
        for(int i=0;i<v;i++)
        {
            vis[i]=0;
        }
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected.size();j++)
        {
            if(isConnected[i][j]==1 &&i!=j)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
            
        }
        
    
        int ans=0;
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
            {ans++;
                dfs(i,adj,vis);
            }
        }
        return ans;
        
    }
};