class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        // int n=nums.size(),maxi=INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         maxi=max(maxi,sum);
        //     }
        // }
        // return maxi;


        int sum=nums[0],maxi=nums[0];
        for(int i=1;i<nums.size();i++)    
        {
            sum=max(nums[i],sum+nums[i]);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};