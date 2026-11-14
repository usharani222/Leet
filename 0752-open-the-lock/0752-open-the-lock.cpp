class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(), deadends.end());
        queue<string> q;
        unordered_set<string> visited;
        string start="0000";
        if(dead.find(start)!=dead.end()) return -1;
        q.push(start);
        visited.insert(start);
        int moves=0;
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                string s=q.front();
                q.pop();
                if(s==target) return moves;
                for(int i=0;i<4;i++)
                {
                  string up=s;
                  up[i] = (s[i] - '0' + 1) % 10 + '0';
                  string down = s;
                  down[i] = (s[i] - '0' + 9) % 10 + '0';
                  if(dead.find(up) == dead.end() &&  visited.find(up) == visited.end()) 
                  {
                    visited.insert(up);
                    q.push(up);
                  }
                  if(dead.find(down) == dead.end() &&  visited.find(down) == visited.end()) 
                  {
                   visited.insert(down);
                   q.push(down);
                   }
                }
            }
            moves++;
        }
        return -1;
    }
};