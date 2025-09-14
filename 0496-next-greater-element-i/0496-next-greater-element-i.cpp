class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> s(nums2.begin(),nums2.end());
        vector<int> ans(nums1.size());
        for(int i=0;i<nums1.size();i++)
        {
            if(s.find(nums1[i])==s.end()) ans[i]=-1;
            else
            {
                for(int j=0;j<nums2.size();j++)
                {
                    bool found=false;
                    if(nums2[j]==nums1[i])
                    {
                        while(j<nums2.size())
                        {
                            if(nums2[j]>nums1[i]) 
                            {
                                ans[i]=nums2[j];
                                found=true;
                                break;
                            }
                            j++;
                        }
                        if(!found) ans[i]=-1;
                        break;
                    }
                }
            }
        } 
        return ans;   
    }
};