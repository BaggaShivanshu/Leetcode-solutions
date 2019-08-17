// Number of Islands
void dfs(vector<vector<char>>& grid, int i, int j, std::vector<std::vector<bool> > &visited  )
{
    visited[i][j]=true;
    if(i+1<grid.size() && !visited[i+1][j] && grid[i+1][j]=='1')
    {
        dfs(grid, i+1, j, visited);
    }
    if(j+1< grid[0].size() && !visited[i][j+1] && grid[i][j+1]=='1')
    {
        dfs(grid, i, j+1, visited);
    }
    if(i-1>=0 && !visited[i-1][j] && grid[i-1][j]=='1')
    {
        dfs(grid, i-1, j, visited);
    }
    if(j-1>=0 && !visited[i][j-1] && grid[i][j-1]=='1')
    {
        dfs(grid, i, j-1, visited);
    }
    return;
    
    
}
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)
            return 0;
        std::vector<std::vector<bool> > visited(grid.size(), std::vector<bool>(grid[0].size(), false));
        
        int noOfIsland =0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size(); j++)
            {
                if(!visited[i][j] && grid[i][j]=='1')
                {
                    dfs(grid, i, j, visited);
                    noOfIsland++;
                }
            }
        }
        return noOfIsland;
        
    }
};