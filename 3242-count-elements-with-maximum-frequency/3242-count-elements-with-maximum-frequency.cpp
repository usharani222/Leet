class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        map<int,int> m;
        for(int i:nums) m[i]++;
        int maxi=0;
        for(auto i:m)
        {
            if(i.second>=maxi) maxi=i.second;
        }
        int ans=0;
        for(auto i:m) if(i.second==maxi) ans+=i.second;
        return ans;
    }
};