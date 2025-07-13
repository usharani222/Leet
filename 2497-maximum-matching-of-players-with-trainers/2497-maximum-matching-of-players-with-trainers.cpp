class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) 
    {
        int count=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int p=0,t=0;
        while(p<players.size()&&t<trainers.size())
        {
            if(players[p]<=trainers[t])
            {
                count++;
                p++;
            }
            t++;
        }
        return count;
    }
};