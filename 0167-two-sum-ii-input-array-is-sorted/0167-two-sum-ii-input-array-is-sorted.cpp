class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        int low =0;
        int high=size-1;
        vector<int>v;
        
        
        while(low<=high)
        {
            if(nums[low]+nums[high]==target)
            {
                v.push_back(low+1);
                v.push_back(high+1);
                break;
            }
            else if(nums[low]+nums[high]>target)
                high--;
            
            else
                low++;
        }
                        return v;

        
    }
};