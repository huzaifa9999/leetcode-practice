class Solution {
public:
    
    void changecol(vector<vector<int>>& image, int i, int j,int& val, int& color,int& m,int& n)
    {
        if(i<0||i>=m||j<0||j>=n||image[i][j]==color||image[i][j]!=val)
            return ;
        image[i][j]=color;
        changecol(image,i+1,j,val,color,m,n);
        changecol(image,i-1,j,val,color,m,n);
        changecol(image,i,j-1,val,color,m,n);
        changecol(image,i,j+1,val,color,m,n);
    }
        
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        
       int val=image[sr][sc];
        
        changecol(image, sr, sc, val, color, m, n);
        
        return image;
        
        
    }
};