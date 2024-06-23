class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>ans;
        set<vector<int>>s;
        int index=0;
            sort(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        { index=nums[i];
          if(i>0&&nums[i]==nums[i-1]) continue;
         unordered_map<int,int>mp;
         for(int j=i+1;j<nums.size();j++)
         {
             int target=-(nums[i]+nums[j]);
             
             if(mp.find(target)!=mp.end())
             {
                 vector<int>temp={nums[i],nums[j],-(nums[i]+nums[j])};
                 // sort(temp.begin(),temp.end());
                 s.insert(temp);
             }
             mp[nums[j]]=j;
         }

        }
        
        for(auto it:s)
        {
            ans.push_back(it);
        }
        return ans;
        
    }
};