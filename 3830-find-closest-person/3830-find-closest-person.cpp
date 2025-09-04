class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xd=abs(z-x),yd=abs(z-y);
        if(xd<yd) return 1;
        if(xd>yd) return 2;
        return 0;
    }
};