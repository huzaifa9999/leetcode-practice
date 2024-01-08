class Solution {
public:
    
    void helper(vector<vector<int>>&res,vector<int>&temp,vector<int>& nums,int target,int index)
{ if(index==nums.size())
{
    if(target==0)
    {
        res.push_back(temp);
    
    }
        return;
}
    //pick
    if(nums[index]<=target)
    {
        temp.push_back(nums[index]);
        helper(res,temp,nums,target-nums[index],index);
    temp.pop_back();
    }
    //not pick
    helper(res,temp,nums,target,index+1);
    
    
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        
        vector<vector<int>>res;
       vector<int>temp;
        
        helper(res,temp,candidates,target,0);
    
        return res;
    }
};