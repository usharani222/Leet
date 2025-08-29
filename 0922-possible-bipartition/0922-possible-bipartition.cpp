class Solution {
public:
    bool check(int i,vector<vector<int>>& adj,vector<int> &color)
    {
        queue<int> q;
        q.push(i);
        color[i]=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();

            for(auto it:adj[node])
            {
                if(color[it]==-1) 
                {
                    color[it]=!color[node];
                    q.push(it);
                }
                else if(color[it]==color[node]) return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) 
    {
        vector<int> color(n+1,-1);
        vector<vector<int>> adj(n+1);
        for(auto &d : dislikes)
        {
            adj[d[0]].push_back(d[1]);
            adj[d[1]].push_back(d[0]);
        }

        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                if(check(i,adj,color)==false) return false;
            }
        }    
        return true;
    }
};