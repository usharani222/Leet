class Solution {
public:
    int fun(vector<vector<int>> &v,int m,int n,int i,int j)
    {
        if(i>=m||j>=n) return 0;
        if(v[i][j]==1) return 0;
        if(i==m-1&&j==n-1) return 1;
        int right=fun(v,m,n,i+1,j);
        int down=fun(v,m,n,i,j+1);
        return right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        // return fun(obstacleGrid,m,n,0,0);
        if(obstacleGrid[0][0]==1||obstacleGrid[m-1][n-1]==1) return 0;
        vector<vector<int>> v(m,vector<int>(n));
        v[0][0]=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(obstacleGrid[i][j]==1) v[i][j]=0;
                else
                {
                    if(i>0) v[i][j]+=v[i-1][j];
                    if(j>0) v[i][j]+=v[i][j-1];
                }
            }
        }
        return v[m-1][n-1];
    }
};