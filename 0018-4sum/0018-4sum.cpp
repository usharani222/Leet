class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int l=0;l<n;l++)
        {
            if(l>0&&nums[l]==nums[l-1]) continue;
            for(int i=l+1;i<n;i++)
            {
                if(i>l+1&&nums[i]==nums[i-1]) continue;
                int j=i+1,k=n-1;
                while(j<k)
                {
                    long long int sum=0LL+nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum>target)   k--;
                    else if(sum<target)   j++;
                    else 
                    {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        j++;
                        k--;
                        while(j<k && nums[j]==nums[j-1])  j++;
                        while(k>j && nums[k]==nums[k+1])  k--;
                    }
                }
            }
        }
        return ans;
        
    }
};