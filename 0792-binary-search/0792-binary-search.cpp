class Solution {
public:
    int bsearch(vector<int> v,int l,int h,int target)
    {
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(v[mid]==target) return mid;
            else if(v[mid]>target) h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) 
    {
        return bsearch(nums,0,nums.size()-1,target);    
    }
};