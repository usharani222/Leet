class Solution {
public:
    bool isexists(vector<vector<char>>& board, string word,int i,int j,int x)
    {
        if(x==word.size()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[x]) return false;
        char t=board[i][j];
        board[i][j]='#';
        vector<pair<int,int>> dir={{1,0},{0,1},{0,-1},{-1,0}};
        for(auto [di,dj]:dir)
        {
            int ni=i+di,nj=j+dj;
            if(isexists(board,word,ni,nj,x+1)) 
            {
                board[i][j]=t;
                return true;
            }
       }
       board[i][j]=t;
       return false;
    }
    bool exist(vector<vector<char>>& board, string word) 
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0]) 
                {
                    if(isexists(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};