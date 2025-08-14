class Solution {
public:
    string largestGoodInteger(string num) 
    {
        string maxi="";
        if(num.size()<3) return "";
        for(int i=0;i<num.size()-2;i++)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                string s="";
                s+=num[i];
                s+=num[i+1];
                s+=num[i+2];
                maxi=max(maxi,s);
            }
        }
        return maxi;
    }
};