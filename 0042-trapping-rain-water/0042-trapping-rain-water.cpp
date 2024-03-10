class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size()-1;
        
        int maxl=height[left];
        int maxr=height[right];
        int ans=0;
        // for(int i=0;i<he?)
    while(left<=right)
    {
        if(height[left]<=height[right])
        {
            if(height[left]>=maxl)
            {
                maxl=height[left];
                
            }
            else 
            {
                ans+=(maxl-height[left]);
            }
            left++;
        }
        else
        {
            if(height[right]>=maxr)
            {
                maxr=height[right];
            }
            else
            {
                ans+=(maxr-height[right]);
            }
            right--;
        }
    }
        return ans;
    }
};