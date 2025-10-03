class Solution {
public:
    // int bs(int l,int h,vector<int>& nums,int x)
    // {
    //     while(l<=h)
    //     {
    //         int mid=l+(h-l)/2;
    //         if(nums[mid]==x) return mid;
    //         else if(nums[l]<=nums[mid])
    //         {
    //             if(nums[l]<=x&&x<=nums[mid]) h=mid-1;
    //             else l=mid+1;
    //         }
    //         else
    //         {
    //             if(nums[mid]<=x&&x<=nums[h]) l=mid+1;
    //             else h=mid-1;
    //         }
    //     }
    //     return -1;
    // }
    // int search(vector<int>& nums, int target) 
    // {
    //     return bs(0,nums.size()-1,nums,target);    
    // }
    int bs(int l,int h,vector<int>& nums,int x)
    {
        if(l>h) return -1;
        int mid=l+(h-l)/2;
        if(nums[mid]==x) return mid;
        else if(nums[l]<=nums[mid])
        {
            if(nums[l]<=x&&x<nums[mid]) return bs(l,mid-1,nums,x);
            else return bs(mid+1,h,nums,x);
        }
        else
        {
            if(nums[mid]<x&&x<=nums[h]) return bs(mid+1,h,nums,x);
            else return bs(l,mid-1,nums,x);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) 
    {
        return bs(0,nums.size()-1,nums,target);    
    }
};