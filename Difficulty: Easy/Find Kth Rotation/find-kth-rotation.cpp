//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  
 
    int findKRotation(vector<int> &arr) {
        // Code Here
        int low=0,high=arr.size()-1;
        
        if(arr[high]>arr[low]) return 0;
        while(low<=high)
        {
            int mid=(low+high)/2;
                if(arr[mid]<arr[mid-1]) 
                return mid;
            else if (arr[mid]<arr[high])
            {
                high=mid-1;
            }
            else
            low=mid+1;
            
            
        }
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends