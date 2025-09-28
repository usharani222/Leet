class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {
        int maxi=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int j=i+1,k=i+2;
            while(k<nums.size())
            {
                if(nums[i]+nums[j]>nums[k]) maxi=max(maxi,(nums[i]+nums[j]+nums[k]));
                k++;
            }
        }
        return maxi;
    }
};