class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      //using the floyd hare and turtoise algo

      int fast=0,slow=0,slower=0;

      while(true){
          slow=nums[slow];
          fast=nums[nums[fast]];//going at twice of speed
if(fast==slow)//intersetion point
break;
      }

      while(true){
slower=nums[slower];
slow=nums[slow];
if(slow==slower)
break;
      }
      return slow;
      
        // int ans;
        // int l= nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<l;i++)
        // {
        //     // if(count(nums.begin(),nums.end(),i)>1)
        //     if(nums[i]==nums[i+1])
        //     {
        //         ans=nums[i];
        //         break;
        //     }
        // }
        // return ans;
    }
};