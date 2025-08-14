class Solution {
public:
    int fun(vector<int> &nums,int ind,int prev,int n,vector<vector<int>> &dp)
    {
        if(ind==n) return 0;
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int len = fun(nums,ind+1,prev,n,dp);
        if(prev== -1||nums[ind]>nums[prev]) len=max(len,1+fun(nums,ind+1,ind,n,dp));
        return dp[ind][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return fun(nums,0,-1,n,dp);
    }
};