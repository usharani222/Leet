class Solution {
public:
    char kthCharacter(int k) 
    {
        string str="a",s;
        while(str.size()<k)
        {
            for(int i=0;i<str.size();i++)
            {
                s+=str[i]+1;
            }
            // cout<<s<<endl;
            str+=s;
            // cout<<str<<endl;
            s="";
        }
        return str[k-1];
    }
};