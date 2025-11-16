class Solution {
public:
    int secondHighest(string s) {
        priority_queue<int> pq;
        for(char i:s)    
        {
            if(isdigit(i)) pq.push(i-'0');
        }
        if(pq.empty()) return -1;
        int maxi=pq.top();
        while(!pq.empty()&&pq.top()==maxi) pq.pop();
        if(pq.empty()) return -1;
        return pq.top();
    }
};