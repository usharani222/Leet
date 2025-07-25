class Solution {
public:
    void parenthesis(int open,int close,vector<string> &v,string s){
        if(open==0&&close==0)   
        {
            v.push_back(s);
            return ;
        }
        if(open>0)
        {
            s.push_back('(');
            parenthesis(open-1,close,v,s);
            s.pop_back();
        }
        if(open<close)
        {
            s.push_back(')');
            parenthesis(open,close-1,v,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s;
        parenthesis(n,n,v,s); 
        return v;   
    }
};