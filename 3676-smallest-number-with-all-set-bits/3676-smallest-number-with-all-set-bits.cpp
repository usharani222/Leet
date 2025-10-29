class Solution {
public:
    bool isset(int n)
    {
        while(n>0)
        {
            if(n%2==0) return false;
            n/=2;
        }
        return true;
    }
    int smallestNumber(int n) {
        for(int i=n;i<INT_MAX;i++)  if(isset(i)) return i;
        return 0;
    }
};