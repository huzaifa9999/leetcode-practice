class Solution {
public:
    
    bool dfs(int root,vector<int>adj[],vector<int>&vis,vector<int>&path)
    {
        vis[root]=1;
        path[root]=1;
        
        for(auto it:adj[root])
        {
            if(!vis[it])
            {
               if( dfs(it,adj,vis,path)==true) return true;
            }
            else if(path[it]==1) return true;
        }
        path[root]=0;
        
        return false;
        
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int v=numCourses;
        vector<int>adj[v];
        
        for(auto &it:prerequisites)
        {
        adj[it[1]].push_back(it[0]);
        }
        
        
        vector<int>vis(v,0);
        vector<int>path(v,0);
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,adj,vis,path)==true) return false;
            }
        }
                   return true;
        
    }
};