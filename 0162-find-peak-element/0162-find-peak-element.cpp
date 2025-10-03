class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int l=0,h=nums.size()-1;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            // if(nums[mid-1]<=nums[mid]&&nums[mid]>=nums[mid+1]) return nums[mid];
            if(nums[mid]<nums[mid+1]) l=mid+1;
            else h=mid;
        }    
        return l;
    }
};