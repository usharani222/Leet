class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        // int n=fruits.size(),ans=0;
        // for(int i=0;i<n;i++)
        // {
        //     map<int,int> m;
        //     for(int j=i;j<n;j++)
        //     {
        //         m[fruits[j]]++;
        //         if(m.size()<=2)
        //         {
        //             int tot=0;
        //             for(auto it:m) tot+=it.second;
        //             ans=max(ans,tot);
        //         }
        //         else break;
        //     }
        // }
        // return ans;
        int ans=0,l=0,r=0;
        map<int,int> m;
        while(r<fruits.size())
        {
            m[fruits[r]]++;
            if(m.size()<=2)
            {
                int tot=0;
                for(auto it:m) tot+=it.second;
                ans=max(ans,tot);
            }
            while(m.size()>2)
            {
                m[fruits[l]]--;
                if(m[fruits[l]]==0) m.erase(fruits[l]);
                l++;
            }
            r++;
        }
        return ans;
    }
};