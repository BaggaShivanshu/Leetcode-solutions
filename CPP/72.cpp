//  Edit Distance
class Solution {
public:
    int minDistance(string word1, string word2) {
        
        std::vector<std::vector<int> > matrix(word2.size()+1, std::vector<int>(word1.size()+1,0));
        
        for(int i=0;i<matrix[0].size();i++)
            matrix[0][i]=i;
        
        for(int i=0;i<matrix.size();i++)
            matrix[i][0]=i;
        
        for(int i=1;i<matrix.size();i++)
        {
            for(int j= 1; j<matrix[0].size();j++)
            {
                char c1 = word2[i-1];
                char c2 = word1[j-1];
                
                if(c1==c2)
                    matrix[i][j]= matrix[i-1][j-1];
                else
                    matrix[i][j] = min(matrix[i-1][j], min(matrix[i][j-1], matrix[i-1][j-1])) +1;
            }
        }
        return matrix[matrix.size()-1][matrix[0].size()-1];
    }
};