//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        
        
        int start=0,end=1;int l,h;
        for(int i=1;i<s.length();i++)
        {
            l=i-1;
            h=i;
            while(l>=0 &&h<s.length()&& s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                    
                }
                l--;
                h++;
            }
            
            
              l=i-1;
            h=i+1;
            while(l>=0 &&h<s.length()&& s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                    
                }
                l--;h++;
            }
        }
        
        
    string ans;
    for(int i=start;i<=start+end-1;i++)
    {
        ans+=s[i];    }
        
        return ans;
        // code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends