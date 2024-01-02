class Solution {
public:
     int func(int n,vector<int>&dp)
         
     {
         if(n<=1) return 1;
         if(dp[n]!=-1) return dp[n];
//          int left=  func(n-1);
//          int right=func(n-2);
         
         return dp[n]=func(n-1,dp)+func(n-2,dp);
    
         
     }
    
    int climbStairs(int n) {
        
        vector<int>dp(n+1,-1);//memoization
        
        int ans=func(n,dp);
        return ans;
    }
};