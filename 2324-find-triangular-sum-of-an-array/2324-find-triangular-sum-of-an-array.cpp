class Solution {
public:
    int triangularSum(vector<int>& nums) 
    {
        while(nums.size()>=1)
        {
            int n=nums.size();
            if(n==1) return nums[0]>=10?nums[0]%10:nums[0];
            vector<int> v(n-1);
            for(int i=0;i<n-1;i++)
            {
                v[i]=(nums[i]+nums[i+1]);
                if(v[i]>=10) v[i]%=10;
            }
            nums=v;
        }   
        return 0; 
    }
};