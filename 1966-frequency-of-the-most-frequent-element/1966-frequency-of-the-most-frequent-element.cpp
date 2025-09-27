class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) 
    {
        // sort(nums.begin(),nums.end());
        // int ans=1;
        // for(int r=0;r<nums.size();r++)
        // {
        //     int n=0;
        //     for(int l=r-1;l>=0;l--)
        //     {
        //         n+=nums[r]-nums[l];
        //         if(n>k) break;
        //         ans=max(ans,r-l+1);
        //     }
        // }    
        // return ans;    O(n^2)


        sort(nums.begin(),nums.end());
        int l=0,r=0,ans=1;
        long long sum=0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while((long long)(r-l+1)*nums[r]-sum>k)
            {
                sum-=nums[l];
                l++;
            }
            ans=max(ans,(r-l+1));
            r++;
        }
        return ans;
    }
};