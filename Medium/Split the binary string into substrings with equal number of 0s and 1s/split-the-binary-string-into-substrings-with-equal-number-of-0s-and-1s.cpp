//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int c=0,ans=0;
        for(int i=0;i<str.length();i++){
            char t=str[i];
            if(t=='1')
            c++;
            else
            c--;
            if(c==0)
            ans++;
        }
        
        if(ans==0||c!=0)
        return -1;
        else return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends