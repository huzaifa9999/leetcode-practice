class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
        
        for(auto it:flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        
        queue<pair<int,pair<int,int>>> q;
        q.push({src,{0,0}});
        
        vector<int>dist(n,1e9);
        
        while(!q.empty())
        {
    auto it = q.front();
            int node= it.first;
            int dis= it.second.first;
            int stop = it.second.second;
            q.pop();
            if(stop>k) continue;
            for(auto it: adj[node])
            {
int adjnode= it.first;
                int wt= it.second;
            if(dis+wt<dist[adjnode])
            {
                dist[adjnode]= dis+wt;
                q.push({adjnode,{dist[adjnode],stop+1}});
            }
            }
        }
        if(dist[dst]==1e9) return -1;
        else return dist[dst];
    }
};