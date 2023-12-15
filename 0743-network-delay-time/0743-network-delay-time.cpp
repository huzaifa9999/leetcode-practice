class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
     vector<pair<int,int>>adj[n+1];
        
        for(auto it: times)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        
        vector<int> time(n+1,1e9);
        time[k]=0;
        time[0]=0;
    //node, time
        pq.push({k,0});
        
        while(!pq.empty())
        {
            int node= pq.top().first;
            int t= pq.top().second;
            pq.pop();
            for(auto it: adj[node])
            {
                int adjnode=it.first;
                int adjtime=it.second;
                
                if(time[adjnode]>adjtime+t)
                {
                    time[adjnode]=adjtime+t;
                    pq.push({adjnode,time[adjnode]});
                }
            }
            
        }
        
        for(auto &it: time)
        {
            if(it==1e9) return -1;
            
        }
        sort(time.begin(),time.end());
        return time[n];
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         vector<pair<int,int>> adj[n+1];
        
//         for(auto it :times)
//         {
//             adj[it[0]].push_back({it[1],it[2]});
//         }
        
        
//         vector<int>tem(n+1, 1e9);
        
//         priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
//         tem[k]=0;
        
//         pq.push({0,k});
        
//         while(!pq.empty())
//         {
//             int dist= pq.top().first;
//             int node = pq.top().second;
//             pq.pop();
            
//             for(auto it: adj[node])
//             {
//                 int adjnode= it.first;
//                 int time = it.second;
//                 if(dist+time<tem[adjnode])
//                 {
//                     tem[adjnode]=dist+time;
//                     pq.push({tem[adjnode],adjnode});
//                 }
//             }
        
//         }
        
//       sort(tem.begin(),tem.end());
//         int ans= tem[n-1];
//         if(ans==1e9)return -1;
//         return ans;
        
        
        
        
    }
};