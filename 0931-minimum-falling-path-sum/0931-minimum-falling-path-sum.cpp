class Solution {
public:
    // int fun(vector<vector<int>>& matrix,int i,int j,int n,vector<vector<int>> dp)
    // {
    //     if(i<0||j<0||i>=n||j>=n) return INT_MAX;
    //     if(i==n-1) return matrix[i][j];
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int mini=INT_MIN;        
    //     int down=fun(matrix,i+1,j,n,dp);
    //     int dleft=INT_MAX;
    //     if(j>0) dleft=fun(matrix,i+1,j-1,n,dp);
    //     int dright=fun(matrix,i+1,j+1,n,dp);
    //     return dp[i][j]=matrix[i][j]+min({down,dleft,dright});
    // }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        long long ans=INT_MAX;
        vector<vector<long long>> dp(n,vector<long long> (n,0));
        for(int i=0;i<n;i++) dp[n-1][i]=matrix[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
           for(int j=0;j<n;j++)
           {
                int down=dp[i+1][j];
                int dleft=INT_MAX;
                if(j>0) dleft=dp[i+1][j-1];
                int dright=INT_MAX;
                if(j<n-1) dright=dp[i+1][j+1];
                dp[i][j]=matrix[i][j]+min({down,dleft,dright});
           }
        }
        for(int i=0;i<n;i++) ans=min(ans,dp[0][i]);
        return ans;
    }
};