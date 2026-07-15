class Solution {
public:
    // int gcdo(int a,int b)
    // {
    //     if(a==b) return a;
    //     if(a>b)  return gcd(a-b,b);
    //     else return gcd(a,b-a);
    // }
    int gcdOfOddEvenSums(int n) 
    {
        int esum=0,osum=0;
        esum=n*(n+1);
        osum=n*n;
        return gcd(esum,osum);
    }
};