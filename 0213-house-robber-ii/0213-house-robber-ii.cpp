class Solution {
public:
    int robber(vector<int> &nums,int start,int i,vector<int> &dp)
    {
        if(i==start) return nums[i];
        if(i<start) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=nums[i]+robber(nums,start,i-2,dp);
        int notpick=0+robber(nums,start,i-1,dp);
        return dp[i]=max(pick,notpick);
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<2) return nums[0]; 
        vector<int> dp1(n+1,-1);
        vector<int> dp2(n+1,-1);
        int a=robber(nums,0,n-2,dp1);
        int b=robber(nums,1,n-1,dp2);
        return max(a,b);
    }
};