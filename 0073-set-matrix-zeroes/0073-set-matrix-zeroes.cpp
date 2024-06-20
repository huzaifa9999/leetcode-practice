class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>>s;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0) s.insert({i,j});
            }
        }
        for(auto it:s)
        {
            int row=it.first;
            int col=it.second;
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][col]=0;
            }
for(int j=0;j<matrix[0].size();j++)
{
    matrix[row][j]=0;
}
        }
        
    }
};