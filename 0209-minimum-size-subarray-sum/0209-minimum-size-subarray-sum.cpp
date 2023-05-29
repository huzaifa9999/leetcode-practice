class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
int l=0,r=0;
        int total=0,ans=INT_MAX;
 
for(int r=0;r<nums.size();r++)
    {
        total+=nums[r];
    while(total>=target)
    {
        ans=min(r-l+1,ans);
        total-=nums[l];
        l++;
    }
        
    }
        if(ans==INT_MAX)
           return 0;
           else
        return ans;
    
    }
};