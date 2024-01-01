class Solution {
public:
    bool check(vector<int>& a,int n,int target)
    {
        
        int low=0,high=n;
        
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(a[mid]==target) return true;
            else if(a[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix[0].size();
        int m=matrix.size();
        if(matrix[0][0]>target||matrix[m-1][n-1]<target) return false;
        bool ans=false;
        for(int i=0;i<m;i++)
        {
            
            if(matrix[i][0]<=target&&matrix[i][n-1]>=target)
             ans= check(matrix[i],n,target);
        }
        return ans;
    }
};