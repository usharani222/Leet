class Solution {
public:
    bool detectCycle(int n, vector<vector<int>>& adj,vector<int> &vis,vector<int> &dfsvis)
    {
        vis[n]=1;
        dfsvis[n]=1;
        for(auto it:adj[n])
        {
            if(!vis[it]) 
            {
                if(detectCycle(it,adj,vis,dfsvis)) return true;
            }
            else if(dfsvis[it]) return true;
        }
        dfsvis[n]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<vector<int>> adj(numCourses);
        for (auto& pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]); // course pre[0] depends on pre[1]
        }
        vector<int> vis(numCourses,0);
        vector<int> dfsvis(numCourses,0);
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i])
            {
                if(detectCycle(i,adj,vis,dfsvis)) return false;
            }
        }    
        return true;
    }
};