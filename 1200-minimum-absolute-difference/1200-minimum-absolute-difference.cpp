class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        vector<vector<int>> v;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(abs(arr[i+1]-arr[i])<mini) mini=abs(arr[i+1]-arr[i]);
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            if(abs(arr[i+1]-arr[i])==mini) v.push_back({arr[i],arr[i+1]});
        }
        return v;
    }
};