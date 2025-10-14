class Solution {
public:
    bool isinc(vector<int>& nums,int i,int k)
    {
        for(int j=i+1;j<i+k;j++) if(nums[j-1]>=nums[j])  return false;
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) 
    {
        for(int i=0;i<=nums.size()-2*k;i++)
        {
            if(isinc(nums,i,k)&&isinc(nums,i+k,k)) return true;
        }    
        return false;
    }
};