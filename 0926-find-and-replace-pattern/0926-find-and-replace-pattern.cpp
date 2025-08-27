class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> v;
        for(int i=0;i<words.size();i++)
        {
            map<int,int> m1,m2;
            bool canput=true;
            for(int j=0;j<pattern.size();j++)
            {
                if(m1.find(words[i][j])==m1.end()) m1[words[i][j]]=j;
                if(m2.find(pattern[j])==m2.end()) m2[pattern[j]]=j;
                if(m1[words[i][j]]!=m2[pattern[j]])
                {
                    canput=false;
                    break;
                } 
            }
            if(canput) v.push_back(words[i]);
        }
        return v;
    }
};