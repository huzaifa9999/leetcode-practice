class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int size= nums.size();
        unordered_map <int,int>mp;
        vector<int>v;
        
        size=size/3;
        
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