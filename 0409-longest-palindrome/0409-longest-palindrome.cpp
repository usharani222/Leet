class Solution {
public:
    int longestPalindrome(string s) 
    {
        map<int,int> m;
        for(char i:s) m[i]++;
        int ans=0,f=0;
        for(auto const &[i,j]:m)
        {
            if(j%2==0) ans+=j;
            else 
            {
                ans+=j-1;
                f=1;
            }
        }
        return f==1?ans+1:ans;
    }
};