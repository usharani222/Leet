class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            if(!v.empty()&&v[v.size()-1][1]>=intervals[i][0]) 
            v[v.size()-1][1]=max(v[v.size()-1][1],intervals[i][1]);
            else v.push_back(intervals[i]);
        }   
        return v;
    }
};