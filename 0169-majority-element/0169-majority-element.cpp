class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto &it:nums)
        {
            mp[it]++;
        }
        int s=nums.size()/2;
        int ans;
        for(auto it:mp)
        {
            if(it.second>s)
                 ans=it.first;
        }
        return ans;
    }
};