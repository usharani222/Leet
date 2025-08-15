class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        map<int,int> m;
        for(auto i:nums) m[i]++;
        vector<pair<int,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](const auto &a,const auto &b){
            if(a.second!=b.second) return a.second<b.second;
            return a.first>b.first; 
        });
        vector<int> ans;
        for(auto i:v)
        {
            while(i.second--) ans.push_back(i.first);
        }
        return ans;
    }
};