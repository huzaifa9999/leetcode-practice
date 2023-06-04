class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp =matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }

        int low =0,high=n-1;
        while(low<high)
        {
            for(int i=0;i<n;i++)
            {
                int temp =matrix[i][low];
                matrix[i][low]=matrix[i][high];
                matrix[i][high]=temp;
            }
            low++;
            high--;
        }
        
    }
};