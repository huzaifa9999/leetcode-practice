//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool check(int a[], int n, int m,int mid)
{ int boys=1;int sum=0;
  for(int i=0;i<n;i++)
{   
    
    if(a[i]>mid) return false;
else
{

if (sum+a[i] > mid) {
  sum = a[i];
  boys++;
}
else sum+=a[i];
}
}
if(boys>m) return false;
 
return true;

}
    
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int m) 
    {
        //code here
        
           int low=1,high=INT_MAX;

if(m>n) return -1;
   while(low<=high)
   {
       int mid= low+(high-low)/2;
       if(check(a,n,m,mid)==true)  high=mid-1;
       else low=mid+1; 

   } 

   return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends