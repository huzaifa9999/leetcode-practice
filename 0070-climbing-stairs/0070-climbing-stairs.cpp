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
        
        // vector<int>dp(n+1,-1);//memoization        
        // int ans=func(n,dp); memorizatio
         // return ans; memoirzation
        
        
        
        //tabulation
         vector<int>dp(n+1,-1); //tabultation (base case is defined)
            dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]= dp[i-1]+dp[i-2];
        }
        
        return dp[n];
       
    }
};