class Solution {
public:
    long long M=1000000007;
    int divide(int dividend, int divisor) 
    {
        long long di=dividend,div=divisor;
        long long ans=(di/div);
        if(ans>=INT_MAX) return INT_MAX;
        if(ans<=INT_MIN) return INT_MIN;
        return ceil(ans);
    }
};