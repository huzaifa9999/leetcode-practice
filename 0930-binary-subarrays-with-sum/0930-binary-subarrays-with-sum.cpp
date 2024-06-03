class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return helper(nums,goal)-helper(nums,goal-1);
    }
    
    int helper(vector<int>& nums, int goal)
    {
        int r=0,l=0,cnt=0,sum=0;
        if(goal<0) return 0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    
    
};