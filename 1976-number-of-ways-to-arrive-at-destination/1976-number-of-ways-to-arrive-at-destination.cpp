// class Solution {
// public:
//     int countPaths(int n, vector<vector<int>>& roads) {
//         vector<pair<int,int>>adj[n];
//         for(auto it:roads)
//         {
//             adj[it[0]].push_back({it[1],it[2]});
//             adj[it[1]].push_back({it[0],it[2]});
//         }
 
        
//         // src, distance
//         priority_queue<pair<int,long long>,vector<pair<int,long long>>,greater<pair<int,long long>>> q;
//         vector<long long>dist(n,1e18);
//            vector<int>ans(n,0);
//         ans[0]=1;
//         dist[0]=0;
//         q.push({0,0});
        
//         while(!q.empty())
//         {
//             auto f= q.top();
//             int node=f.first;
//            int d= f.second;
//             q.pop();
//             for(auto it : adj[node])
//             { int adjnode=it.first;
//              long long adjdist=it.second;
//                 if(dist[adjnode]>d+adjdist)
//                 {
//                     dist[adjnode]=d+adjdist;
//                     q.push({adjnode,d+adjdist});
//                     ans[adjnode]=ans[node];
                    
//                 }
//                 else if(dist[adjnode]==d+adjdist) 
//                 {ans[adjnode]=(ans[adjnode]+ans[node])%(int)(1000000007);
    
//                  }
//             }
            
//         }
//     ans[n-1]%=(int)(1000000007);
//         return ans[n-1];
//     }
// };


class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>>adj[n];
        for(int i=0;i<roads.size();i++)
        {
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        vector<long long>distance(n,1e15);
        vector<int>ways(n,0);

        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>pq;

        ways[0]=1;
        distance[0]=0;
        pq.push({0,0});

        while(!pq.empty())
        {
            int node=pq.top().second;
            long long dis=pq.top().first;
            pq.pop();
            for(auto it:adj[node])
            {
                int adjNode=it.first;
                long long edgeWght=it.second;

                //New Entry
                if(dis+edgeWght<distance[adjNode])
                {
                    ways[adjNode]=ways[node];
                    distance[adjNode]=dis+edgeWght;
                    pq.push({dis+edgeWght,adjNode});

                }
                else if(dis+edgeWght==distance[adjNode])
                {
                    ways[adjNode]=(ways[adjNode]+ways[node])%((int)1e9+7);
                }
            }
        }
        return ways[n-1]%((int)1e9+7);

        
    }
};