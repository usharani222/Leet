class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,z=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0) prod*=nums[i];
            else z++;
        }
        if(z>=2)    return vector<int>(nums.size(),0);
        vector<int> v(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)  v[i]=prod;
            else if(z>0) v[i]=0;
            else v[i]=prod/nums[i];
        }
        return v;
    }
};