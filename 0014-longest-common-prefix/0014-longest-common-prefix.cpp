class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.empty()) return"";
        sort(strs.begin(),strs.end());
        string s1=strs[0],s2=strs[strs.size()-1],ans="";
        int i=0;
        while(i<s1.size()&&i<s2.size()&&s1[i]==s2[i]) ans+=s1[i++];
        return ans;
    }
};