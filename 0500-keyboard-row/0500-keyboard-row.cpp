class Solution {
public:
    vector<string> findWords(vector<string>& word) 
    {
        string s1="qwertyuiopQWERTYUIOP";
        string s2="asdfghjklASDFGHJKL";
        string s3="zxcvbnmZXCVBNM";
        map<int,int> m;
        for(char i:s1) m[i]=0;
        for(char i:s2) m[i]=1;
        for(char i:s3) m[i]=2;
        vector<string> ans;
        for(int i=0;i<word.size();i++)
        {
            int c=m[word[i][0]];
            bool f=true;
            for(int j=1;j<word[i].size();j++)
            {
                if(m[word[i][j]]!=c)
                {
                    f=false;
                    break;
                }
            }
            if(f==true) ans.push_back(word[i]);
        }
        return ans;
    }
};