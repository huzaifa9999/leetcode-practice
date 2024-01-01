class Solution {
public:
    string reverseWords(string s) {

        string ans="";string temp="";
        s+=" ";
        for(int i=0;i<s.length();i++)
        {
            
        if(s[i]!=' ') temp+=s[i];
            else
            {
                if(temp!="")
                {
                    ans+=temp+" ";
                    temp="";
                }
            }
        }
        // ans.substr(1);
        ans=" "+ans;
        reverse(ans.begin(),ans.end());
        
        int index=0;
        for(int i=0;i<ans.length();i++)
        {
if(ans[i]==' ')
{reverse(ans.begin()+index,ans.begin()+i);

index=i+1;}
        }
    
        return ans.substr(1,ans.length()-2);
        
    }
};