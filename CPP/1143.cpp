// Longest Common Subsequence
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        std::vector<std::vector<int> > matrix(text2.size()+1, std::vector<int>(text1.size()+1, 0)); 
        for(int i=1; i< matrix.size();i++)
        {
            for(int j=1; j< matrix[0].size();j++)
            {
                if(text1[j-1]==text2[i-1])
                    matrix[i][j]= matrix[i-1][j-1]+1;
                else
                    matrix[i][j]= max(matrix[i-1][j-1], max(matrix[i-1][j], matrix[i][j-1]));
            }
        }
        return matrix[matrix.size()-1][matrix[0].size()-1];
    }
};