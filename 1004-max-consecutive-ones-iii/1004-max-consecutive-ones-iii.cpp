class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int c=0;
        int l=0,r=0;
        int ans=0;
        int n= nums.size();
        while(r<n)
        { if(nums[r]==1)
        { ans=max(ans,r-l+1);
            r++;
           
            
        }
           else if(nums[r]==0&&c<k)
            {
                c++;
                ans=max(ans,r-l+1);
                r++;
            }
            
            else 
            {
                while(c==k)
                {
                    if(nums[l]==0) c--;
                    l++;
                }
               
            }
        }
        return ans;
    }
};