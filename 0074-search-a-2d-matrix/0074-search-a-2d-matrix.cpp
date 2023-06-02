class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int flag=0;
        int index;
        for(int i=0;i<m;i++)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][n-1])
            {
                flag=1;
                 index=i;
                break;
            }
        }
        
        
        if(flag==0)
            return false;
        else{
            int low=0,high=n-1;
            
            while(low<=high)
            {
             int m = low + (high - low) / 2;
                
                if(matrix[index][m]==target)
                    return true ;
                
                else if(matrix[index][m]>target)
                    high=m-1;
                    
                    else
                        low=m+1;
            }
            
            return false;
        }
        
    }
};