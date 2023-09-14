class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        // vector<vector<int>> ans;
        queue<pair<pair<int,int>,int>>q;
        
         int r=mat.size();
        int c= mat[0].size();
        
       vector<vector<int>> vis(r, vector<int>(c, 0)); 
            vector<vector<int>>ans( r , vector<int> (c, 0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==0)
                { q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else
                {
                    vis[i][j]=0;
                }
            }
        }
        
        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,0};
    
        while(!q.empty())
        {
         int first= q.front().first.first;
            int second= q.front().first.second;
            int level= q.front().second;
            q.pop();
            ans[first][second]=level;
            for(int i=0;i<4;i++)
            {
                int row=first+dx[i];
                int col= second+dy[i];
                
                if(row>=0&&row<r&&col>=0&&col<c&&vis[row][col]==0)
                {
                    vis[row][col]=1;
                    q.push({{row,col},level+1});
                    
                }
                // else
                    
            }
            
            
        }
        
        return ans;
        
      
    }
};