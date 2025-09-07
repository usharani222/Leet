class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int c=0;
        for(int i:nums)
        {
            if(i!=0) ans.push_back(i);
            else c++;
        }
        while(c--)  ans.push_back(0);
        nums=ans;


        // int prev=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=0)      nums[prev++]=nums[i];
        // }
        // for(int j=prev;j<nums.size();j++)
        // {
        //     nums[j]=0;
        // }
    }
};