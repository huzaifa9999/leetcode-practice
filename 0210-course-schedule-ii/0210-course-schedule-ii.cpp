class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& prerequisites) {

        vector<int>adj[V];
       
    for(auto it : prerequisites)
    {adj[it[1]].push_back(it[0]);}
        
        
      vector<int> indegree(V,0);
        for(int i=0;i<V;i++)
    {
        for(auto it: adj[i])
        {
            indegree[it]++;
        }
    }
         
         queue<int>q;
        vector<int>ans;
          for(int i=0;i<V;i++)
    {
        if(indegree[i]==0) q.push(i);
    }
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it: adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        
        if(ans.size()==V) return ans;
         return {};
    
    }
};