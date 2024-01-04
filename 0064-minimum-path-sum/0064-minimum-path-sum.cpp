class Solution {
public:
//     int f(int m,int n, vector<vector<int>>& grid,vector<vector<int>>& dp)
//     {
//         if(m==0&&n==0) return grid[0][0];
//         if(m<0||n<0) return 1e9;
//         if(dp[m][n]!=-1)  return dp[m][n];
//         int left= grid[m][n]+f(m,n-1,grid,dp);
//             int up=grid[m][n]+f(m-1,n,grid,dp);
        
//         return dp[m][n]=min(up,left);
//     }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
     vector<int>prev(n,0);
        
        for(int i=0;i<m;i++)
        { vector<int>curi(n,0);
            for(int j=0;j<n;j++)
            {
                if(i==0&&j==0) 
                {curi[j]= grid[0][0];continue;}
                int left=0,up=0;
              up=grid[i][j] ; if(i>0) up+=prev[j]; else up+=1e9;
            left=grid[i][j]  ;  if(j>0) left+=curi[j-1]; else left+=1e9;
                
                
                curi[j]=min(left,up);
            }
         prev=curi;
        }
        // int ans= f(m-1,n-1,grid,dp);
    return prev[n-1];
    }
};