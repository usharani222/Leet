class Solution {
public:
    string convertToBase7(int num) {
        string str="";
        bool isneg=false;
        if(num<0)
        {
            isneg=true;
            num=-num;
        } 
        while(num>0)
        {
            if(num==1||num==2||num==3||num==4||num==5||num==6) break;
            str+=((num%7)+'0');
            num/=7;
        }
        str+=num+'0';
        reverse(str.begin(),str.end());
        if(isneg) 
        {
            string s="";
            s+='-';
            for(char i:str) s+=i;
            return s;
        }
        return str;
    }
};