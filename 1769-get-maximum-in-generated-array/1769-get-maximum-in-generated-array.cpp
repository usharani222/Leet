class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int> v(n+1);
        v[0]=0;v[1]=1;
        for(int i=1;2*i<=n;i++)
        {
            v[2*i]=v[i];
            if(2*i+1<=n) v[2*i+1]=v[i]+v[i+1];
        }
        for(int i:v) cout<<i<<' ';
        return *max_element(v.begin(),v.end());
    }
};