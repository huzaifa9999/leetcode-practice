class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
        
        int row= heights.size();
        int col= heights[0].size();
        vector<vector<int>> dist(row,vector<int>(col,1e9));
    
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    dist[0][0]=0;
        pq.push({0,{0,0}});
        
        while(!pq.empty())
        {
            auto it = pq.top();
            
            int diff= it.first;
            int r= it.second.first;
            int c= it.second.second;
            pq.pop();
            
            if(r==row-1&&c==col-1) return diff;
            
            for(int i=0;i<4;i++)
            {
                int rr = dx[i]+r;
                int cc= dy[i]+c;
                if(rr>=0&&rr<row&&cc>=0&&cc<col)
                {
                    int newdiff= max(abs(heights[rr][cc]- heights[r][c]), diff);
                    
                    if(newdiff<dist[rr][cc])
                    {dist[rr][cc]= newdiff;
                        
                        pq.push({dist[rr][cc],{rr,cc}});
                    }
                    
                } 
            }
                
        }
    return 0;}
};