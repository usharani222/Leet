class Solution {
public:
    int min_coins(vector<int>& coins, int amount,vector<int>& dp)
    {
        if(amount==0) return 0;
        if(amount<0) return INT_MAX;
        if(dp[amount]!=-1) return dp[amount];
        int mini=INT_MAX;
        for(int j:coins)
        {
            int diff=amount-j;
            int sub=min_coins(coins,diff,dp);
            if(sub!=INT_MAX)    mini=min(mini,1+sub);
        }
        dp[amount]=mini;
        return mini;
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        int count=0;
        sort(coins.begin(),coins.end());
        vector<int> dp(amount+1,-1);
        dp[0]=0;
        int res=min_coins(coins,amount,dp);
        return res!=INT_MAX?res:-1;
    }
};