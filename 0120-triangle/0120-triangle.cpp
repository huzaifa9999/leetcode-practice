class Solution {
public:
    int f(int m ,int n, vector<vector<int>>& triangle,vector<vector<int>>& dp)
    { int size=triangle.size();
        if(m==size-1) return triangle[m][n];
     if(dp[m][n]!=-1) return dp[m][n];
     
     int down = triangle[m][n]+f(m+1,n,triangle,dp);
     int diag= triangle[m][n]+f(m+1,n+1,triangle,dp);
     
     return dp[m][n]=min(down,diag);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int m= triangle.size();
        vector<vector<int>>dp(m,vector<int>(triangle[m-1].size(),-1));
        
        int ans=f(0,0,triangle,dp);
        return ans;
    }
};