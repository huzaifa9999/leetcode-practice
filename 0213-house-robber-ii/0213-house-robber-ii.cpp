class Solution {
public:
    
    int func(vector<int>&nums,int n, vector<int>&dp)
    {
        if(n==0) return nums[0];
        if(n<0) return 0;
        
        if(dp[n]!=-1) return dp[n];
        
        int pick= nums[n]+func(nums,n-2,dp);
        int notpick=func(nums,n-1,dp);
        
        return dp[n]=max(pick,notpick);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
         vector<int>dp1(n,-1);
        vector<int>first,second;
        if(n==1) return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0) first.push_back(nums[i]);
            if(i!=nums.size()-1) second.push_back(nums[i]);
        }
        
        return max(func(first,first.size()-1,dp),func(second,second.size()-1,dp1));
        
        
    }
};