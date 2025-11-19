class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> m(nums.begin(),nums.end());
        while(m.find(original)!=m.end())    original*=2;
        return original;
    }
};