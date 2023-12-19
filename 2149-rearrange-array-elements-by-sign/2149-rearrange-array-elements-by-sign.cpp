class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int even=0,odd=1;   
      vector<int>ans(nums.size());
        for(auto &it:nums)
        {
            if(it>0)
            {ans[even]=it;even+=2;}
            else
            { ans[odd]=it,odd+=2;}
        }
        return ans;
        
    }
};