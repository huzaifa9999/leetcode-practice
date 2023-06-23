// This problem is from spoj named as EKO . This is a simple problem based closly upon allocation of paged . THe gfg problem 

#include <bits/stdc++.h>
using namespace std;

bool isallowed(long long mid,vector<long long>&v,long long n,long long m){
    
     int flag=0;long long diff=0;
	for(long long i=0;i<n;i++)
	{    
		if(v[i]>mid)
		{ flag++;
		 diff+=v[i]-mid;	
		}
	}
	if(flag==0||diff<m)
	return false;
	
	return true;
	
}
int main() {
	
	long long n,m;
	cin>>n>>m;
	vector<long long>v(n);
	
	for(long long i=0;i<n;i++)
	{
		cin>>v[i];
	}
	
	sort(v.begin(),v.end());
	long long l=v[0],h=v[n-1];
	long long ans;
	while(l<=h)
	{
		long long mid=(l+h)/2;
		if(isallowed(mid,v,n,m)==true)
		{  ans=mid;
			l=mid+1;
		}
		
		else
		{
			h=mid-1;
		}
	}
	
	cout<<ans<<endl;
	
	// your code goes here
	return 0;
} 
