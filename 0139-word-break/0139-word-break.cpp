class Solution {
public:
    bool breakstring(string s, vector<string>& wordDict,int start,vector<int> &dp)
    {
        if(start==s.size()) return true;
        if(dp[start]!=-1) return dp[start];
        for(auto i:wordDict)
        {
            int n=i.size();
            if(start+n<=s.size() && s.substr(start,n)==i)
            {
                if(breakstring(s,wordDict,start+n,dp))  return dp[start]=true;
            }
        }
        return dp[start]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size(),-1);
        return breakstring(s,wordDict,0,dp);
    }
};