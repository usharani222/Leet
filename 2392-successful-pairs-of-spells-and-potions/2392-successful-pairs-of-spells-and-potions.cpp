class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans; 
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++)
        {
             long long minPotion = (success + spells[i]- 1) / spells[i]; // ceil(success/spell)
             // Find the first potion >= minPotion
            int idx = lower_bound(potions.begin(), potions.end(), minPotion) - potions.begin();

            // All potions from idx to end are successful
            ans.push_back(potions.size() - idx);
            // int c=0;
            // for(int j=0;j<potions.size();j++)
            // {
            //     long long sum=1LL*(spells[i])*(potions[j]);
            //     if(sum>=success) c++;
            // }
            // ans.push_back(c);
        }
        return ans;
    }
};