class Solution {
public:
     int func(int n,vector<int>&dp)
         
     {
         if(n<=1) return 1;
         if(dp[n]!=-1) return dp[n];
         int left=  func(n-1,dp);
         int right=func(n-2,dp);
         
         return dp[n]=left+right;
    
         
     }
    
    int climbStairs(int n) {
        
        vector<int>dp(n+1,-1);//memoization
        
        int ans=func(n,dp);
        return ans;
    }
};