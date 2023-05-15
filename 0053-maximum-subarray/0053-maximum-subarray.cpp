class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int size= nums.size();
        int sum=0;
        int pointer=nums[0];

        for(auto &it: nums)
        {
sum+=it;
pointer=max(pointer,sum);
if(sum<0)
    sum=0;
        }
    return pointer;
    }
};