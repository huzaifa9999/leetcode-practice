//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    long long s=0;
	    sort(arr,arr+n); long long count=0;
	    for(int i=0;i<n-2;i++)
	    {
	        
	        
	     int l=i+1;int h=n-1;
	     while(l<h)
	     {
	         s=arr[i]+arr[l]+arr[h];
	         if(s<sum)
	        { count+=(h-l);
	            
	            l++;
	        }
	         
	         else{
	             h--;
	         }
	     }
	        
	        
	        
	        
	        
	        
	        
	        
	        
	    }
// 	        for(int l=i+1;l<n-1;l++){   
// 	            int h=n-1;
// 	  s=arr[i]+arr[l]+arr[h];
	  
// 	  while(s>=sum)
// 	  {
// 	      h--;
// 	       s=arr[i]+arr[l]+arr[h];
// 	  }
	  
// 	        while(l<h&&s<sum)
// 	        {
//   count++;
// 	        h--;
// 	        s=arr[i]+arr[l]+arr[h];
	       
	     
// 	  }  
// 	        }
	        
	        
	
	    
	    
	    
	return count;    // Your code goes here
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends