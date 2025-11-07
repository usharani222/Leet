class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int k=0,j=0,l=0;
        vector<int> v(m+n);
        while(j<m&&k<n)
        {
            if(nums1[j]<=nums2[k])  v[l++]=nums1[j++];
            else v[l++]=nums2[k++];
        }  
        while(j<m) v[l++]=nums1[j++];
        while(k<n) v[l++]=nums2[k++];
        l=0;
        for(int i:v) nums1[l++]=i;   
    }
};