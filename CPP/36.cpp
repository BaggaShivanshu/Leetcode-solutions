// Valid Sudoku
bool rowCheck(vector<vector<char>>& board, int x, int y)
{
    char num = board[x][y];
    for(int i=0;i<9;i++)
    {
        if(board[x][i] == num && i!=y)
            return false;
    }
    return true;
}

bool columnCheck(vector<vector<char>>& board, int x, int y)
{
    char num = board[x][y];
    for(int i=0;i<9;i++)
    {
        if(board[i][y] == num && i!=x)
            return false;
    }
    return true;
}

bool boxCheck(vector<vector<char>>& board, int x, int y)
{
    char num = board[x][y];
    int startX = x/3;
    int startY= y/3;
    
    for(int i= startX*3; i< startX*3 +3 ; i++)
    {
        for(int j= startY*3; j < startY*3 +3; j++)
        {
            if(board[i][j] == num && i!=x && y!=j)
                return false;
        }
    }
    return true;
}



class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // we are given a 9*9 matrix :/
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board.size();j++)
            {
                if(board[i][j]!='.')
                {
                    bool valid = rowCheck(board, i, j) && columnCheck(board, i, j) && boxCheck(board, i, j);
                    if(!valid)
                        return false;
                }
            }
        }
        return true;
    }
};