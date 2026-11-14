class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans=0,fresh=0;
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]==1) fresh++;
            }
        }
        vector<pair<int,int>> p={{-1,0},{0,-1},{0,1},{1,0}};
        while(!q.empty()&&fresh>0)
        {
            int size=q.size();
            while(size--)
            {
                auto [i,j]=q.front();
                q.pop();
                for(auto [di,dj]:p)
                {
                    int x=di+i,y=dj+j;
                    if(x>=0&&y>=0&&x<grid.size()&&y<grid[0].size()&&grid[x][y]==1)
                    {
                        grid[x][y]=2;
                        fresh--;
                        q.push({x,y});
                    }
                }
            }
            ans++;
        }
        return (fresh>0)?-1:ans;
    }
};