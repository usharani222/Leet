class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        map<int,int> m1,m2;
        for(int i=0;i<s.size();i++)
        {
            if(m1.find(s[i])==m1.end()) m1[s[i]]=i;
            if(m2.find(t[i])==m2.end()) m2[t[i]]=i;
            if(m1[s[i]]!=m2[t[i]]) return false;
        }    
        return true;
    }
};