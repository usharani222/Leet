class Solution {
public:
    void dfs(vector<vector<int>> &grid,int i,int j)
    {
        grid[i][j]=2;
        vector<pair<int,int>> dirs={{1,0},{-1,0},{0,-1},{0,1}};
        for(auto [di,dj]:dirs)
        {
            int ni=i+di,nj=j+dj;
            if(ni>=0 && ni<grid.size() && nj>=0 && nj<grid[0].size() && grid[ni][nj]==1)
                dfs(grid,ni,nj);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) 
    {
        int n=grid.size(),m=grid[0].size();

        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==1) dfs(grid,i,0);
            if(grid[i][m-1]==1) dfs(grid,i,m-1);
        }    
        for(int j=0;j<m;j++)
        {
            if(grid[0][j]==1) dfs(grid,0,j);
            if(grid[n-1][j]==1) dfs(grid,n-1,j);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1) ans++;
            }
        }
        return ans;
    }
};