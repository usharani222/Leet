class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=*max_element(nums.begin(),nums.end());
        while(l<=h)
        {
            int mid=l+(h-l)/2,sum=0;
            for(int i=0;i<nums.size();i++)
            {
                sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=threshold) 
            {
                h=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
};