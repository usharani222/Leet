class Solution {
public:
    bool hasSameDigits(string s) 
    {
        if(s.size()<2) return false;
        while(s.size()>2)
        {
            string res="";
            for(int i=0;i<s.size()-1;i++)
            {
                res+=(((s[i]-'0')+(s[i+1]-'0'))%10);
            }
            s=res;
        }    
        return s[0]==s[1];
    }
};