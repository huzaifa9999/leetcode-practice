//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{ int count(int m)
{
    int ans=0;
    while(m>0)
    {
        ans+=m/5;
        m/=5;
    }
    return ans;
    
}
    public:
        int findNum(int n)
        {
            
    int l=0,h=n*5;
    int ans;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        
        int res= count(mid);
        
        if(res>=n){h=mid-1;
            ans=mid;
        }
        
        else l=mid+1;
    }
            return ans;
        //complete the function here
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends