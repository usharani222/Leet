class Solution {
public:
    void cs(vector<int> v,int k,int target,vector<int> temp,int i,int sum,vector<vector<int>> &ans)
    {
        if(sum>target) return;
        if(temp.size()>k) return;
        if(i==v.size())
        {
            if(temp.size()==k&&sum==target) ans.push_back(temp);
            return;
        }
        temp.push_back(v[i]);
        sum+=v[i];
        cs(v,k,target,temp,i+1,sum,ans);
        sum-=v[i];
        temp.pop_back();
        cs(v,k,target,temp,i+1,sum,ans);
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans;
        vector<int> temp,v={1,2,3,4,5,6,7,8,9};
        // for(int i=1;i<=n;i++) v.push_back(i);
        cs(v,k,n,temp,0,0,ans);
        return ans;    
    }
};