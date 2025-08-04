class Solution {
public:
    int fun(vector<vector<int>>& mat,int i,int j,int n)
    {
        int c=0;
        if((i-1<0)||(mat[i-1][j]<n)) c++;
        if((i+1>=mat.size())||(mat[i+1][j]<n)) c++;
        if((j-1<0)||(mat[i][j-1]<n)) c++;
        if((j+1>=mat[0].size())||(mat[i][j+1]<n)) c++;
        return c;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) 
    {
        vector<int> v;
        int flag=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(fun(mat,i,j,mat[i][j])==4)
                {
                    return {i,j};
                }
            }
        }
        return {};
    }
};