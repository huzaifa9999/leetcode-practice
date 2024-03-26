class Solution {
public:
    int lengthOfLongestSubstring(string str) {
  int l=0;
        int r=0;
        int n=str.length();
        set<char>s;
        int ans=0;
        
        while(r<n)
        {
           
            if(s.find(str[r])==s.end())
            {
                 ans=max(r-l+1,ans);
                s.insert(str[r]);
                r++;
                
            }
            
            else
            {
                while(s.find(str[r])!=s.end())
                {
                    s.erase(str[l++]);
                }
                ans=max(ans,r-l+1);
                // r++;
            }
        }
        return ans;
    
    }
};
    