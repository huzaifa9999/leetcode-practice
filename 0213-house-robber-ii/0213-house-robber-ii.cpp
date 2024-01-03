class Solution {
public: 
    
     int func(vector<int>&nums,int n)
    {
       int prev=nums[0]; 
 int prev2;
        for(int i=1;i<n;i++)
        {
        int pick= nums[i];
            
            if(i>1) pick+=prev2;
        int notpick=prev;
        int curi=max(pick,notpick);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>first,second;
        if(n==1) return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0) first.push_back(nums[i]);
            if(i!=nums.size()-1) second.push_back(nums[i]);
        }
        
        int ans1=func(first,first.size());
        int ans2=func(second,second.size());
        return max(ans1,ans2);        
        
    }
    
    
    //tabulation
//         int func(vector<int>&nums,int n)
//     { vector<int>dp(n,-1);
//        dp[0]=nums[0]; 
 
//         for(int i=1;i<n;i++)
//         {
//         int pick= nums[i];
            
//             if(i>1) pick+=dp[i-2];
//         int notpick=dp[i-1];
//         dp[i]=max(pick,notpick);
//         }
//         return dp[n-1];
//     }
    
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>first,second;
//         if(n==1) return nums[0];
//         for(int i=0;i<nums.size();i++)
//         {
//             if(i!=0) first.push_back(nums[i]);
//             if(i!=nums.size()-1) second.push_back(nums[i]);
//         }
        
//         int ans1=func(first,first.size());
//         int ans2=func(second,second.size());
//         return max(ans1,ans2);
        
        
//     }
    
    
    
    //memoization
    
    
    //     int func(vector<int>&nums,int n, vector<int>&dp)
//     {
//         if(n==0) return nums[0];
//         if(n<0) return 0;
        
//         if(dp[n]!=-1) return dp[n];
        
//         int pick= nums[n]+func(nums,n-2,dp);
//         int notpick=func(nums,n-1,dp);
        
//         return dp[n]=max(pick,notpick);
//     }
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>dp(n,-1);
//          vector<int>dp1(n,-1);
//         vector<int>first,second;
//         if(n==1) return nums[0];
//         for(int i=0;i<nums.size();i++)
//         {
//             if(i!=0) first.push_back(nums[i]);
//             if(i!=nums.size()-1) second.push_back(nums[i]);
//         }
        
//         return max(func(first,first.size()-1,dp),func(second,second.size()-1,dp1));
        
        
//     }
    
};