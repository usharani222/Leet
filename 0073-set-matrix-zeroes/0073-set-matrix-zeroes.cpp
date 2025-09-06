class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> p;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    p.push_back({i,j});
                }
            }
        }  
        int i=0;    
        while(i<p.size())
        {
            int r=p[i].first,c=p[i].second;
            for(int j=0;j<matrix.size();j++) matrix[j][c]=0;
            for(int j=0;j<matrix[0].size();j++) matrix[r][j]=0;
            i++;
        }
    }
};