class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int c=0,n=*max_element(arr.begin(),arr.end());
        set<int> s(arr.begin(),arr.end());
        for(int i=1;i<=n+k;i++)
        {
            if(s.find(i)==s.end()) c++;
            if(c==k) return i;
        }  
        return 0;
    }
};