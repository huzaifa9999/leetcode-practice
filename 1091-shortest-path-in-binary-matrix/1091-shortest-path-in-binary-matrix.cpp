class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
       int size=grid.size();
        
        vector<vector<int>>dist(size, vector<int>(size,1e9));
        queue<pair<int,pair<int,int>>> q;
        dist[0][0]=0;
        
        if(grid[0][0]==1||grid[size-1][size-1]==1) return -1;
        
        if(size==1&&grid[0][0]==0) return 1;
        q.push({1,{0,0}});
        int dx[]={0,1,0,-1,1,-1,-1,1};
        int dy[]={1,0,-1,0,1,-1,1,-1};
        while(!q.empty())
        {
            int dis= q.front().first;
            int r= q.front().second.first;
            int c= q.front().second.second;
            q.pop();
            for(int i=0;i<8;i++)
            {
                int rr= dx[i]+r;
                int cc= dy[i]+c;
                if(rr>=0&&cc>=0&&rr<size&&cc<size&& grid[rr][cc]==0&& dis+1<dist[rr][cc])
                {
                     dist[rr][cc]= 1+dis;
                    if(rr==size-1&&cc==size-1) return dis+1;
                   
                    q.push({1+dis,{rr,cc}});
                }
                
            }
            
        }
        return -1;
        
        
    }
};