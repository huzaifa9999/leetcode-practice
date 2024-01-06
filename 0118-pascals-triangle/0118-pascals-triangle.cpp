class Solution {
public:
    vector<vector<int>> generate(int numrows) {
   
        vector<vector<int>>ans(numrows);
        ans[0].push_back(1);
        for(int i=1;i<numrows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i) ans[i].push_back(1);
                else{
                    ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
        }
        return ans;
    }
        
};