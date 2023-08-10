//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='{'||x[i]=='('||x[i]=='[')
       { s.push(x[i]);}
        else
        {if(s.size()==0) return false;
        
        char ch=s.top();
       s.pop();
        if((ch=='{'&&x[i]=='}')||(ch=='['&&x[i]==']')||(ch=='('&&x[i]==')'))
         continue;
          else
          return false;
        }}
        
      if(s.size()==0) return true;
        return false;
        // Your code here
    
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends