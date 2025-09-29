class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        //O(n^2) in worst case 

        // int ans=0;
        // set<int> s(nums.begin(),nums.end());
        // for(int i:nums)
        // {
        //     int c=1,num=i;
        //     while(s.find(num+1)!=s.end())
        //     {
        //         c++;
        //         num++;
        //     }
        //     ans=max(ans,c);
        // }  
        // return ans;  
        

        //O(n)
        if(nums.empty()) return 0;
        int ans=0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(int i:s)
        {
            if(s.find(i-1)==s.end())
            {
                int c=1,n=i;
                while(s.find(n+1)!=s.end())
                {
                    c++;
                    n++;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};