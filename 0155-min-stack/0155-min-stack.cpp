class MinStack {
public:
    map<int,int> m;
    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        m[val]++;
    }
    
    void pop() {
        int t=st.top();
        m[t]--;
        if(m[t]==0) m.erase(t);
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        auto i=m.begin();
        return i->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */