class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        int l= nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
       while(i<l)
        {
            // if(count(nums.begin(),nums.end(),i)>1)
            if(nums[i]==nums[i+1])
            {
                ans=nums[i];
                break;
            }
           i++;
        }
        return ans;
    }
};