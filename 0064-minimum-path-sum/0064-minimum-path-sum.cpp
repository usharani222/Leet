class Solution {
public:
    int fun(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        if(i<0||j<0) return INT_MAX;
        if(i==0&&j==0) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid[i][j]+min(fun(i-1,j,grid,dp),fun(i,j-1,grid,dp));
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,grid,dp);    
    }
};