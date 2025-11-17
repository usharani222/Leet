class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) 
    {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) v.push_back(i);
        }    
        if(v.empty()) return true;
        for(int i=0;i<v.size()-1;i++)
        {
            if((v[i+1]-v[i]-1)<k) return false;
        }
        return true;
    }
};