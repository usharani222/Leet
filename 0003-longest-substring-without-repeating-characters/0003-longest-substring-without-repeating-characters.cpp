class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.size(),maxi=0;
        for(int i=0;i<n;i++)
        {
            set<int> st;
            for(int j=i;j<n;j++)
            {
                if(st.find(s[j])!=st.end()) break;
                int len=j-i+1;
                maxi=max(maxi,len);
                st.insert(s[j]);
            }
        }
        return maxi;
    }
};