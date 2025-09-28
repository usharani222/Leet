class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int pos=0,neg=1;
        vector<int> ans(nums.size());
        for(int i:nums)
        {
            if(i>0) 
            {
                ans[pos]=i;
                pos+=2;
            }
            else 
            {
                ans[neg]=i;
                neg+=2;
            }
        }    
        return ans;
    }
};