class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int i=0,j=0,c=0,maxi=0;
        while(j<nums.size())
        {
            if(nums[j]==0) c++;
            while(c>1)
            {
                if(nums[i]==0) c--;
                i++;
            } 
            maxi=max(maxi,j-i+1);
            // cout<<maxi <<" "<<j<<" "<<i<<" "<<c <<endl;
            j++;
        }
        return maxi-1;
    }
};