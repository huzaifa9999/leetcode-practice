//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool isallowed(int range,int a[],int M,int n)
    {   int page=0;int count=1;   
      
        for(int i=0;i<n;i++)
        {
            if(a[i]>range)return false;
            
            if(a[i]+page>range)
            {
                page=0;
                count+=1;
                page=a[i];
            }
            else
            {
                page+=a[i];
            }
        } 
        
        if(count>M)
        return false;
        else
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int M) 
    { int h,sum=0; int l=a[0];
    
    if(n<M)return -1;
      for(int i=0;i<n;i++)
      { 
        sum+=a [i];
        // l=min(l,a[i]);
      }
      
     
      int ans=-1;
      h=sum;
      while(l<=h)
      {
         int  mid =l+(h-l)/2;
          
          if(isallowed(mid,a,M,n)==true)
          {
              ans=mid;
              h=mid-1;
          }
          
          else
          l=mid+1;
      }
    
      return ans;
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