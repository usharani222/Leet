class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        vector<int> psum(n);
        map<int,int> m;
        psum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            psum[i]=psum[i-1]+nums[i];
        }
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(psum[j]==k)    c++;
            if(m.find(psum[j]-k)!=m.end())  c+=m[psum[j]-k];
            m[psum[j]]++;
        }
        return c;
    }
};