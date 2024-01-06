class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int lastidx=INT_MIN;
        int count=0,ans=1;
        
        if(nums.size()==0) return 0;
            for(int i=0;i<nums.size();i++)
            { if(nums[i]==lastidx) continue;
                if(lastidx!=nums[i]-1)
                {
                    lastidx=nums[i];
                    count=1;
                }
                else if(nums[i]-1==lastidx)
                {
                    count++;
                    lastidx=nums[i];
                }
              ans=max(ans,count);

            }
        return ans;
        
        
    }
};