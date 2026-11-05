class Solution {
public:
    int converttoint(string s)
    {
        return stoi(s.substr(0,2)+s.substr(3,2));
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        vector<vector<int>> ans;
        int e10=converttoint(event1[0]);
        int e11=converttoint(event1[1]);
        int e20=converttoint(event2[0]);
        int e21=converttoint(event2[1]);
        ans.push_back({e10,e11});
        ans.push_back({e20,e21});
        sort(ans.begin(),ans.end());
        if(ans[0][1]>=ans[1][0]) return true;        
        return false;
    }
};