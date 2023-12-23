class Solution {

    
    public:
    int check(vector<int>&nums,int mid)
    {
        int sum=0;
        for(auto &it:nums)
        {
            sum+=ceil((double)(it)/(double)(mid));
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
    
    int high=*max_element(nums.begin(),nums.end());
        int low=1;
        while(low<=high)
        {
            int mid =(low+high)/2;
            
            int res= check(nums,mid);
            
            if(res<=threshold) high=mid-1;
            else
                low=mid+1;
            
        }
    return low;
    }
};