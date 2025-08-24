class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        vector<vector<int>> ans,v;
        for(int i=0;i<timeSeries.size();i++)
        {
            int n=timeSeries[i];
            ans.push_back({n,n+duration-1});
        }
        v.push_back(ans[0]);
        for(int i=0;i<ans.size();i++)
        {
            if(v.back()[1]>=ans[i][0]) v.back()[1]=max(v.back()[1],ans[i][1]);
            else v.push_back(ans[i]);
        }
        int c=0;
        for(int i=0;i<v.size();i++) c+=(v[i][1]-v[i][0]+1);
        return c;
    }
};