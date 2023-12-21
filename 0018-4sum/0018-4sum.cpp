class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            
            for(int j=i+1;j<nums.size();j++)
            {
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                
                int l=j+1,h=nums.size()-1;
                while(l<h)
                {
                if(((long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[h])==(long long)(target))
                {ans.push_back({nums[i],nums[j],nums[l],nums[h]});
                    l++;
                    h--;
                    
                    while(l<h&&nums[h]==nums[h+1]) h--;
                    while(l<h&&nums[l]==nums[l-1]) l++;}
                    
                    else if(((long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[h])>(long long )(target) ) h--;
                    else
                        l++;
            
                    
                }
            }
        }
        return ans;
    }
};