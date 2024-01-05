class Solution {
public:
//     int f(int row,int col,int m,vector<vector<int>>& matrix,vector<vector<int>>&dp)
//     { 
     
//         if(row==0) return matrix[0][col];
//         if(col<0||col>=m) return 1e9;
//         if(dp[row][col]!=-1) return dp[row][col];
//      int rd=matrix[row][col]+ f(row-1,col+1,m,matrix,dp);
//      int ld=matrix[row][col]+f(row-1,col-1,m,matrix,dp);
//      int up=matrix[row][col]+f(row-1,col,m,matrix,dp);
     
//      return dp[row][col]=min(ld,min(rd,up));
     
//     }
    
 int minFallingPathSum(vector<vector<int>> &matrix)
{

    int size = matrix.size();
    int ans = 1e9;
    vector<vector<int>> dp(size, vector<int>(size, 0));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0)
            {
                dp[i][j] = matrix[i][j];
                continue;
            }
            if (i > 0)
            {
                int rd = 0, ld = 0, up = 0;
                rd = matrix[i][j];
                if (j < size - 1)
                    rd += dp[i - 1][j + 1];
                else
                    rd += 1e9;
                up = matrix[i][j] + dp[i - 1][j];
                ld = matrix[i][j];
                if (j > 0)
                    ld += dp[i - 1][j - 1];
                else
                    ld += 1e9;

                dp[i][j] = min(up, min(ld, rd));
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        ans = min(ans, dp[size - 1][i]);
    }

    return ans;
}
};