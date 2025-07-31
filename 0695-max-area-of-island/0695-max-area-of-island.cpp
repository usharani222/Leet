class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int &count)
    {
        grid[i][j]=2;
        count++;
        if(i>0&&grid[i-1][j]==1)    dfs(grid,i-1,j,count);
        if(i<grid.size()-1&&grid[i+1][j]==1)    dfs(grid,i+1,j,count);
        if(j>0&&grid[i][j-1]==1)    dfs(grid,i,j-1,count);
        if(j<grid[0].size()-1&&grid[i][j+1]==1) dfs(grid,i,j+1,count);
        return;   
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                int c=0;
                if(grid[i][j]==1)
                {
                    dfs(grid,i,j,c);
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};