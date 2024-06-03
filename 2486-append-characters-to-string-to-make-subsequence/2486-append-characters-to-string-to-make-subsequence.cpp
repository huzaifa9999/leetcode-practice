class Solution {
public:
    int appendCharacters(string s, string t) {
        int c=t.length();
        int k=0;
        for(int i=0;i<s.length();i++)
        {
            if(t[k]==s[i])
            {
                k++;
                c--;
            }
        }
        
        return c;
    }
};