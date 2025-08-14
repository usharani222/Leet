class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n=triangle.size();
        int m=triangle[n-1].size();
        vector<int> v(m+1,0);
        triangle.push_back(v);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                int l=triangle[i][j]+triangle[i+1][j];
                int r=triangle[i][j]+triangle[i+1][j+1];
                triangle[i][j]=min(l,r);
            }
        }   
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<triangle[i].size();j++)
        //     {
        //         cout<<triangle[i][j]<<" ";
        //     }
        //     cout<<endl;
        // } 
        return triangle[0][0];
    }
};