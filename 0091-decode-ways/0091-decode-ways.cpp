class Solution {
public:
    int fun(string s,vector<int> &dp,int i)
    {
        if(i==s.size()) return 1;
        if(s[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];
        int res=fun(s,dp,i+1);
        if(i+1<s.size()&&((s[i]=='1')||(s[i]=='2'&&(s[i+1]>='0'&&s[i+1]<='6')))) res+=fun(s,dp,i+2);
        // dp[i]=res;
        return dp[i]=res;
    }
    int numDecodings(string s) 
    {
        vector<int> dp(s.size(),-1);
        return fun(s,dp,0);
    }
};