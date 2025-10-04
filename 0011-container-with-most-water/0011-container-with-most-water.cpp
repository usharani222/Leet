class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        // int maxi=0;
        // for(int i=0;i<height.size();i++)
        // {
        //     for(int j=i+1;j<height.size();j++)
        //     {
        //         int h=min(height[i],height[j]);
        //         int b=j-i;
        //         maxi=max(maxi,(h*b));
        //     }
        // }
        // return maxi;

        int l=0,r=height.size()-1,maxi=0;
        while(l<=r)
        {
            int h=min(height[l],height[r]),b=r-l;
            maxi=max(maxi,(h*b));
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxi;
    }
};