class FindSumPairs {
public:
    vector<int> v1,v2;
    map<int,int> m;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        v1.assign(nums1.begin(),nums1.end());
        v2.assign(nums2.begin(),nums2.end());
        for(int i:nums2)    m[i]++;
    }
    
    void add(int index, int val) {
        m[v2[index]]--;
        if(m[v2[index]]==0) m.erase(v2[index]);
        v2[index]+=val;
        m[v2[index]]++;
    }
    
    int count(int tot) {
        int c=0;
        for(int j=0;j<v1.size();j++)
        {
            if(m.find(tot-v1[j])!=m.end())  c+=m[(tot-v1[j])];
        }
        return c;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */