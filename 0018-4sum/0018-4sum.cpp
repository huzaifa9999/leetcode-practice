class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
 
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            long long int first=nums[i];
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++)
            {
                 if(j>i+1&&nums[j]==nums[j-1])continue;
                long long int second=nums[j];
                int low=j+1;
                int high=nums.size()-1;
                while(low<high)
                {
                    long long int sum=first+second+nums[low]+nums[high];
                    if(target==sum) 
                    {
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        low++;
                        high--;
                        while(low<high&&nums[low]==nums[low-1]) low++;
                        while(low<high&&nums[high]==nums[high+1]) high--;
                    }
                    else if(target>sum)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }          
                }   
            }       
        }
        return ans;
    }
};