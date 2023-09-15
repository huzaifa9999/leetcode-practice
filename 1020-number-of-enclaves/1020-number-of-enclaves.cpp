class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& vis, int row, int col )
    {
        vis[row][col]=1;
        int rr=grid.size();
        int rc=grid[0].size();
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
    for(int i =0;i<4;i++)
    {
        int cr=dx[i]+row;
        int cc=dy[i]+col;
        if(cr>=0&&cc>=0&&cr<rr&&cc<rc&&vis[cr][cc]==0&&grid[cr][cc]==1)
        {
            dfs(grid,vis,cr,cc);
        }
    }
    
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int r= grid.size();
        int c= grid[0].size();
        vector<vector<int>> vis(r,vector<int>(c,0));
        int one=0;
        for(int i =0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1) one++;
            }
        }
        
        for(int i=0;i<r;i++)
        {
            if(grid[i][0]==1)
                dfs(grid,vis,i,0);
            
            if(grid[i][c-1]==1) 
                dfs(grid,vis,i,c-1);
            
        }
           for(int i=0;i<c;i++)
        {
            if(grid[0][i]==1)
                dfs(grid,vis,0,i);
            
            if(grid[r-1][i]==1) 
                dfs(grid,vis,r-1,i);
            
        }
        int count=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(vis[i][j]==1) count++;
                    
            }
        }
        int ans= one-count;
        
        return ans;
        
    }
};