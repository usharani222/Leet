class Solution {
public:
    int maxFreqSum(string s) 
    {
        int v=0,c=0,ans=0;
        map<int,int> m;
        for(char i:s) m[i]++;
        string str="aeiouAEIOU";
        for(auto i:m)
        {
            if(str.find(i.first)!=string::npos)  v=max(v,i.second);
            else  c=max(c,i.second);
        }
        return (v+c);
    }
};