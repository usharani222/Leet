class Solution {
public:
    string minWindow(string s, string t) 
    {
        if(s.size()<t.size()) return "";
        int req=t.size();
        vector<int> v(128,0);
        for(char c:t) v[c]++;

        int l=0,r=0,start=0,mini=INT_MAX;
        while(r<s.size())
        {
            if(v[s[r]]>0) req--;
            v[s[r]]--;
            r++;

            while(req==0)
            {
                if(r-l<mini)
                {
                    mini=r-l;
                    start=l;
                }
                v[s[l]]++;
                if(v[s[l]]>0) req++;
                l++;
            }
        }
        return mini==INT_MAX?"":s.substr(start,mini);
    }
};