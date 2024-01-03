class Solution {
public:
    int func(vector<int>& nums,int n,vector<int>&dp)
    {
   if(n<0) return 0;
        if(n ==0) nums[0];
        if(dp[n]!=-1) return dp[n];
        int pick= nums[n]+ func(nums,n-2,dp);
            int notpick=func(nums,n-1,dp);
        
        return dp[n]=max(pick,notpick);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
  int ans=func(nums,n-1,dp);
        return ans;
        
    }
};