class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dict) {
        int ans=0;
        vector<string> res;
        for(int i=0;i<queries.size();i++)
        {
            string str1=queries[i];
            // sort(str1.begin(),str1.end());
            int n=str1.size();
            for(int j=0;j<dict.size();j++)
            {
                string str2=dict[j];
                // sort(str2.begin(),str2.end());
                // cout<<str1<<" "<<str2<<endl;
                int c=0;
                for(int k=0;k<n;k++) 
                {
                    if(str1[k]!=str2[k]) c++;
                }
                if(c<=2) 
                {
                    res.push_back(queries[i]);
                    break;
                }
            }
        }
        return res;
    }
};