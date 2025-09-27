class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        // int max1=-1,max2=-1,max3=-1;
        // for(int i:nums)
        // {
        //     if(i>max1)
        //     {
        //         max3=max2;
        //         max2=max1;
        //         max1=i;
        //     }
        //     else if(i<max1&&i>max2)
        //     {
        //         max3=max2;
        //         max2=i;
        //     }
        //     else if(i<max2&&i>max3) max3=i;
        // }
        // return max3==-1?max1:max3;
        set<int> s(nums.begin(),nums.end());
        priority_queue<int> p;
        for(int i:s) p.push(i);
        if(p.size()<3) return p.top();
        p.pop();
        p.pop();
        return p.top();
    }
};