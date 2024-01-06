class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     
        int m= matrix.size();
        int n=matrix[0].size();
        
        vector<pair<int,int>> cord;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                    cord.push_back({i,j});
            }
        }
        for(auto it:cord)
        { int x=it.first;
         int y=it.second;
         
         
            for(int i=0;i<m;i++)
            {
                matrix[i][y]=0;
            }
          for(int i=0;i<n;i++)
            {
                matrix[x][i]=0;
            }
        }
        
    }
};