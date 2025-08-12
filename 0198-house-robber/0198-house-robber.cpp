class Solution {
public:
    int max_money(vector<int> nums,int i,vector<int> &dp)
    {
        if(i==0) return nums[i];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=nums[i]+max_money(nums,i-2,dp);
        int notpick=0+max_money(nums,i-1,dp);
        return dp[i]=max(pick,notpick);
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> dp(n,-1);
        return max_money(nums,n-1,dp);
    }
};