class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size(),sum=0;
        for(int i:nums) sum+=i;
        return ((n*(n+1))/2)-sum;    
    }
};