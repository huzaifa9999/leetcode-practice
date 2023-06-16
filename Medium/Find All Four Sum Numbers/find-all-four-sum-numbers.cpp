//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
         sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1])continue;
            
            else
            {
                for(int j=i+1;j<n;j++){
                    if(j>i+1&&nums[j]==nums[j-1])continue;
                else
                {
                    int l=j+1;
                    int h=n-1;
                    while(l<h)
                    {
                        long long  sum = (long long)(nums[i]+(nums[j])+(nums[l])+(nums[h]));
                        if(sum==(long long) (target))
                        {
                            ans.push_back({nums[i],nums[j],nums[l],nums[h]});
                            l++;h--;
                            while(l<h&&nums[h]==nums[h+1])h--;
                            while(l<h&&nums[l]==nums[l-1])l++;
                            
                        }
                        
                        else if(sum>(long long) (target))h--;
                        else l++;
                    }
                }
                }
            }
        }
        return ans;
        
        // Your code goes here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends