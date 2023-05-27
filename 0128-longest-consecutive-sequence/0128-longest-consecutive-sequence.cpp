class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    map<int,int>mp;    
   
        
        for(auto &it:nums)
   { mp[it]++;
       
   }
     int longest=0;  
for(auto &it:nums)
{
    if(mp.count(it-1)==0)
    {
        int length=0;
        while(mp.count(it+length))
        {
            length++;
        }
        longest=max(longest,length);
    }
}
        
        return longest;
        }
};