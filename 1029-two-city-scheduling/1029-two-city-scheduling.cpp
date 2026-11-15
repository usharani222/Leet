class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int mini=0;
        vector<int> diff;
        for(auto i:costs)
        {
            mini+=i[0];
            diff.push_back(i[1]-i[0]);
        }
        sort(diff.begin(),diff.end());
        for(int i=0;i<costs.size()/2;i++) mini+=diff[i];
        return mini;
    }
};