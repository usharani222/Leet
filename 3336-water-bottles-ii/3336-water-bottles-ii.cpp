class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) 
    {
        int ans=numBottles,empty=numBottles;
        while(empty>=numExchange)
        {
            empty-=numExchange;
            numExchange++;
            ans++;
            empty++;
        }
        return ans;
    }
};