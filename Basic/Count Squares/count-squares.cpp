//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        
        int c=0,t; int i =1;
        
        if(N==1)
        return 0;
       while(true){
           t=i*i;
            if(t<N)
            {c++;i++;}
            else
            break;
       }
       
       return c;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends