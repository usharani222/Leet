class Solution {
public:
    int maximum69Number (int num) {
        int maxi=num;
        string s=to_string(num);
        for(int i=0;i<s.size();i++)
        {
            s[i]=(s[i]=='6')?'9':'6';
            maxi=max(maxi,stoi(s));
            s[i]=(s[i]=='6')?'9':'6';
        }
        return maxi;
    }
};