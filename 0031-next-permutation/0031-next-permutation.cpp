class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int check=-1;int pvt,p;
    int n= nums.size()-1;
     
        for(int i=n;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                // int temp =nums[i];
                // nums[i]=nums[i-1];
                // nums[i-1]=temp;
                check=i-1;
                break;
            }
        }
        
      if(check>=0)
      {
          int j=n;
          while(j>=0&&nums[j]<=nums[check])
          {  j--;}
          
          int temp=nums[j];
          nums[j]=nums[check];
          nums[check]=temp;
          
      }
        
        reverse(nums.begin()+check+1,nums.end());
        
        for(auto &it:nums)
        {
            cout<<it<<" ";
        }
        
        
        
       
    }
};