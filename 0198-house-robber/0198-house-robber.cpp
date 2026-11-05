class Solution {
public:
    // int max_profit(vector<int> nums,int i,vector<int> dp)
    // {
    //     if(i==0) return nums[i];
    //     if(i<0) return 0;
    //     if(dp[i]!=-1) return dp[i];
    //     int pick=nums[i]+max_profit(nums,i-2,dp);
    //     int notpick=0+max_profit(nums,i-1,dp);
    //     return dp[i]=max(pick,notpick);
    // }
    int rob(vector<int>& nums) {
        //Recurssion
        // return max_profit(nums,nums.size()-1);

        //Memorisation
        // vector<int> dp(nums.size(),-1);
        // return max_profit(nums,nums.size()-1,dp);

        //Tabulation
        vector<int> dp(nums.size());
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int pick=nums[i];
            if(i>1) pick+=dp[i-2];
            int notpick=0+dp[i-1];
            dp[i]=max(pick,notpick);
        }
        return dp[nums.size()-1];
    }
};