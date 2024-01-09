//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    int check(int mid,int a[],int size)
    {
        
        int stu=1,count=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]>mid) return 1e9;
            if(count+a[i]<=mid)
            {
                count+=a[i];
            }
            else
            {
                stu++;
                count=a[i];
            }
        }
    return stu;
        
    }
    //Function to find minimum number of pages.
    int findPages(int a[], int size, int students) 
    {
        //code here
        if(students>size) return -1;
        int low=1,high=1e9;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int stu=check(mid,a,size);
            if(stu>students) low=mid+1;
            else
            high=mid-1;
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