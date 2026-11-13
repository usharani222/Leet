class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color,int startc)
    {
        image[i][j]=color;
        vector<pair<int,int>> p={{-1,0},{0,-1},{1,0},{0,1}};
        for(auto x:p)
        {
            int di=x.first+i;
            int dj=x.second+j;
            if(di>=0&&dj>=0&&di<image.size()&&dj<image[0].size()&&image[di][dj]==startc) dfs(image,di,dj,color,startc);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startc=image[sr][sc];
        if(startc==color) return image;
        dfs(image,sr,sc,color,startc);
        return image;
    }
};