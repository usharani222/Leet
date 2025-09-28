class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        map<int,int> m;
        vector<int> v;
        for(int i:nums) m[i]++;
        for(auto i:m)
        {
            if(i.second>nums.size()/3) v.push_back(i.first);
        }    
        return v;
    }
};