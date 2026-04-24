class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0;
        for(auto i:moves)
        {
            if(i=='L') 
            {
                l--;
                r--;
            }
            else if(i=='R')
            {
                l++;
                r++;
            }
            else 
            {
                l--;
                r++;
            }
        }
        return max(abs(l),abs(r));
    }
};