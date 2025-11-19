class Solution {
public:
    bool ispalin(string s)
    {
        string temp=s;
        reverse(temp.begin(),temp.end());
        return s==temp;
    }
    int countSubstrings(string s) {
        string str;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            str="";
            for(int j=i;j<s.size();j++)
            {
                str+=s[j];
                if(ispalin(str))  
                {
                    c++;
                }
            }
        }
        return c;
    }
};