//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
   static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        
        if(a.second<b.second) return true;
        return false;
        
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
        vector<pair<int,int>>ans(n);
        
        for(int i=0;i<n;i++)
        {
            ans.push_back({start[i],end[i]});
            
        }
        
        sort(ans.begin(),ans.end(),cmp);
        
        int count=0;
        int endtime=0;
        for(int it=0;it<ans.size();it++)
        {
            if(endtime<ans[it].first)
            {
                endtime=ans[it].second;
                count++;
            }
        }
        
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends