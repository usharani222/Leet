class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n==1) return true;
        for(int i=0;i<=30;i++) if(pow(3,i)==n) return true;
        return false;
    }
};