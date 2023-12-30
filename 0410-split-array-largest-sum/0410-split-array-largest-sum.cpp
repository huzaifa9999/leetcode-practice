class Solution {
public:
    
    bool check(vector<int>& nums, int k,int mid)
    { int part=1,sum=0;
        
        for(auto it:nums)
        { 
            if(it>mid) return false;
            sum+=it;
         if(sum>mid) 
         {
             part++;
             sum=it;
             
         }
            
        }
     
     
     if(part>k) return false;
     return true;
    }
    
    int splitArray(vector<int>& nums, int k) {
        
        
        int low=*min_element(nums.begin(),nums.end()),high=INT_MAX;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(check(nums,k,mid)==true) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};