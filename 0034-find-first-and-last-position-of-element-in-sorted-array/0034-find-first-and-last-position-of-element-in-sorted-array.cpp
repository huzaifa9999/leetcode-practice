class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
   auto it= lower_bound(nums.begin(),nums.end(),target) ;
        auto it2=lower_bound(nums.begin(),nums.end(),target+1);
        
        int index1= it-nums.begin();
        
           int index2= it2-nums.begin()-1;
        if(index1>=nums.size()||nums[index1]!=target)
            return {-1,-1};
        else
            return {index1,index2};
        
    }
};