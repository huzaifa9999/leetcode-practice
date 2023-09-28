class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int n= graph.size();
        
        vector<int>out(n,0);
        vector<int>ans;
        
    vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
        for(auto x:graph[i])
        {adj[x].push_back(i);
            out[i]++;
        }   }
        
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(out[i]==0) q.push(i);
        }
        while(!q.empty())
        {

        int node=q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it:adj[node])
            {
                out[it]--;
                if(out[it]==0) q.push(it);
            }
            }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};
