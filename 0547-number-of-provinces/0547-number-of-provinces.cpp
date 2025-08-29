class Solution {
public:
    void dfs(int node,vector<vector<int>> &adjList,vector<int> &vis)
    {
        vis[node]=1;
        for(int it:adjList[node])
        {
            if(vis[it]==0)
            {
                dfs(it,adjList,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        vector<vector<int>> adjList(n);
        //adj matrix to list
        for(int i=0;i<n;i++)  
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1&&i!=j)
                {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }  
        vector<int> vis(n,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                c++;
                dfs(i,adjList,vis);
            }
        }
        return c;
    }
};