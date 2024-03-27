class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;int r=0;
        int maxf=0;
        unordered_map<char,int>mp;
        int ans=0;
        while(r<s.length()&&l<=r)
        {
            mp[s[r]]++;
            maxf=max(maxf,mp[s[r]]);
            
            if((r-l+1)-maxf>k)
            {
                mp[s[l]]--;
                l++;
            }
            else
            {
                ans=max(ans,r-l+1);
                
            }
        r++;
        }
        return ans;
    }
};