class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) 
    {
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1) grid[i][j]=-1;
            }
        }
        if(grid[m-1][n-1]==-1) return 0;
        if(grid[0][0]==-1) return 0;
        for(int i=n-1;i>=0;i--)
        {
            if(grid[m-1][i]==-1) break;
            grid[m-1][i]=1;
        }
        for(int i=m-1;i>=0;i--)
        {
            if(grid[i][n-1]==-1) break;
            grid[i][n-1]=1;
        }
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                if(grid[i][j]==-1) continue;
                long long down=(grid[i+1][j]==-1)?0:grid[i+1][j];
                long long right=(grid[i][j+1]==-1)?0:grid[i][j+1];
                grid[i][j]=down+right;
            }
        }
        return grid[0][0];
    }
};