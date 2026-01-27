class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &grid)
    {
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]=='0') return;
        grid[i][j]='0';
        vector<pair<int,int>> v={{0,-1},{0,1},{1,0},{-1,0}};
        for(auto &d:v)
        {
            dfs(i+d.first,j+d.second,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int ans=0,n=grid.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    dfs(i,j,grid);
                }
            }
        }    
        return ans;
    }
};