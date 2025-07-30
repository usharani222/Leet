class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color,int n)
    {
        image[i][j]=color;
        if(i>0 && image[i-1][j]==n)  dfs(image,i-1,j,color,n);
        if(i<image.size()-1 && image[i+1][j]==n)   dfs(image,i+1,j,color,n);
        if(j>0 && image[i][j-1]==n) dfs(image,i,j-1,color,n);
        if(j<image[0].size()-1&& image[i][j+1]==n)  dfs(image,i,j+1,color,n);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int n=image[sr][sc];
        if(n==color)    return image;
        dfs(image,sr,sc,color,n);
        return image;
    }
};