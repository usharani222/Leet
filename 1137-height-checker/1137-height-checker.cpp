class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0,n=heights.size();
        vector <int> expected;
        for(int i=0;i<n;i++)
        {
            expected.push_back(heights[i]);
            cout<<expected[i];
        }
        sort(expected.begin(),expected.end());
        for(int i=0;i<n;i++)
        {
            if(expected[i]!=heights[i])
                count++;
        }
        return count;
    }
};