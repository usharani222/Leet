class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int land=0,water=0,maxi=0,n=grid.size(),m=grid[0].size();
        vector<vector<int>> dis(n,vector<int>(m,-1));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1) 
                {
                    q.push({i,j});
                    land++;
                    dis[i][j]=1;
                }
                else water++;
            }
        }
        if(land==0||water==0) return -1;
        vector<pair<int,int>> p={{-1,0},{0,-1},{0,1},{1,0}};
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                auto [x,y]=q.front();
                q.pop();
                for(auto [di,dj]:p)
                {
                    int i=di+x,j=dj+y;
                    if(i>=0 && j>=0 && i<n && j<m && grid[i][j]==0 && dis[i][j]==-1)
                    {
                        dis[i][j]=1+dis[x][y];
                        q.push({i,j});
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                maxi=max(maxi,dis[i][j]);
            }
        }
        return maxi-1;
    }
};