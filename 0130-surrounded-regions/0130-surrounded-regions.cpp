class Solution {
public:
    void dfs(vector<vector<char>> &v,int i,int j)
    {
        v[i][j]='S';
        vector<pair<int,int>> d={{0,1},{1,0},{0,-1},{-1,0}};
        for(auto [dx,dy]:d)
        {
            int di=i+dx,dj=j+dy;
            if(di>=0&&di<v.size()&&dj>=0&&dj<v[0].size()&&v[di][dj]=='O') dfs(v,di,dj);
        }
        return;
    }
    void solve(vector<vector<char>>& board) 
    {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<n;i++)
        {
            if(board[0][i]=='O') dfs(board,0,i);
            if(board[m-1][i]=='O') dfs(board,m-1,i);
        }    
        for(int j=0;j<m;j++)
        {
            if(board[j][0]=='O') dfs(board,j,0);
            if(board[j][n-1]=='O') dfs(board,j,n-1); 
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='S') board[i][j]='O';
            }
        }
    }
};