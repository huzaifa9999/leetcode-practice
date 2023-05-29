class Solution {
public:
    int trap(vector<int>& height) {
        
        int l=0,r=height.size()-1;
        int ml=height[l],mr=height[r];
            int res=0;
        while(l<r)
        {
            if(ml<mr)
            {
                l++;
                ml=max(ml,height[l]);
                res+=ml-height[l];
                
            }
        else{
            r--;
            mr=max(mr,height[r]);
            res+=mr-height[r];
        }
        
        }
        
        return res;
        
    }
};