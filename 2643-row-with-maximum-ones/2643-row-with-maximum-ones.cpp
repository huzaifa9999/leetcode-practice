class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int index,count=INT_MIN;
        
        for(int i=0;i<m;i++)
        { int c=0;
            for (int j=0;j<n;j++){
                if(mat[i][j]==1)
                    c++;
            }
            
            if(c>count)
            {
                count=c;
                index=i;
            }
            
        }
        
        // vector<int>v;
        // v.push_back(index);
        //  v.push_back(count);
        
        return {index,count};
    }
};