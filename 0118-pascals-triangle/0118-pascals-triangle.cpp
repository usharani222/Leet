class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v(n);
        if(n==0)    return v;
        v[0]={1};
        if(n==1)    return v;
        v[1]={1,1};
        if(n==2)    return v;
        for(int i=2;i<n;i++)
        {
            vector<int> res(i+1);
            int k=1;
            res[0]=1,res[i]=1;
            while(k<i)
            {
                res[k]=v[i-1][k-1]+v[i-1][k];
                k++;
            }
            v[i]=res;
        }
        return v;
    }
};