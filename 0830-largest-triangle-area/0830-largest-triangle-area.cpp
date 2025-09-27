class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        if(points.size()<3) return 0;
        int n=points.size();
        double maxarea=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    //shoelace formula:: Area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))
                    double area=0.5*abs(
                    points[i][0]*(points[j][1]-points[k][1])+
                    points[j][0]*(points[k][1]-points[i][1])+
                    points[k][0]*(points[i][1]-points[j][1]));
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;

    }
};