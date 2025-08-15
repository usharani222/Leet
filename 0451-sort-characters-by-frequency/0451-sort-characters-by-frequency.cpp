class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector<pair<int,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](const auto &a,const auto &b)
        {
            if(a.second!=b.second) return a.second>b.second;
            return a.second<b.second;
        });
        for(auto it:v)
        {
            // cout<<it.first<<" "<<it.second;
            int count=it.second;
            while(count--)
            {
                cout<<it.first<<endl;
                str+=it.first;
            }
        }
        return str;
    }
};