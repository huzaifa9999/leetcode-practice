class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size();
        int c= grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        int fresh =0;
        int vis[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==2)
                {  q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else 
                    vis[i][j]=0;
                
                       if(grid[i][j]==1) fresh++;
            }
         
        }
        
        int ans=0;
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        int count=0;
        while(!q.empty())
        {

        int row=q.front().first.first;
            int col=q.front().first.second;
            int t= q.front().second;
            q.pop();
            ans=max(ans,t);   
            for(int i=0;i<4;i++)
            {
                int crow=row+drow[i];
                int ccol=col+dcol[i];
                if(crow>=0&&crow<r&&ccol>=0&&ccol<c&&grid[crow][ccol]==1&&vis[crow][ccol]!=2)
                { count++;
                    vis[crow][ccol]=2;
                    q.push({{crow,ccol},t+1});
                    
                }
            }
            }
        
        if(count==fresh) return ans;
        else return -1;
    }
};