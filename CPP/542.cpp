// 01 Matrix
    class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        std::queue<pair<int, int> > q;
        
        
        std::vector<std::vector<int> > ans(matrix.size(), std::vector<int> (matrix[0].size(), INT_MAX));
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push(make_pair(i,j));
                }
            }
        }
        while(!q.empty())
        {
            std::pair<int, int> firstElement = q.front();
            q.pop();
            int x = firstElement.first;
            int y = firstElement.second;
            
            if(x+1< matrix.size() && y < matrix[0].size() && ans[firstElement.first][firstElement.second] < ans[x+1][y])
            {
                ans[x+1][y] = ans[firstElement.first][firstElement.second]+1;
                q.push(make_pair(x+1,y));
            }
            
            if(x< matrix.size() && y+1 < matrix[0].size() && ans[firstElement.first][firstElement.second] < ans[x][y+1])
            {
                ans[x][y+1] = ans[firstElement.first][firstElement.second]+1;
                q.push(make_pair(x,y+1));
            }
            
            if(x-1 >=0  && y >=0 && ans[firstElement.first][firstElement.second] < ans[x-1][y])
            {
                ans[x-1][y] = ans[firstElement.first][firstElement.second]+1;
                q.push(make_pair(x-1,y));
            }
            
            if(x >=0  && y-1 >=0 && ans[firstElement.first][firstElement.second] < ans[x][y-1])
            {
                ans[x][y-1] = ans[firstElement.first][firstElement.second]+1;
                q.push(make_pair(x,y-1));
            }
                
        }
        return ans;
        
    }
};