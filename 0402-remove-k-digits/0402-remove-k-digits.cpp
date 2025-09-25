class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        string st;     //as stack
        for(char c:num)
        {
            while(!st.empty()&&k>0&&st.back()>c)
            {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }    
        //remove if k>0
        while(k>0&&!st.empty())
        {
            st.pop_back();
            k--;
        }
        //leading zeroes;
        int i=0;
        while(i<st.size()&&st[i]=='0') i++;
        st=st.substr(i);

        return st.empty()?"0":st;
    }
};