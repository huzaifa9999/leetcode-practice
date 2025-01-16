//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isEven(int n) {
        // code here
        int a=n&1?1:0;
        if(a==0) return true;
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        if (ob.isEven(N))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends