class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int count=0,sum=0;
            for(int j=1;j*j<=nums[i];j++)
            {
                int div=0;
                if(nums[i]%j==0) 
                {
                    div=nums[i]/j;
                    sum+=div;
                    sum+=j;
                    if(div==j) count++;
                    else count+=2;
                }
            }
            if(count==4) ans+=sum;
        }
        return ans;
    }
};