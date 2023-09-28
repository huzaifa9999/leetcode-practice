class Solution {
    
	// private:
	// void dfs(int node, vector<int>vis, stack<int> &st,
	//         vector<vector<int>>prerequisites) {
	// 	vis[node] = 1;
	// 	for (auto it : prerequisites[node]) {
	// 		if (!vis[it]) dfs(it, vis, st, prerequisites);
	// 	}
	// 	st.push(node);
	// }
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V=numCourses;
      
        vector<int>indegree(numCourses,0);
        
           vector<vector<int>> adj(V);
        queue<int>q;
        vector<int>ans;
    for(vector<int> edge : prerequisites)
        adj[edge[1]].push_back(edge[0]);
        
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
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it: adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        
        if(ans.size()!=V) return false;
        else return true;
    
    }
};