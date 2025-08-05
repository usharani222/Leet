class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) 
    {
        int n=fruits.size(),ans=0;
        for(int i=0;i<n;i++)  
        {
            int f=0;
            for(int j=0;j<n;j++)
            {
                if(baskets[j]>=fruits[i])
                {
                    baskets[j]=-1;
                    f=1;
                    break;
                }
            }
            if(f==0) ans++;
        }  
        return ans;
    }
};