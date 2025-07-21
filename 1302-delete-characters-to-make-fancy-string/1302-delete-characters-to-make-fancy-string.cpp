class Solution {
public:
    string makeFancyString(string s) {
        string str;
        int c=1;
        str+=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==s[i])
                c++;
            else
                c=1;
            if(c<3) str+=s[i];
        }
        return str;
    }
};