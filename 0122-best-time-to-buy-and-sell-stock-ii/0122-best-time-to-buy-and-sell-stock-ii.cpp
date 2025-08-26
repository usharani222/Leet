class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mini=INT_MAX,ans=0;
        for(int i:prices)
        {
            mini=min(mini,i);
            if(i>mini) 
            {
                ans+=i-mini;
                mini=i;
            }
        }    
        return ans;
    }
};