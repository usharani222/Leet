class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char i:s)
        {
            if(!st.empty()&&((st.top()=='('&&i==')')||(st.top()=='['&&i==']')||(st.top()=='{'&&i=='}'))) st.pop();
            else st.push(i);
        }
        return st.empty();
    }
};