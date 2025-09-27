class Solution {
public:
    string getHint(string secret, string guess) 
    {
        int cow=0,bull=0;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i]) bull++;
        }
        map<int,int> m;
        for(char i:guess) m[i]++;
        for(char i:secret)
        {
            if(m.find(i)!=m.end()) 
            {
                cow++;
                m[i]--;
                if(m[i]==0) m.erase(i);
            }
        }
        cow-=bull;
        string res="";
        res=to_string(bull)+'A'+to_string(cow)+'B';
        return res;
    }
};