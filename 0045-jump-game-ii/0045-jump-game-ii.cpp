class Solution {
public:
    int jump(vector<int>& nums) {
        int size=nums.size();
        
        int maxi=0;
        int maxrange=0;
        int jump=0;
        if(size>1){
        for(int i=0;i<size;i++)
        {
maxi=max(maxi,i+nums[i]);
            if(i==maxrange)
            {
                maxrange=maxi;
                jump++;
            }
            
            if(maxrange>=size-1 )
            {
                
             
                break;
            }
            
        
        }}
         return jump;  
    }
};