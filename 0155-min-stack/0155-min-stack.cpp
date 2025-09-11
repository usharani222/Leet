class MinStack {
public:
    // map<int,int> m;
    // stack<int> st;
    // MinStack() {
        
    // }
    
    // void push(int val) {
    //     st.push(val);
    //     m[val]++;
    // }
    
    // void pop() {
    //     int t=st.top();
    //     m[t]--;
    //     if(m[t]==0) m.erase(t);
    //     st.pop();
    // }
    
    // int top() {
    //     return st.top();
    // }
    
    // int getMin() {
    //     auto i=m.begin();
    //     return i->first;
    // }
    stack<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()) st.push({val,val});
        else st.push({val,min(st.top().second,val)});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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