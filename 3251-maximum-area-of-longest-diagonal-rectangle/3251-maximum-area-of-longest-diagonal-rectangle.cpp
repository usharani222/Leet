class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) 
    {
        int area=0;
        double dig=0;
        for(int i=0;i<dimensions.size();i++)    
        {
            // area=0;
            int l=dimensions[i][0],w=dimensions[i][1];
            double d=sqrt((l*l)+(w*w));
            if(d>dig)
            {
                dig=d;
                area=l*w;
            }
            if(d==dig) area=max(area,l*w);
        }
        return area;
    }
};