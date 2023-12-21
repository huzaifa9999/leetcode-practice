class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high)
        { int mid=(high+low)/2;
            if(nums[low]<=nums[high])
            {ans=min(nums[low],ans);
            break;
            }
        
        if(nums[low]<=nums[mid])
        {
ans=min(ans,nums[low]);
            low=mid+1;
        
        }
         else
         {
                  ans = min(ans, nums[mid]);

            // Eliminate right half:
            high = mid - 1;
         }
        
        }
        return ans;
    }
};