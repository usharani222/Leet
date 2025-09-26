class Solution {
public:
    int triangleNumber(vector<int>& nums) 
    {
        if(nums.size()<3) return 0;
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]==0) continue;
            int j=i+1,k=i+2;
            while(j<nums.size()-1)
            {
                while(k<nums.size()&&(nums[i]+nums[j])>nums[k]) k++;
                ans+=k-j-1;
                j++;
            }
        }
        return ans;
    }
};