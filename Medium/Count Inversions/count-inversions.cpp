//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
  long long merge(vector<long long>&arr,long long low,long long high,long long mid)
{

long long left=low;
long long right=mid+1;
vector<long long>temp;
long long c=0;
while(left<=mid&&right<=high)
{
    if(arr[left]<=arr[right])
    {
        temp.push_back(arr[left]);
        left++;
    }
    else
    {
        temp.push_back(arr[right]);
       
        c+=(mid-left+1);
        right++;
    }
}
while(left<=mid)
{
    temp.push_back(arr[left]);
    left++;
}

while(right<=high)
{
    temp.push_back(arr[right]);
    right++;
}
for(long long i=low;i<=high;i++)
{
    arr[i]=temp[i-low];
}
return c;
}

long long mergesort(vector<long long>&arr,long long low,long long high)
{
long long cnt=0;
if(low>=high) return cnt;
long long mid=low+(high-low)/2;

cnt+=mergesort(arr,low,mid); //left half
cnt+=mergesort(arr,mid+1,high) ;//right half
cnt+=merge(arr,low,high,mid);

return cnt;
}
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        
        
    vector<long long> v(n);
    for(long long i=0;i<n;i++)
    {
        v[i]=arr[i];
    }
    // Write your code here.

return mergesort(v,0,n-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends