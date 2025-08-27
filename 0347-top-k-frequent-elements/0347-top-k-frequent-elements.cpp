class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)    
        {
            mp[nums[i]]++;
        }
        vector<int> v;
        priority_queue<pair<int,int>> p;
        for(auto i:mp)
        {
            p.push({i.second,i.first});
        }
        while(k--)
        {
            v.push_back(p.top().second);
            p.pop();
        }
        return v;
    }
};