class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        map<int,int> m;
        for(auto i:nums)
        {
            if(i%2==0) m[i]++;
        }
        if(m.size()==0) return -1;
        int maxi=INT_MIN,ans=-1;
        for(auto i:m)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};