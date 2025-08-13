class Solution {
public:
    vector<double> convertTemperature(double celsius) 
    {
        double c_k=(celsius+273.15);
        double c_f=((celsius*1.80)+32.00);
        return {c_k,c_f};
    }
};