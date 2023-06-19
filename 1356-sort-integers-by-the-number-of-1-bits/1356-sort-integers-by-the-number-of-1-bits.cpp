class Solution {
public:
    
   static bool compare(int&x,int&y)
    {
        int a=__builtin_popcount(x);
         int b=__builtin_popcount(y);
        
        return (a==b)?x<y:a<b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        
  sort(arr.begin(),arr.end(),compare);
        return arr;
        
        
        
        
    }
};