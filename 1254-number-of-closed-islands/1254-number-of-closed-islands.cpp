class Solution {
public:
    bool dfs(vector<vector<int>>& grid,int i,int j)
    {
        int n=grid.size(),m=grid[0].size();
        if(i<0||j<0||i>n-1||j>m-1) return false;
        if(grid[i][j]==1||grid[i][j]==2) return true;
        grid[i][j]=2;
        int up=dfs(grid,i-1,j);
        int left=dfs(grid,i,j-1);
        int down=dfs(grid,i+1,j);
        int right=dfs(grid,i,j+1);
        return up && left && down && right;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                    if(dfs(grid,i,j)==true) ans++;
                }
            }
        }
        return ans;
    }
};