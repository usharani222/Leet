class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        // int n=nums.size(),sum=0;
        // for(int i:nums) sum+=i;
        // return ((n*(n+1))/2)-sum;   


        int x=0,n=nums.size();
        for(int i=0;i<n;i++) 
        {
            x^=i;
            x^=nums[i];
        }
        x^=n;
        return x;
    }
};