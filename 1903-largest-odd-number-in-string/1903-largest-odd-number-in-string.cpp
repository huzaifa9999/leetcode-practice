class Solution {
public:
    string largestOddNumber(string num) {
        string ans=""; int first=INT_MAX,last=INT_MIN;
        for(int i=0;i<num.length();i++)
        { int temp=(num[i]-'0');
            if(temp%2!=0) 
            {
                first=min(first,i);
                last=max(last,i);
            }
            
        }
        
        if(first!=INT_MAX)ans=num.substr(0,last+1);
        return ans;
        
        
    }
};