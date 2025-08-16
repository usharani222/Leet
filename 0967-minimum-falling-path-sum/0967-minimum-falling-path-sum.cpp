class Solution {
public:
    // int pathsum(int i,int j,vector<vector<int>>& matrix,vector<int> dp)
    // {
    //     if(i<0||j<0) return 0;
    //     int ld=dp[i]+
    // }
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                int ldig,down,rdig;
                ldig=(j-1>=0)?matrix[i][j]+matrix[i+1][j-1]:INT_MAX;
                down=matrix[i][j]+matrix[i+1][j];
                rdig=(j+1<matrix[i].size())?matrix[i][j]+matrix[i+1][j+1]:INT_MAX;
                matrix[i][j]=min(ldig,min(down,rdig)); 
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<matrix[i].size();j++) cout<<matrix[i][j]<<" ";
        //     cout<<endl;
        // }
        int mini=INT_MAX;
        for(int i=0;i<matrix[0].size();i++)
        {
            mini=min(mini,matrix[0][i]);
        }
        return mini;
    }
};