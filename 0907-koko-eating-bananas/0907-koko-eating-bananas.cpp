class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l=1,hi=*max_element(piles.begin(),piles.end()),ans=0;
        while(l<=hi)
        {
            int mid=l+(hi-l)/2;
            long long sum=0;
            for(int i=0;i<piles.size();i++)
            {
                sum+=ceil((double)piles[i]/mid);
            }
            if(sum<=h) 
            {
                ans=mid;
                hi=mid-1;
            }
            else l=mid+1;
        } 
        return ans;
    }
};