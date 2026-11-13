class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        grid[i][j]='2';
        // if(i>0&&grid[i-1][j]=='1') dfs(grid,i-1,j);
        // if(j>0&&grid[i][j-1]=='1') dfs(grid,i,j-1);
        // if(i<grid.size()-1&&grid[i+1][j]=='1') dfs(grid,i+1,j);
        // if(j<grid[0].size()-1&&grid[i][j+1]=='1') dfs(grid,i,j+1);
        vector<pair<int,int>> p={{-1,0},{0,1},{0,-1},{1,0}};
        for(auto x:p)
        {
            int pi=x.first+i;
            int pj=x.second+j;
            if(pi>=0 && pj>=0 && pi<grid.size() && pj<grid[0].size() && grid[pi][pj]=='1') dfs(grid,pi,pj);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    dfs(grid,i,j);                    
                }
            }
        }
        return ans;
    }
};