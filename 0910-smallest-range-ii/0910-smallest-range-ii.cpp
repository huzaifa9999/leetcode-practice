class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        
        sort( nums.begin(), nums.end() );
        int l=nums.size()-1;
        int res=nums[l]-nums[0];
        
        for(int i=0;i<l;i++)
        { int j=i+1;
            int mini=min(nums[j]-k,nums[0]+k);
         int maxi=max(nums[l]-k,nums[i]+k);
         res=min(maxi-mini,res);
        }
        return res;

}};