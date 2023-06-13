//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string s)
		{
		   vector<string>ans;
		  // ans.push_back(s);
// 		   int fact =1;
// 		for(int i=1;i<=s.length();i++)
// 		{
// 		    fact*=i;
// 		}
// 		int k=1;
// 		 string str=s;
// 		while(fact--){
		    
		    
		    
		    
// reverse(str.begin(),str.end());
// ans.push_back(str);
// reverse(str.begin(),str.begin()+k);
// ans.push_back(str);
// reverse(str.begin()+k,str.end());
// 		   ans.push_back(str);

// 		}

sort(s.begin(),s.end());
		 do {
      ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    
		sort( ans.begin(), ans.end() );
ans.erase( unique( ans.begin(), ans.end() ), ans.end() );

return ans;
		
		
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends