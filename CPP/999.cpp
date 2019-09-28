// Available Captures for Rook
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rookX = -1;
        int rookY=-1;
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='R')
                {
                    rookX = i;
                    rookY = j;
                    break;
                }
            }
        }
        
        int count=0;
        // move right
        
        for(int j = rookY+1; j <board[0].size();j++)
        {
            if(board[rookX][j]=='B')
                break;
            if(board[rookX][j]=='p')
            {
                count++;
                break;
            }
        }
        
        // move left;
        for(int j= rookY-1; j>=0; j--)
        {
            if(board[rookX][j]=='B')
                break;
            if(board[rookX][j]=='p')
            {
                count++;
                break;
            }
        }
        
        // move top
        for(int i = rookX-1; i>=0; i--)
        {
            if(board[i][rookY]=='B')
                break;
            if(board[i][rookY]=='p')
            {
                count++;
                break;
            }
        }
        // move down
        for(int i= rookX+1 ; i<board.size();i++)
        {
            if(board[i][rookY]=='B')
                break;
            if(board[i][rookY]=='p')
            {
                count++;
                break;
            }
        }
        return count;
        
    }
};