class Solution {
public:
    void solve(string &s,string temp,int i,vector<string> &ans)
    {
        if(i==s.size())
        {
            ans.push_back(temp);
            return;
        }
        if(isdigit(s[i])) solve(s,temp+s[i],i+1,ans);
        else
        {
            solve(s,temp+(char)toupper(s[i]),i+1,ans);
            solve(s,temp+(char)tolower(s[i]),i+1,ans);
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s,"",0,ans);
        return ans;
    }
};