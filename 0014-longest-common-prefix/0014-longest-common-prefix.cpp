class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string ans="";
        sort(strs.begin(),strs.end());
        
        
        // int mini=min(strs[0].length(),strs[strs.size()-1].length());
        
     string first=strs[0],last=strs[strs.size()-1];
        
        int mini=min(first.size(),last.size());
        for(int i=0;i<mini;i++)
        {
            if(first[i]!=last[i]) return ans;
            ans+=first[i];
        }
    return ans;
    }
};