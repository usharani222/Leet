class Solution {
public:
    bool bitwisexor(vector<int> temp,int k)
    {
        if(temp.size()==1 && temp[0]==k)  return true;
        int bit=0;
        for(int i:temp) bit|=i;
        return bit==k;
    }
    void subsets(vector<int> nums,vector<int> &temp,int i,int &count,int k)
    {
        if(i==nums.size())
        {
            if(!temp.empty()&&bitwisexor(temp,k))   count++;
            return;
        }
        temp.push_back(nums[i]);
        subsets(nums,temp,i+1,count,k);
        temp.pop_back();
        subsets(nums,temp,i+1,count,k);
        return;
    }
    int countMaxOrSubsets(vector<int>& nums) 
    {
        vector<int> temp;
        int count=0;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            k|=nums[i];
        }
        subsets(nums,temp,0,count,k);
        return count;
    }
};