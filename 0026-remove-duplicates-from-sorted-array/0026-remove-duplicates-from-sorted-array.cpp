class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set<int> s(nums.begin(),nums.end());
        vector<int> v(s.begin(),s.end());
        for(int i=0;i<s.size();i++) nums[i]=v[i];
        return s.size();
    }
};