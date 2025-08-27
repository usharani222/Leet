class Solution {
public:
    bool isvowel(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    string reverseVowels(string s) 
    {
        int l=0,r=s.size()-1;
        while(l<=r)
        {
            if(!isvowel(s[l])) l++;
            else if(!isvowel(s[r])) r--;
            else{
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }    
        return s;
    }
};