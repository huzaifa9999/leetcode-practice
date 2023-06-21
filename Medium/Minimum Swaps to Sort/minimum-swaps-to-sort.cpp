//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
 int search(vector<int>&v,int key)
 {
     
	            int l=0,h=v.size()-1;
	            
	            while(l<=h)
	            { int mid=l+(h-l)/2;
	                if(key==v[mid])
	                { return mid;
	           break;
	                }
	                else if(v[mid]>key)
	                h=mid-1;
	                else l=mid+1;
	            }
 }
	int minSwaps(vector<int>&nums)
	{ int c=0;
	    // Code here
	    int n=nums.size();
	    
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        v.push_back(nums[i]);
	    } 
	    sort(v.begin(),v.end());
	    
	    
	    for( int i=0;i<n;i++)
	    { 
	        
	        if(nums[i]!=v[i])
	        { 	
	            int index= search(v,nums[i]);
	            swap(nums[i],nums[index]);
	            i--;
 c++;
	            
	        }
	    }
	return c;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends