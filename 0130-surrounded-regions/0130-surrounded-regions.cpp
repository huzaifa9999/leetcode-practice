class Solution {
public:
    
    void dfs(vector<vector<char>>& board,int row,int col,vector<vector<int>>& vis)
    {
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
          int n = board.size();
        int m = board[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++)
        {
            int cr=dx[i]+row;
            int cc=dy[i]+col;
            
            if(cc>=0&&cr>=0&&cc<m&&cr<n&&board[cr][cc]=='O'&&vis[cr][cc]==0)
            {
                dfs(board,cr,cc,vis);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int r= board.size();
        int c=board[0].size();
        vector<vector<int>> vis(r,vector<int>(c,0));
        
    for(int i=0;i<r;i++)
    {
        if(board[i][0]=='O'&&!vis[i][0])
        {
            dfs(board,i,0,vis);
        }
        
        if(board[i][c-1]=='O'&&!vis[i][c-1])
        {
            dfs(board,i,c-1,vis);
        }
    }
          for(int i=0;i<c;i++)
    {
        if(board[0][i]=='O'&&!vis[0][i])
        {
            dfs(board,0,i,vis);
        }
        
        if(board[r-1][i]=='O'&&!vis[r-1][i])
        {
            dfs(board,r-1,i,vis);
        }
    }
        
        for(int i=0;i<r;i++)
            {
            for(int j=0;j<c;j++)
            {
                if(vis[i][j]==0) board[i][j]='X';
                else
                    board[i][j]='O';
            }
    
        }
    }
};