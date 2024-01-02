class Solution {
public:
    int func(vector<int>& nums,int n,vector<int>&dp)
    {
        if(n<0) return 0;
        if(n==0) return nums[0];
        if(dp[n]!=-1) return dp[n];
       int pick=nums[n]+func(nums,n-2,dp);
       int notpick=0+func(nums,n-1,dp);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        // int ans=func(nums,n-1,dp);
        dp[0]=nums[0];
        for(int i=1;i<n;i++)
        { 
            int pick=nums[i];
            if(i>1) pick+=dp[i-2];
        int notpick=dp[i-1];
            
            dp[i]=max(pick,notpick);
        }
        return dp[n-1];
        
        
    }
};