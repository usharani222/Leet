class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l=0,r=0,maxi=0;
        set<int> st;
        while(r<s.size())
        {
            while(st.find(s[r])!=st.end())
            {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxi=max(maxi,r-l+1);
            r++;
        }    
        return maxi;
    }
};