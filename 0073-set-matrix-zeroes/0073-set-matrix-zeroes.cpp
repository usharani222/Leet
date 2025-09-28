class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n=matrix.size(),m=matrix[0].size();    
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0) v.push_back({i,j});
            }
        }
        for(auto i:v)
        {
            int r=i.first,c=i.second;
            for(int j=0;j<m;j++) matrix[r][j]=0;
            for(int j=0;j<n;j++) matrix[j][c]=0;
        }
    }
};