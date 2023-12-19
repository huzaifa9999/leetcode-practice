class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
           if(nums[i]<=nums[i+1]) continue;
            else
                count++;
        }
        if(count==0) return true;
        
        else if(count>1) return false;
        
        else if(nums[0]>=nums[nums.size()-1]) return true;
        
        return false;
    }
};