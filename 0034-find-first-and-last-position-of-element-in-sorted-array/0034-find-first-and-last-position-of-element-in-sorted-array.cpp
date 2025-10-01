class Solution {
public:
    int firstpos(vector<int>& v,int t)
    {
        int l=0,h=v.size()-1,ans=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(v[mid]==t)
            {
                ans=mid;
                h=mid-1;
            }
            else if(v[mid]>t) h=mid-1;
            else l=mid+1;
        }
        return ans;
    }
    int lastpos(vector<int>& v,int t)
    {
        int l=0,h=v.size()-1,ans=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(v[mid]==t)
            {
                ans=mid;
                l=mid+1;
            }
            else if(v[mid]<t) l=mid+1;
            else h=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int f=firstpos(nums,target);
        if(f==-1) return {-1,-1};
        int l=lastpos(nums,target);
        return {f,l};
    }
};