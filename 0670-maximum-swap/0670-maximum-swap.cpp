class Solution {
public:
    int maxi(vector<int>& v,int i)
    {
        int m=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]>=v[m])
                m=j;
        }
        return m;
    }
    int maximumSwap(int num) {
        vector<int> v;
        int n=num;
        while(n>0)    
        {
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            int maxindex=maxi(v,i+1);
            if(v[maxindex]>v[i])
            {
                swap(v[i],v[maxindex]);
                break;
            }
        }
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            res*=10;
            res+=v[i];
        }
        return res;
    }
};