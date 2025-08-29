class Solution{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat){
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>> dist(n,vector<int>(m,-1));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        vector<pair<int,int>> dir={{0,1},{0,-1},{-1,0},{1,0}};
        while(!q.empty())
        {
            auto [x,y]=q.front();
            q.pop();
            for(auto [dx,dy]:dir)
            {
                int nx=x+dx,ny=y+dy;
                if(nx>=0&&ny>=0&&nx<n&&ny<m&&dist[nx][ny]==-1)
                {
                    dist[nx][ny]=dist[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
        return dist;
    }
};
