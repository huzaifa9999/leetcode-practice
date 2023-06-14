class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l,h,mid;
        if(nums[0]<=target){
            l=0;
            h=max_element(nums.begin(),nums.end())-nums.begin();
        }
        else
        {
            l=max_element(nums.begin(),nums.end())-nums.begin()+1;
            h=nums.size()-1;
        }
    
    while(l<=h)
    {
        mid=l+(h-l)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>target)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
    
    }
};