class Solution {
public:
    void subset(vector<int> nums,vector<vector<int>>  &v,vector<int> &ans,int i)
    {
        if(i==nums.size())
        {
            v.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        subset(nums,v,ans,i+1);
        ans.pop_back();
        while(i+1<nums.size()&&nums[i]==nums[i+1]) i++;
        subset(nums,v,ans,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        vector<int> ans;
        subset(nums,v,ans,0);
        return v;
    }
};