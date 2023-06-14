//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> a, int n) {
        // code here
        // vector<int>v;
        int r,m=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(a[i+1]-a[i]==0)
            {r=a[i];
      break;}
            
            
            
        }
        
        if((*min_element (a.begin(),a.end()))>1)
       
        return {r,1};
        else{
        for(int i=0;i<n;i++)
        {
        
        if(a[i+1]-a[i]>1)
           { m=a[i];
               break;
           }
            
            
            
        }}
        if(m==0)
        m=*max_element (a.begin(),a.end());
        
        return {r,m+1};
            
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends