// Maximal Square
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0)
            return 0;
        std::vector<std::vector<int> > v(matrix.size()+1, std::vector<int>(matrix[0].size()+1,0));
        int ans=0;
        for(int i=1; i< v.size();i++)
        {
            for(int j=1;j<v[0].size();j++)
            {
                
                if(matrix[i-1][j-1]=='0')
                    v[i][j]=0;
                else
                    v[i][j]=min(v[i-1][j-1], min(v[i-1][j], v[i][j-1]))+1;
                
                ans = max(ans, v[i][j]);
            }
        }
        return ans*ans;
    }
};