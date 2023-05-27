class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int size= nums.size()/3;
        unordered_map <int,int>mp;
        vector<int>v;
        
        
        for(auto &it:nums)
        { mp[it]++;
            
        }
        
        for(auto it:mp)
        {
            if((it.second)>size)
                v.push_back(it.first);
        }
        
return v;        
        
    }
};