class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    { 
        int p=0,r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    if((j-1>=0&&grid[i][j-1]==0)||j-1<0) p++;
                    if((i-1>=0&&grid[i-1][j]==0)||i-1<0) p++;
                    if((j+1<c&&grid[i][j+1]==0)||j+1>=c) p++;
                    if((i+1<r&&grid[i+1][j]==0)||i+1>=r) p++;
                }
            }
        }
        return p;
    }
};