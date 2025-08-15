class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int> m;
        for(int i:nums) m[i]++;
        int n=nums.size();
        for(auto i:m)
        {
            if(i.second>n/2) return i.first;
        }    
        return -1;
    }
};