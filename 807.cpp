// Max Increase to Keep City Skyline

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        std::vector<int> leftRight, topBottom;
        for(int i=0;i<grid.size();i++)
        {
            int maxi = -1;
            for(int j=0;j<grid[i].size();j++)
            {
                maxi = max(grid[i][j], maxi);
            }
            leftRight.push_back(maxi);
        }
        
        for(int j=0;j<grid[0].size();j++)
        {
            int maxi = -1;
            for(int i=0;i<grid.size();i++)
            {
                maxi=max(maxi, grid[i][j]);
            }
            topBottom.push_back(maxi);
        }
        
        
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0; j< grid[i].size(); j++)
            {
                int maxPossible = min(leftRight[i], topBottom[j]);
                ans+=maxPossible-grid[i][j];
            }
        }
        return ans;
        
        
        
    }
};