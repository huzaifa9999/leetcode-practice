class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<pair<int,int>,int>> q;
        int m=grid.size();int n=grid[0].size();
        int fresh=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            { if(grid[i][j]==2)
                q.push({{i,j},0});
             
             if(grid[i][j]==1) fresh++;
            }
        }
        
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
        
        int c=0;
        while(!q.empty())
        {
            int x=q.front().first.first;
            int y=q.front().first.second;
            int time=q.front().second;
            c=max(c,time);
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int newx=x+dx[i];
                    int newy=y+dy[i];
            
            if(newx>=0&&newy>=0&&newx<m&&newy<n&&grid[newx][newy]==1)
            { fresh--;
                grid[newx][newy]=2;
                q.push({{newx,newy},time+1});
            }
            }
            // c++;
            
        }
        
        if(fresh==0) return c;
        else return -1;
        
    }
};