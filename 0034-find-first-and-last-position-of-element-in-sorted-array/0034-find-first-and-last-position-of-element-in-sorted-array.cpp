class Solution {
public:
    int firstocc(vector<int>& nums, int target)
    {
        int l=0,h=nums.size()-1,pos=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                pos=mid;
                h=mid-1;
            }
            else if(nums[mid]>target) h=mid-1;
            else l=mid+1;
        }
        return pos;
    }
    int lastocc(vector<int>& nums, int target)
    {
        int l=0,h=nums.size()-1,pos=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                pos=mid;
                l=mid+1;
            }
            else if(nums[mid]>target) h=mid-1;
            else l=mid+1;
        }
        return pos;

    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        if(nums.empty()) return {-1,-1};
        return {firstocc(nums,target),lastocc(nums,target)};    
    }
};