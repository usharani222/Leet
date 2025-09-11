class Solution {
public:
    bool isvowel(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    string sortVowels(string s) 
    {
        int n=s.size();
        string str(n,'0');    
        vector<int> v;
        for(int i=0;i<n;i++) 
        {
            if(!isvowel(s[i]))    str[i]=s[i];
            else
            {
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        // for(int i:v) cout<<i<<" ";
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
                char c=v[j];
                str[i]=c;
                j++;
            }
        }
        return str;
    }
};