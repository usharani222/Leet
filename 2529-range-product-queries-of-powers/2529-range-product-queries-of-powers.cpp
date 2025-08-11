class Solution {
public:
    const long long MOD = 1000000007;
    void power(vector<int> &v,int n)
    {
        int count=0;
        while(n>0)
        {
            int t=n%2;
            if(t==1)    v.push_back(pow(2,count));
            count++;
            n/=2;
        }
    }
    vector<int> productQueries(int n, vector<vector<int>>& queries) 
    {
        vector<int> v;
        power(v,n);
        vector<int> ans;
        for(int i=0;i<queries.size();i++)
        {
            long long int p=1;
            for(int j=queries[i][0];j<=queries[i][1];j++)
            {
                p*=v[j];
                p%=MOD;
            }
            ans.push_back(p);
        }
        return ans;
    }
};