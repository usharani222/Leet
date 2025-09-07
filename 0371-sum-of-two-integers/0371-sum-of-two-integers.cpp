class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0)
        {
            cout<<"a="<<a<<"  b="<<b<<endl;
            int temp=(a&b)<<1;
            a=a^b;
            b=temp;
            cout<<"a="<<a<<"  b="<<b<<endl;
        }
        return a;
    }
};