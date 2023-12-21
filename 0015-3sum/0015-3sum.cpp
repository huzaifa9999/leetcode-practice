class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;int index=0;
        set<vector<int>>set;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            
            if(i>0&&nums[i]==nums[i-1]) continue;
            
            unordered_map<int,int>mp;
            
            for(int j=i+1;j<nums.size();j++)
            { int target=nums[i]+nums[j];
                if(mp.find(-(target))!=mp.end())
                {
                    set.insert({nums[i],nums[j],-(target)});
                
                }
              mp[nums[j]]=j;
            }
        }
        // sort(ans.begin(),ans.end());
        for(auto it:set)
        {
            ans.push_back(it);
        }
        return ans;
        
    }
};