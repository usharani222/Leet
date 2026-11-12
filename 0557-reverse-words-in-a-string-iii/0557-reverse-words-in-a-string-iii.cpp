class Solution {
public:
    string reverseWords(string s) {
        string ans,str="";
        for(char i:s)
        {
            if(i!=' ')
            {
                str+=i;
            }
            else
            {
                reverse(str.begin(),str.end());
                ans+=str+' ';
                str="";
            }
        }
        reverse(str.begin(),str.end());
        ans+=str;
        return ans;
    }
};