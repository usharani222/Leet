class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int,int> m;
        stack<int> s;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!s.empty()&&nums2[i]>s.top()) s.pop();
            m[nums2[i]]=s.empty()?-1:s.top();
            s.push(nums2[i]);
        }    
        vector<int> res;
        for(int i:nums1)
        {
            res.push_back(m[i]);
        }
        return res;
    }
};