class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        int l=0,r=n-1,t=0,b=n-1,num=1;
        while((l<=r&&t<=b))
        {
            for(int i=l;i<=r;i++) v[t][i]=num++;
            t++;
            for(int i=t;i<=b;i++) v[i][r]=num++;
            r--;
            if(t<=b)
            {
                for(int i=r;i>=l;i--) v[b][i]=num++;
                b--;
            }
            if(l<=r)
            {
                for(int i=b;i>=t;i--) v[i][l]=num++;
                l++;
            }
        }
        return v;
    }
};