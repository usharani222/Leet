class Solution {
public:
    bool bs(int l,int h,vector<int>& nums,int x)
    {
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==x) return true;
            if(nums[l]==nums[mid] && nums[mid]==nums[h])
            {
                l++;
                h--;
            }
            else if(nums[l]<=nums[mid])
            {
                if(nums[l]<=x && x<nums[mid]) h=mid-1;
                else l=mid+1;
            }
            else 
            {
                if(nums[mid]<x && x<=nums[h]) l=mid+1;
                else h=mid-1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) 
    {
        return bs(0,nums.size()-1,nums,target);    
    }
};