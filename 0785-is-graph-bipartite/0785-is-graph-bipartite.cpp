class Solution {
public:
    
    bool bfs(vector<vector<int>>& graph,int root,vector<int>&colour)
    {
        queue<int>q;
        
        colour[root]=0;
     
        q.push(root);
        while(!q.empty())
        {
            int ele=q.front();
            q.pop();
            
            for(auto it:graph[ele])
            {
                if(colour[it]==-1)
                {   
                    colour[it]=!colour[ele];
                    q.push(it);
                    
                }
                else if(colour[it]==colour[ele]) return false;
                
            }
        }
        return true;
        
        
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        
      int v=graph.size();
        
        vector<int>colour(v,-1);
        int col=0;
        for(int i=0;i<v;i++)
        {
            if(colour[i]==-1)
            {
                if(bfs(graph,i,colour)==false) return false;
            }
        }
        return true;
        
        
        
        
        
    }
};