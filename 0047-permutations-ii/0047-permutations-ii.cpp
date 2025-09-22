class Solution {
public:
    void permu(set<vector<int>> &s,vector<int>& nums,int i)
    {
        if(i==nums.size())
        {
            s.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            permu(s,nums,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        set<vector<int>> s;
        permu(s,nums,0);  
        vector<vector<int>> v(s.begin(),s.end());
        return v;  
    }
};