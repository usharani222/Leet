class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        int i=0;
        while(i<strs[0].size())
        {
            if(strs[0][i]!=strs[strs.size()-1][i]) return ans;
            else ans+=strs[0][i];
            i++;
        }
        return ans;
    }
};