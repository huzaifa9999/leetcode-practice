//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
       int it= lower_bound(arr,arr+n,x)-arr ;
        int it2=lower_bound(arr,arr+n,x+1)-arr-1;
        
        // int index1= it-0;
        
        //   int index2= it2-0-1;
        if(it>=n||arr[it]!=x)
            return {-1,-1};
        else
            return {it,it2};
    
    
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends