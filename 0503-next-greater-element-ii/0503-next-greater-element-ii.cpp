class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        map<int,int> m;
        vector<int> v=nums;
        v.insert(v.end(),nums.begin(),nums.end());
        stack<int> s;
        vector<int> ans(nums.size(),-1);
        for(int i=v.size()-1;i>=0;i--)
        {
            while(!s.empty()&&v[i]>=v[s.top()]) s.pop();
            if(i<nums.size()) ans[i]=(s.empty())?-1:v[s.top()];
            s.push(i);
        }
        return ans;
    }
};