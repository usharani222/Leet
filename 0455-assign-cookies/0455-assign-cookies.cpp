class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=min(g.size(),s.size()),j=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>=g[j])
            {
                ans++;
                j++;
            }
        }
        return ans;
    }
};