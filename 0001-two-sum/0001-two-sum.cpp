class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(v.find(target-nums[i])!=v.end()) return {i,v[target-nums[i]]};
            v[nums[i]]=i;
        }
        return {};
    }
};