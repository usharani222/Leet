class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int &count)
    {
        grid[i][j]=2;
        count++;
        vector<pair<int,int>> p={{-1,0},{0,-1},{1,0},{0,1}};
        for(auto [x,y]:p)
        {
            int di=x+i,dj=y+j;
            if(di>=0 && dj>=0 && di<grid.size() && dj<grid[0].size() && grid[di][dj]==1) dfs(grid,di,dj,count);
        }
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