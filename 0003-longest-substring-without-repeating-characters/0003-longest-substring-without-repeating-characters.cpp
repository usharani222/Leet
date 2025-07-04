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
            int len=r-l+1;
            maxi=max(maxi,len);
            r++;
        }
        return maxi;
    }
};