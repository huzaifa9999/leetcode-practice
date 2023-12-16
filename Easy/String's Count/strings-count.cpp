//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int fact(long long int i){
	if (i <= 1) return 1;
  	else return i*fact(i-1);
}
long long int countStr(long long int n){
    //complete the function here

    long long int sum=0;

    // sum+=1;
    // sum+= fact(n)/(fact(n-3)*fact(2));//2c 1b
    // sum+=n;
    // sum+=n;// 1c/b
    // sum+=fact(n)/fact(n-2);//1c+1b
    // sum+=fact(n)/(fact(n-2)*2);//2c
    
    // return sum;
    
         long long int temp1 = ((n * (n - 1)) / 2) * (n - 2); //2c 1b
        long long int temp2 = ((n * (n - 1)) / 2);//2c 0b
        long long int temp3 = n * (n - 1);//1c 1b
        long long int temp4 = n;//1c 0b
        long long int temp5 = n;//0c 1b
        return temp1 + temp2 + temp3 + temp4 + temp5 + 1;//+1 is for 0c 0b
    
}