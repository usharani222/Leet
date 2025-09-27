class Solution {
public:
    int fibnocii(int n,vector<int> &dp)
    {
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fibnocii(n-1,dp)+fibnocii(n-2,dp);
    }
    int fib(int n) 
    {
        // recurssion
        // if(n==0||n==1) return n;
        // return fib(n-1)+fib(n-2);    

        //dp
        // vector<int> dp(n+1,-1);
        // if(n<=1) return n;
        // dp[0]=0,dp[1]=1;
        // fibnocii(n,dp);
        // return dp[n];

        //dp space optimise
        vector<int> dp(n+1,-1);
        if(n<=1) return n;
        dp[0]=0,dp[1]=1;
        for(int i=2;i<=n;i++)    dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
};