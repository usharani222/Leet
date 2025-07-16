class Solution {
public:
    void subset(vector<int> nums,vector<vector<int>> &v,vector<int> &ans,int i)
    {
        if(i==nums.size())
        {
            v.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        subset(nums,v,ans,i+1);
        ans.pop_back();
        subset(nums,v,ans,i+1);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> v;
        vector<int> ans;
        subset(nums,v,ans,0);
        return v;
        
    }
};