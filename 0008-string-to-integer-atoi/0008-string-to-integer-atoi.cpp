class Solution {
public:
    int myAtoi(string s) 
    {
        long long ans=0;
        int i=0;
        bool neg=false;
        while(i<s.size()&&s[i]==' ') i++;
        if(i<s.size()&&(s[i]=='-'||s[i]=='+'))
        {
            if(s[i]=='-')   neg=true;
            i++;
        }
        while(i<s.size()&&s[i]=='0') i++;
        for(;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')  
            {
                ans=ans*10+(s[i]-'0');
                if(!neg&&ans>INT_MAX) return INT_MAX;
                if(neg&&-ans<INT_MIN) return INT_MIN;
            }  
            else break;
        } 
        return neg?-ans:ans;
    }
};