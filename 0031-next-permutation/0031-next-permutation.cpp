class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int check=-1;
    int n= nums.size()-1;
     
        for(int i=n;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
              
                check=i-1;
                break;
            }
        }
        
      if(check>=0)
      {
          int j=n;
          while(j>=0&&nums[j]<=nums[check])
          {  j--;}
          
          swap(nums[j],nums[check]);
          
      }
        
        reverse(nums.begin()+check+1,nums.end());
        
     return;
        
        
        
       
    }
};