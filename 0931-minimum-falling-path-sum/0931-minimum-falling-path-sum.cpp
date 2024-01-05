class Solution {
public:    
 int minFallingPathSum(vector<vector<int>> &matrix)
{

    int size = matrix.size();
    int ans = 1e9;
    // vector<vector<int>> dp(size, vector<int>(size, 0));
     int n=matrix.size();
     vector<int>prev(n,0);
vector<int> temp(n,0);
      for (int j = 0; j < n; j++) {
            prev[j] = matrix[0][j];
        }
     
    for (int i = 1; i < size; i++)
    { 
        for (int j = 0; j < size; j++)
        {
                int rd = 0, ld = 0, up = 0;
                rd = matrix[i][j];
                if (j < size - 1)
                    rd += prev[j + 1];
                else
                    rd += 1e9;
                up = matrix[i][j] + prev[j];
                ld = matrix[i][j];
                if (j > 0)
                    ld += prev[j - 1];
                else
                    ld += 1e9;

                temp[j] = min(up, min(ld, rd));

            
        }
                            prev=temp;  
 
    }
    for (int i = 0; i < size; i++)
    {
        ans = min(ans, prev[i]);
    }

    return ans;
}
};