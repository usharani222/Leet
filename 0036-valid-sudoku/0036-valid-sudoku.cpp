class Solution {
public:
    bool isvalid(vector<vector<char>>& board,int i,int j,int c)
    {
        for(int k=0;k<board[0].size();k++)
        {
            if(k!=j&&board[i][k]==c)  return false;
        }
        for(int k=0;k<board[0].size();k++)
        {
            if(k!=i&&board[k][j]==c)  return false;
        }
        int substart=(i/3)*3;
        int subend=(j/3)*3;

        for(int k=substart;k<substart+3;k++)
        {
            for(int r=subend;r<subend+3;r++)
            {
                if((k!=i || r!=j)&&board[k][r]==c)  return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]!='.' && !isvalid(board,i,j,board[i][j]))   return false;
            }
        }
        return true;
    }
};