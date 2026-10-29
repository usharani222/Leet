class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,num=nums[0];
        for(int i:nums)
        {
            if(i==num) count++;
            else if(count==0) num=i;
            else count--;
        }
        return num;
    }
};