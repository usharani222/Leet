class Solution {
public:
    int maxSum(vector<int>& nums) 
    {
        int sum=0,maxi=INT_MIN;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
            if(nums[i]>=0 && s.find(nums[i])==s.end()) 
            {
                sum+=nums[i];
                s.insert(nums[i]);
            }
        }    
        return maxi<0?maxi:sum;
    }
};