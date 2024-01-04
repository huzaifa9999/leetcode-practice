class Solution {
public:
       int f(int m,int n, vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid)
    {   if(m>=0&&n>=0&&obstacleGrid[m][n]==1) return dp[m][n]=0;
        if(m==0&&n==0) return 1;
        if(m<0||n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int left= f(m,n-1,dp,obstacleGrid);
        int up=f(m-1,n,dp,obstacleGrid);
        
        return dp[m][n]= left+up;
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m= obstacleGrid.size();
        int n= obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            { 
                int right=0,left=0;
                if(m>0&&n>0&&obstacleGrid[i][j]==1) dp[i][j]=0;
               else  if(i==0&&j==0) dp[0][0]=1;
               else{
                   if(j>0) left=dp[i][j-1];
                 if (i>0) right=dp[i-1][j];
             
                dp[i][j]=left+right;
                   }
            }
        }
        // int ans=f(m-1,n-1,dp,obstacleGrid);
        return dp[m-1][n-1];
        
    }
};