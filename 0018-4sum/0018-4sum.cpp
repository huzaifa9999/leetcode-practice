class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1])continue;
            
            else
            {
                for(int j=i+1;j<n;j++){
                    if(j>i+1&&nums[j]==nums[j-1])continue;
                else
                {
                    int l=j+1;
                    int h=n-1;
                    while(l<h)
                    {
                        long long  sum = (long long)nums[i]+(long long)(nums[j])+(long long)(nums[l])+(long long)(nums[h]);
                        if(sum==(long long) (target))
                        {
                            ans.push_back({nums[i],nums[j],nums[l],nums[h]});
                            l++;h--;
                            while(l<h&&nums[h]==nums[h+1])h--;
                            while(l<h&&nums[l]==nums[l-1])l++;
                            
                        }
                        
                        else if(sum>(long long) (target))h--;
                        else l++;
                    }
                }
                }
            }
        }
        return ans;
    }
};