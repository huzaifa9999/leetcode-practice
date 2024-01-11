class Solution {
public:
    
    string pfromcenter( int i,int j,string s)
    {
        while(i>=0&&j<s.length()&&s[i]==s[j])
        {
           
                i--;j++;
            
          
               
        }
        return s.substr(i+1,j-i-1);
    }
    
    string longestPalindrome(string s) {
        
        if(s.length()==0) return "";
        if(s.length()==1) return s;
        // string ans=0;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            string even= pfromcenter(i,i+1,s);
            string odd=pfromcenter(i,i,s);
            
            if(even.length()>ans.length()) ans=even;
            
                    if(odd.length()>ans.length()) ans=odd;
        }
          return ans;          
    }
                   
                  
};