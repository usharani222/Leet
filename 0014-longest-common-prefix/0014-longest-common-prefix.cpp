class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.empty()) return "";
        string ans="";
        for(int i=0;i<strs[0].size();i++)    
        {
            int c=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=c) return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};