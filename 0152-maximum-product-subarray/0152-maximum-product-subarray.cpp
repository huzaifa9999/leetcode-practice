class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int p=INT_MIN,n=INT_MIN,prod=1;
       
        for(auto &it:nums)
        {
            prod=prod*it;
            
            p=max(p,prod);
            if(prod==0)
                prod=1;
        }
        
        prod=1;
        reverse(nums.begin(),nums.end());
        
        for(auto &it:nums)
        {
            prod=prod*it;
            
            n=max(n,prod);
            if(prod==0)
                prod=1;
        }
        
        
        
        return max(n,p);
    }
};