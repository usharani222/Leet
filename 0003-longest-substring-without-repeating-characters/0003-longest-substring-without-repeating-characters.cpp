class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if(s=="") return 0;
        set<char> st;
        int maxi=1,l=0,r=0;
        while(r<s.size())
        {
            if(st.find(s[r])==st.end()) 
            {
                st.insert(s[r]);
                maxi=max(maxi,r-l+1);
                r++;
            }
            else
            {
                while(st.find(s[r])!=st.end()) 
                {
                    st.erase(s[l]);
                    l++;
                }
            }
        }
        return maxi;
    }
};