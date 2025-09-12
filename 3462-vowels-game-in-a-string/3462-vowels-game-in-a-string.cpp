class Solution {
public:
    bool doesAliceWin(string s) 
    {
        string str="AEIOUaeiou";
        int ans=0;
        for(char i:s)
        {
            if(str.find(i)!=string::npos) ans++;
        } 
        if(ans==0) return false;
        // if(ans%2!=0) 
        return true;  
    }
};