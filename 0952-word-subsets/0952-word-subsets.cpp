class Solution {
public:
    vector<int> word_freq(string s)
    {
        vector<int> v(26,0);
        for(char i:s)
        {
            v[i-'a']++;
        }
        return v;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
    {
        vector<string> ans;
        vector<int> v(26,0);
        for(string i:words2) 
        {
            vector<int> maxfreq=word_freq(i);
            for(int j=0;j<26;j++)   v[j]=max(maxfreq[j],v[j]);
        }

        for(string i:words1)
        {
            vector<int> wordfreq=word_freq(i);
            int flag=0;
            for(int j=0;j<26;j++)
            {
                if(wordfreq[j]<v[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) ans.push_back(i);
        }
        return ans;
        
    }
};