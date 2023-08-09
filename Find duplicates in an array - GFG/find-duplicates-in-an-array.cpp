//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int>s;
        for(int i=0;i<n;i++)
        {
            s[arr[i]]++;
        }
            vector<int>v;
        if (s.size()==n)
        {v.push_back(-1);
            return v;}
        else
        {
    
    // set<int>::iterator i;
        for(auto i:s)
        {
            if(i.second>1)
            v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        return v;
    }}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends