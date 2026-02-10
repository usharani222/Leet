class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int l=0,r=0;
        long long sum=0;
        double maxi=-1e18;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(r-l+1>k) 
            {
                sum-=nums[l];
                l++;
            }
            if(r-l+1==k) 
            {
                double ans=(double)sum/k;
                maxi=max(maxi,ans);
            }
            r++;
        }
        return maxi;
    }
};