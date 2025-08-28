class Solution {
public:
    void dfs(vector<vector<char>>& board,int i,int j)
    {
        board[i][j]='S';
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        for(auto [di,dj]:dir)
        {
            int ni=i+di,nj=j+dj;
            if(ni>=0 && ni<board.size() && nj>=0 && nj<board[0].size() && board[ni][nj]=='O')
                dfs(board,ni,nj);
        }
    }
    void solve(vector<vector<char>>& board) 
    {
        int n=board.size(),m=board[0].size();
        //Traverse borders
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O') dfs(board,i,0);
            if(board[i][m-1]=='O') dfs(board,i,m-1);
        }
        for(int i=0;i<m;i++)
        {
            if(board[0][i]=='O') dfs(board,0,i);
            if(board[n-1][i]=='O') dfs(board,n-1,i);
        }

        // Flip enclosed 'O' -> 'X' and restore safe 'S' -> 'O'
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='S') board[i][j]='O';
            }
        }
    }
};