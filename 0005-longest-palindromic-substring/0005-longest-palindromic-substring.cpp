class Solution {
public:
    int ispalin(string &s,int l,int r)
    {
        while(l>=0&&r<s.size()&&s[l]==s[r])
        {
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) 
    {
        int n=s.size(),maxlen=1,start=0;
        if(n<=1) return s;
        for(int i=0;i<n;i++)
        {
            int l1=ispalin(s,i,i);
            int l2=ispalin(s,i,i+1);
            int maxi=max(l1,l2);
            if(maxi>maxlen)
            {
                maxlen=maxi;
                start=i-(maxi-1)/2;
            }
        }    
        return s.substr(start,maxlen);
    }
};