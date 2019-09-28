// Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        
        int hori =0;
        int verti =0;
        
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
                verti++;
            else if(moves[i]=='D')
                verti--;
            else if(moves[i]=='L')
                hori--;
            else
                hori++;
        }
        
        return (hori==0 && verti ==0);
        
    }
};