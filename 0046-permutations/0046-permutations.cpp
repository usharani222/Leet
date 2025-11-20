class Solution {
public:
    void perm(vector<int> nums,int i,vector<vector<int>> &v)
    {
        if(i==nums.size())
        {
            v.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            perm(nums,i+1,v);
            swap(nums[i],nums[j]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> v;
        perm(nums,0,v);
        return v;
    }
};