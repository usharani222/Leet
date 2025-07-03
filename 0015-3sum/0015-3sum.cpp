class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) 
    {
        vector<vector<int>> ans;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i++)
        {
            int j=i+1,k=n.size()-1;
            if(i>0&&n[i]==n[i-1]) continue;
            while(j<k)
            {
                int sum=n[i]+n[j]+n[k];
                if(sum>0)   k--;
                else if(sum<0)   j++;
                else 
                {
                    ans.push_back({n[i],n[j],n[k]});
                    j++;
                    k--;
                    while(j<k && n[j]==n[j-1])  j++;
                }
            }
        }  
        return ans;  
    }
};