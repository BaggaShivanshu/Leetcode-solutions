// Surrounded Regions
void floodFill(vector<vector<char>>& board, int i, int j)
{
    board[i][j]='O';
    if(i+1 < board.size() && board[i+1][j]=='-')
        floodFill(board, i+1, j);
    if(j+1 < board[0].size() && board[i][j+1]=='-')
        floodFill(board, i, j+1);
    if(i-1 >=0 && board[i-1][j]=='-')
        floodFill(board, i-1, j);
    if(j-1 >=0 && board[i][j-1]=='-')
        floodFill(board, i, j-1);
    
    return;
    
}
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.size()==0)
            return;
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='-';
            }
        }
        
        //std::cout<<board.size()<<" "<<board[0].size()<<"\n";
        
        for(int i=0; i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(i==0 || i== board.size()-1 || j==0 || j==board[0].size()-1)
                {
                    if(board[i][j]=='-')
                    {
                        //std::cout<<i<<" "<<j<<"\n";
                        floodFill(board, i, j);
                    }
                }
            }
        } 
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='-')
                    board[i][j]='X';
            }
        }
        
    }
};